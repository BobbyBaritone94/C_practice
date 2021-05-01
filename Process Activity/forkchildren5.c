#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void childLabor(void)
{
    //Print child messages

    const int num = 6;

    int childID = getpid();

    for(int i = 0; i < num; i++)
    {   
        
        printf("I am child %d and this is message num %d\n",childID,(i+1));
        sleep(5);
    }
    printf("Children %d exiting\n",childID);
}

int main(int argc, char *argv[])
{
    int status;

    printf("\nParent PID at entry is %d\n",(int) getpid());

    //5 children
    for(int i = 0; i < 5;i++)
    {
        pid_t pid = fork();

        //Only children execute this code and then exit
        if(pid==0)
        {
            childLabor();
            exit(0);
        }
    }

    //parent waits for children
    while ((waitpid(-1,&status,0))!=-1) {
      
    }
    printf("Parent PID at exit is %d\n",(int) getpid());


    return 0;
}