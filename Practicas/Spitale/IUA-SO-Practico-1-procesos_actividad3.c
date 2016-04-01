#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	int pid;

	pid = fork();
	
	if (pid == 0) {
		/* hijo */
		printf("\nEstoy en el Proceso hijo. Valor devuelto (%d)", pid);
		printf("\nPID proceso hijo: %d", getpid());
		printf("\nPID proceso padre: %d\n", getppid());
	} else {
		/* padre */
		printf("\nEstoy en el Proceso padre");
		printf("\nPID del proceso padre: %d\nPID del proceso padre del padre: %d\n",getpid(), getppid());
	}

	return 0;
}
