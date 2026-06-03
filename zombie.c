#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int child_pid = fork();

    if (child_pid ==0) {
        // Child process
        printf("Child process (PID: %d) is exiting now.\n", getpid());
        exit(0); // Child finishes and becomes a zombie
    } 
    else {
   // Parent process
        printf("Parent process (PID: %d) is sleeping...\n", getpid());
        sleep(50); // Parent stays alive without child
    }

    return 0;

    
printf("here , after the execution of child  process it sleeps for 2 sec and then terminates , but the present proces cannt remove the child process from the PCB . after execution of  the parent process it goes to sleep for 30 sec and in this mean time the 30 mbie process is created ");
}
