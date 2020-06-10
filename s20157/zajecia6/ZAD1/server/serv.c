#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define MAX_BUFF 255

int main(int argc, char **argv) {
  const int queue = 10;
  int listening_socket;
  struct addrinfo hints, *result, *rp;
  bzero((char *)&hints, sizeof(struct addrinfo));

  hints.ai_family = AF_INET;     
  hints.ai_socktype = SOCK_STREAM; 
  hints.ai_flags = AI_PASSIVE;    

  int err = getaddrinfo(NULL, argv[1], &hints, &result);
  if (err != 0) {
    fprintf(stderr, gai_strerror(err));
    exit(1);
  }

  for (rp = result; rp != NULL; rp = rp->ai_next) {
    //CREATE SOCKET//
    int sockd = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
    if (sockd != -1) {
      if (bind(sockd, rp->ai_addr, rp->ai_addrlen) == 0) {
        freeaddrinfo(result);
       for(;;){
        if (listen(sockd, queue) == -1) {
          fprintf(stderr, "Problem with listening\n");
          exit(2);
        }
       listeningSocketReady(sockd);
     }
  }
      else {	  
	close(sockd);
	fprintf(stderr, "Could not bind address\n");
    }
  } 
}
	freeaddrinfo(result);
	fprintf(stderr, "Could not open server\n");
	exit(3);
}
//Accept//
void listeningSocketReady(int listening_socket) {
  struct sockaddr_storage peer_addr;
  socklen_t peer_addr_len = sizeof(struct sockaddr_storage);
  int connectedSocket = accept(listening_socket, 
	(struct sockaddr *)&peer_addr, &peer_addr_len);

  if (connectedSocket == -1) {
    fprintf(stderr, "Could not accept connection!\n");
    exit(4);
  }

//Clients'details//
  char host_[NI_MAXHOST], service_[NI_MAXSERV];
  getnameinfo((struct sockaddr *)&peer_addr, peer_addr_len, host_, NI_MAXHOST,
              service_, NI_MAXSERV, NI_NUMERICSERV | NI_NUMERICHOST);
  printf("Connection with Client: %s:%s\n", host_, service_);
  ConnectedSocketReady(connectedSocket);
}
//COMMUNICATION//
void ConnectedSocketReady(int connectedSocket) {
  char buffer[MAX_BUFF] = "\t\t!!W E L C O M E!\n";
  write(connectedSocket, buffer, MAX_BUFF);
  int filelen;
  char* filename;

  read(connectedSocket, &filelen, sizeof(int));
  filename = (char *)malloc(filelen + 1);
  read(connectedSocket, filename, filelen);
	//printf("%s\n", filename);
 
  long fileSize;
  char* bufferFile;
  
 FILE* f = fopen(filename, "r");
	if (f == NULL){
		printf("Could not find/open file\n");
		fileSize = -1l;
		write(connectedSocket, &fileSize, sizeof(fileSize));
	}
	else{
	fseek(f, 0, SEEK_END);
	fileSize = ftell(f);
	fseek(f, 0, SEEK_SET);	
	bufferFile = (char*)malloc(fileSize + 1);
	fgets(bufferFile, fileSize, f);
	fclose(f);
	write(connectedSocket, &fileSize, sizeof(fileSize));
	write(connectedSocket, bufferFile, fileSize);
	}
	printf("File \"%s\" sent\n");
	free(filename);
	close(connectedSocket);
}
