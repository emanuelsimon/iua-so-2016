#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
 
int main() {
	
	/* hijo */
		printf("Proceso actual PID N:%d \n",getpid());

	/* padre */
		printf("Proceso padre PID N°: %d \n",getppid());
	return 0;
	}
