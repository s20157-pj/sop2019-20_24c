#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (int argc, char **argv){
	
	pid_t masterPID = getpid();
	
	pid_t PID = fork();
	
	if(PID == 0){
		
		sleep(2);
		printf("D PID: %d, PPID: %d\n", getpid(), getppid());
		
}
else	{
		wait(NULL);
		printf("R PID: %d, PPID: %d\n", getpid(), getppid());
		
	}
		return 0;
	}
		
