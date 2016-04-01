#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	int pid;

	pid = fork();
	
	if (pid == 0) {
		/* hijo */
		printf("\nEstoy en el Proceso hijo. Valor devuelto (%d)\n", pid);
	} else {
		/* padre */
		printf("\nEstoy en el Proceso padre. Su PID es: %d \nEl PID del proceso hijo es: %d\n",getpid(), pid);
	}

	return 0;
}
