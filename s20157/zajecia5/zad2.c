#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (int argc, char **argv){
int input;
printf("PID: %d, PPID: %d", getpid(), getppid());
scanf("%d", input);
return 0; 



}
