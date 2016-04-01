#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	
	int pid;
	
	pid = fork();
	
	if (pid == 0) {
		printf("El proceso hijo es = 0 \n");
	} else {
		printf("El proceso padre es = %d \n", pid);
	}

	return 0;
}