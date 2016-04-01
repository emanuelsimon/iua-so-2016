#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	
	int pid;
	
	pid = fork();
	
	if (pid == 0) {
		printf("El proceso hijo es = %d \n", getpid());
	} else {
		printf("El proceso padre es = %d \n", getppid());
	}

	return 0;
}