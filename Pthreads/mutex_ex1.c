#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

#define N 100
pthread_mutex_t mutex;
int add = 0;

void sum(void threadId){
    int tid = threadId;
    pthread_mutex_lock(&mutex);
        add += (int)tid;    
    pthread_mutex_unlock(&mutex);
}

int main(){
    pthread_t t;
    
    t = malloc (N *sizeof(int)); 
    for(int i = 1; i <= N; i++){
        pthread_create(&t, NULL, sum, (void*)i);
    }

    for(int i = 1; i <= N; i++){
        pthread_join(t, NULL);
    }
    printf("Sum of natural numbers upto %d: %d\n", N, add);
    return 0;
}

/*

ulimit -s
stack

*/