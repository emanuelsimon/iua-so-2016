#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
	
	int pid;
	int status;
	pid = fork();
	
	if (pid == 0) {
		printf("El proceso hijo es = %d \n", getpid());
	} else {
		printf("El proceso padre es = %d \n", getppid());
		wait(&status);
		printf("status = %d \n", status);
	}



	return 0;
}