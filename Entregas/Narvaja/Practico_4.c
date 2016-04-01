#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
	int pid;
	int STATUS;

	pid = fork();

	if  (pid == -1){
		printf("\nError: No se pudo crear el hijo.\n");
	} else{
		if (pid == 0) {
			/* hijo */
			printf("\nSoy un proceso hijo.\nMi PID = %d\nMi padre PID = %d\n", getpid(), getppid());
		} else {
		/* padre */
			wait(&STATUS);
			printf("\nSoy el proceso padre.\nMi PID = %d\nMi padre PID = %d\n", getpid(), getppid());
			printf("El  status del hijo STATUS = %d\n", STATUS);
		}
	}
	return 0;
}