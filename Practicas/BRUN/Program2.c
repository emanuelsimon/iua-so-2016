/*2. Escriba un programa (en C) que utilice la llamada fork() para 
crear un nuevo proceso. Es necesario que cada proceso escriba un 
mensaje diferente en pantalla.*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>




int main() {
	int pid;
	pid = fork();

	if (pid == 0) {
		/* hijo */
		printf("\nEste es el proceso hijo con PID=%d\n" , pid);
	} else {
	/* padre */
		printf("\nEste es el proceso padre PID=%d y su hijo es PID=%d", getpid(), pid);
	}
	return 0;
	}
