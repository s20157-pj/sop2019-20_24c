#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	
	char znak='*';
	
	for (int i=0; i < atoi(argv[1]); ++i){
		
		for (int j=0; j<=i; j++){
			printf("%c", znak);
		}
		printf(" \n");
	}
	
	return 0;
}
