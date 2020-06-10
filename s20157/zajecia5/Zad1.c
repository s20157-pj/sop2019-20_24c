#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (int argc, char **argv){

printf("PID: %d, PPID: %d", getpid(), getppid());
return 0; 



}
