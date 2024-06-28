#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define WIDTH 1024
#define HEIGHT 1024
#define MAX_ITER 1000

int mandelbrot(double c_re, double c_im, int max_iter) {
    double z_re = 0.0;
    double z_im = 0.0;
    int iter = 0;

    while (iter < max_iter && (z_re * z_re + z_im * z_im) < 4.0) {
        double temp_re = z_re * z_re - z_im * z_im + c_re;
        double temp_im = 2.0 * z_re * z_im + c_im;
        z_re = temp_re;
        z_im = temp_im;
        iter++;
    }

    return iter;
}

int main() {
    clock_t start_time = clock();

    int *image = (int *)malloc(WIDTH * HEIGHT * sizeof(int));

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            double c_re = (double)x / WIDTH * 3.5 - 2.5;
            double c_im = (double)y / HEIGHT * 2.0 - 1.0;
            int iter = mandelbrot(c_re, c_im, MAX_ITER);
            image[y * WIDTH + x] = iter;
        }
    }

    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Mandelbrot set calculation took %f seconds\n", elapsed_time);

    // Output the image as a PPM file
    FILE *fp = fopen("mandelbrot.ppm", "wb");
    fprintf(fp, "P6\n%d %d\n255\n", WIDTH, HEIGHT);
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int iter = image[y * WIDTH + x];
            unsigned char r = (iter % 8) * 32;
            unsigned char g = (iter % 16) * 16;
            unsigned char b = (iter % 32) * 8;
            fwrite(&r, 1, 1, fp);
            fwrite(&g, 1, 1, fp);
            fwrite(&b, 1, 1, fp);
        }
    }
    fclose(fp);

    free(image);

    return 0;
}