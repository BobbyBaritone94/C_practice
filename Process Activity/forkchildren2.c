#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>

int main(int argc, char *argv[])
{

    int status;

    int parent = getpid();
    //child creation
    for(int i = 0; i<2;i++){
    pid_t pid = fork();

        if(pid==0)
        {
            if(parent+1==getpid())
            {
                printf("\nFIRST CHILD\n");
                char* args[] = {"ls","-l",NULL};
                execvp(args[0],args);
                exit(0);
            
            }else
            {
                sleep(2);
                printf("SECOND CHILD");
                char* args[] = {"cat","forkchildren2.c",NULL};
                execvp(args[0],args);
                exit(0);
            }
        }
    }

    //parent waits for children

    while ((waitpid(-1,&status,0))!=-1) {
      
    }
    printf("\n\nChild processes completed! All done.\n");

    return 0;
}