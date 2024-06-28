#include <cuda_runtime.h>
#include <iostream>
#include <cmath>

#define NX 256
#define NY 256
#define NZ 256
#define BLOCK_SIZE 16

__global__ void poissonKernel(double *phi, double *rhs, int nx, int ny, int nz) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    int idy = blockIdx.y * blockDim.y + threadIdx.y;
    int idz = blockIdx.z * blockDim.z + threadIdx.z;

    if (idx < nx && idy < ny && idz < nz) {
        double dx = 1.0 / (nx - 1);
        double dy = 1.0 / (ny - 1);
        double dz = 1.0 / (nz - 1);

        double laplacian = 0.0;
        laplacian += (phi[(idx + 1) * ny * nz + idy * nz + idz] - 2.0 * phi[idx * ny * nz + idy * nz + idz] + phi[(idx - 1) * ny * nz + idy * nz + idz]) / (dx * dx);
        laplacian += (phi[idx * ny * nz + (idy + 1) * nz + idz] - 2.0 * phi[idx * ny * nz + idy * nz + idz] + phi[idx * ny * nz + (idy - 1) * nz + idz]) / (dy * dy);
        laplacian += (phi[idx * ny * nz + idy * nz + (idz + 1)] - 2.0 * phi[idx * ny * nz + idy * nz + idz] + phi[idx * ny * nz + idy * nz + (idz - 1)]) / (dz * dz);

        phi[idx * ny * nz + idy * nz + idz] = phi[idx * ny * nz + idy * nz + idz] - 0.5 * laplacian / rhs[idx * ny * nz + idy * nz + idz];
    }
}

int main() {
    int nx = NX;
    int ny = NY;
    int nz = NZ;

    double *phi_host, *rhs_host;
    cudaMallocHost((void **)&phi_host, nx * ny * nz * sizeof(double));
    cudaMallocHost((void **)&rhs_host, nx * ny * nz * sizeof(double));

    // Initialize phi and rhs arrays
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                phi_host[i * ny * nz + j * nz + k] = 0.0;
                rhs_host[i * ny * nz + j * nz + k] = 1.0;
            }
        }
    }

    double *phi_dev, *rhs_dev;
    cudaMalloc((void **)&phi_dev, nx * ny * nz * sizeof(double));
    cudaMalloc((void **)&rhs_dev, nx * ny * nz * sizeof(double));

    cudaMemcpy(phi_dev, phi_host, nx * ny * nz * sizeof(double), cudaMemcpyHostToDevice);
    cudaMemcpy(rhs_dev, rhs_host, nx * ny * nz * sizeof(double), cudaMemcpyHostToDevice);

    dim3 block(BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE);
    dim3 grid((nx + block.x - 1) / block.x, (ny + block.y - 1) / block.y, (nz + block.z - 1) / block.z);

    for (int iter = 0; iter < 100; iter++) {
        poissonKernel<<<grid, block>>>(phi_dev, rhs_dev, nx, ny, nz);
        cudaDeviceSynchronize();
    }

    cudaMemcpy(phi_host, phi_dev, nx * ny * nz * sizeof(double), cudaMemcpyDeviceToHost);

    // Output the result
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                phi_host[i * ny * nz + j * nz + k];
                // std::cout << "phi[" << i << "," << j << "," << k << "] = " << phi_host[i * ny * nz + j * nz + k] << std::endl;
            }
        }
    }

    cudaFree(phi_dev);
    cudaFree(rhs_dev);
    cudaFreeHost(phi_host);
    cudaFreeHost(rhs_host);

    return 0;
}