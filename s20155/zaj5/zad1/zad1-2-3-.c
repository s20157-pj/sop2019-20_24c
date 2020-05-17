#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv){
	
	int p_id,p_pid;
     
    p_id=getpid();  /*process id*/
    p_pid=getppid(); /*parent process id*/
     
    printf("Process ID: %d\n",p_id);
    printf("Parent Process ID: %d\n",p_pid);
	
	scanf(" %c", argv[argc]);
	
    return 0;
}
