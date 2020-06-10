#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (int argc, char* argv[]){
if (argc != 2){
	return 1;
}
int argument = atoi(argv[1]);

pid_t pid = fork();
	
if(pid>0){
	printf("Rodzic czeka na zakonczenie dziecka\n");
	wait(NULL);
	printf("Zakonczenie procesu dziecka\n");
	printf("R PID= %d\n", getpid());
	printf("R PPID= %d\n", getppid());
	int sum = 0;
	for (int i = 0; i <= argument; i++){
		sum += i;
	}
	printf("Rodzic obliczyl sume = %d\n", sum);
	fflush(stdout); //wymusza wypisanie na terminal
}
else{
	printf("D PID= %d\n", getpid());
	printf("D PPID= %d\n", getppid());
	printf("Dziecko wypisuje nieparzyste liczby:\n");
	for (int i = 1; i <= argument; i++){
	if( i % 2 == 1){
	printf("%d ", i);
	}
}
	printf("\n");
	fflush(stdout); //wymusza wypisanie na terminal
}
return 0;
}
