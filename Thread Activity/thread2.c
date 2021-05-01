#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

long long tidSum = 100;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* sum_runner(void* arg)
{   
    
    long long *threadNum_ptr = (long long*) arg;
    long long threadNum = *threadNum_ptr;

    pthread_mutex_lock(&mutex);

    tidSum+= threadNum;

    pthread_mutex_unlock(&mutex);

    printf("Thread ID: %lld\n\n",threadNum);

    pthread_exit(0);

}

int main(int argc, char **argv)
{

    int num_args = 5;

    pthread_t tids[num_args]; 

    for(int i = 0; i < num_args;i++)
    {
        pthread_attr_t attr;
        pthread_attr_init(&attr);
        pthread_create(&tids[i], &attr, sum_runner,&tids[i]);
    }

    for(int i = 0; i< num_args; i++)
    {
        pthread_join(tids[i],NULL);
      
    }
      printf("Sum so far %lld\n",tidSum);
   
}