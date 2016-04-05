#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
 
int main() {
	int pid;
	pid = fork(); /*Llamada al sistema para crear un proceso hijo identico al padre*/

	if (pid == 0) {
		/* hijo */
		printf("Proceso hijo PID N:%d \n",pid);
	} else {
	/* padre */
		printf("Proceso padre PID N: %d \n",pid);
	}
	return 0;
	}
