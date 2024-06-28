#include <pthread.h>
#include <stdio.h>
#define N 100

long sum = 0;


void *naturalNumberSum(void *threadId)
{
    long tid = (long)threadId;
    printf("Thread id %d\n ",tid);
    sum +=tid;
    return NULL;
}


int main()
{
    pthread_t thread;

    for (int  i = 0; i < N; i++)
    {
        pthread_create(thread, NULL, naturalNumberSum, (void *)i);
    }

    // sfu => special function unit



    
    
    

    return 1;
}