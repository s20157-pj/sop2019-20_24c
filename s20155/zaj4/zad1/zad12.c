#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	
	int suma=0;
	
	printf("Podales: %d argumentow: \n", argc-1);
	for (int i = 1; i < argc; ++i){
		printf("%s\n", argv[i]);
	}
	
	for (int i = 1; i < argc; ++i){
		int num = atoi(argv[i]);
		suma+=num;
	}
	//printf("Suma wynosi: %d\n", suma);
	return suma;
	//aby sprawdzic wpisz $?
	
	return 0;
}
