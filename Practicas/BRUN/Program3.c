/*3. Escriba un programa similar al anterior, de modo que cada proceso 
obtenga su propio numero de proceso y el de su padre; a continuación 
imprima el resultado. Estudie y utilice las llamadas getpid() y getppid().*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>




int main() {
	int pid;
	pid = fork();

	if (pid == 0) {
		/* hijo */
		printf("\nProceso HIJO");
		printf("\nEste es el proceso PID=%d  y su padre es PPID=%d\n" , getpid(),
			getppid());
	} else {
	/* padre */
		printf("\nProceso PADRE");
		printf("\nProceso padre del proceso PID=%d", pid);
		printf("\nEste es el proceso PID=%d  y su padre es PPID=%d\n" , getpid(),
			getppid());
	}
	return 0;
	}