#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
///robimy dla 10 procesow
int main(int argc, char**argv){
	
	pid_t masterPid = getpid();
	
	for (int i = 0; i < 10; i++){
		pid_t child = fork();
		
		if(i==9 && child == 0){
			sleep(5);
		}
		
		if(child > 0){
		wait(NULL);
		break;
		}
}
}
		
		
		
			
			
