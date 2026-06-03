#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int pid = fork();

    if (pid == 0) {
         
        sleep(5);
 
        printf("Child (PID: %d) is now orphaned. My new Parent ID is %d.\n",
               getpid(), getppid());
    }
    else if (pid > 0) {
       
        printf("Parent (PID: %d) is terminating.\n", getpid());
        exit(0);
    }
    else {
        
        printf("Fork failed.\n");
        return 1;
    }

    return 0;
    printf("Here, the PID of the parent process and the child process can be verified and it came out to be different.");
}