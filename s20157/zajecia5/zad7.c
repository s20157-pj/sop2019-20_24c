#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char**argv){
	
	pid_t masterPid = getpid();
	
	for (int i = 0; i < 10; i++){
		pid_t child = fork();
		if(child == 0){
			break;
			}
	}		
		if(getppid() == masterPid){
			printf("Kolejne dziecko zaczyna czeka\n");
			sleep(3);
			printf("Dziecko sie konczy\n");
		}
		if(getpid() == masterPid){
			wait(NULL);
			printf("Master zaczyna czeka\n");
		}
		
		return 0;
	}
