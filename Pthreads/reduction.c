#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <semaphore.h>
#include <stdlib.h>
#define N 500000


long* arr;
long chunck;
long sum;
pthread_mutex_t mutex;


void *hello(void *threadId)
{   
    long tid = (long)threadId;
    long local_sum = 0;
    
    for(int i = chunck * tid ; i < (chunck * tid)+chunck ; i++)
    {
        local_sum = local_sum+arr[i];
    }
    pthread_mutex_lock(&mutex);
    // n*n+1/2
    sum = local_sum;
    pthread_mutex_unlock(&mutex);


    return NULL;
}



int main()
{   
    
    pthread_mutex_init(&mutex,NULL);

    arr = malloc(N*sizeof(long));

    chunck = N/100;

    for (int i = 0 ; i< N ;i++)
    {
        arr[i] = i;
    }

    pthread_t * threads;
    threads = malloc(N*sizeof(pthread_t));


    for(long i = 0; i < 100; i++)
    {
        pthread_create(&threads[i], NULL, hello, (void *)i);
    }

    for(long i = 0; i < 100; i++)
    {
        pthread_join(threads[i], NULL);
    }

    printf("Sum = %d \n ",sum);
  
    
    return 0;
}