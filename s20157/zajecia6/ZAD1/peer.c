#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h> 

#define MAX_BUFF 255

int main (int argc, char* argv[]){
	
	char buffer[MAX_BUFF];
	char* filename = NULL;
	struct addrinfo hints, *result, *rp;
	
	bzero((char*)&hints, sizeof(struct addrinfo));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	if(argc != 3){
		fprintf(stderr, "Usage: \"%s [HOSTNAME] [PORT_NUMBER]\"\n", argv[0]);
		exit(1);
	}  	
	int err = getaddrinfo(argv[1], argv[2], &hints, &result);
	if(err != 0){
		fprintf(stderr, gai_strerror(err));
		exit(2);
		}
	for(rp = result; rp != NULL; rp->ai_next){

	//CREATE SOCKET//
    int sockd =
        socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
    if (sockd != -1) {
      int status = connect(sockd, rp->ai_addr, rp->ai_addrlen);
      if (status != -1){
		
		printf("Connected with server!\n");
	//COMMUNICATION//
		read(sockd, buffer, MAX_BUFF);
		printf("%s\n", buffer);
		bzero(buffer, MAX_BUFF);
		printf("Write name of the file you want to download\n");
		scanf("%s", buffer);
		
		filename = (char*)malloc(strlen(buffer + 1));// +1 == \0
		strcpy(filename, buffer);
		int filelen = strlen(filename); //dlugosc nazwy pliku
				
		
		write(sockd, &filelen, sizeof(int));
		write(sockd, filename, filelen);
		
		
		saveToFile(sockd);
		
		freeaddrinfo(result);
		close(sockd);
		exit(0);
		}
		else{
			
	close(sockd);
	fprintf(stderr, "Could not connect with server\n");
	}
}
}
  freeaddrinfo(result);
  fprintf(stderr, "Could not open connection\n");
  exit(3);
}			

void saveToFile(int sockd){
		long filesize;
		char* buffFile;
		
		read(sockd, &filesize, sizeof(long));
		if(filesize == -1l){
			printf("Could not find file\n");
			exit(4);
		}
		printf("File size is: %ld\n", filesize);
		buffFile = (char*)malloc(filesize + 1);
		read(sockd, buffFile, filesize);
		printf("%s\n", buffFile);
		FILE* fptr = fopen("plik.txt", "w");
		if(fptr == NULL){
			fprintf(stderr, "Could not save file\n");
		}
		else{
			
			fprintf(fptr, "%s", buffFile);
			}
		
		}

			
	
	
		
	
