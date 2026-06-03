#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int pid = fork();

    if (pid ==0) {
 
        sleep(5); 
 
        printf("Child (PID: %d) is now orphaned. My new Parent ID is %d.\n", getpid(), getppid());

    } else {
      
        printf("Parent (PID: %d) is terminating.\n", getpid());
        exit(0); 
    } 

    return 0;
    printf("If the parent process executes first, it sleeps for 1 second. During this time, the child process gets a chance to execute and goes to sleep for 3 seconds. Before the child wakes up, the parent process completes its sleep and terminates. As a result, the child process becomes an orphan process. Similarly, if the child process executes first and sleeps for 3 seconds, the parent process can execute afterward, sleep for 1 second, and terminate before the child finishes sleeping. In this case as well, the parent process terminates earlier than the child process, causing the child to become an orphan process. After the parent terminates, the orphaned child process is adopted by the init/systemd process.");
}