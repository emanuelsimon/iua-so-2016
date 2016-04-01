#include <stdio.h>
#include <unistd.h>

int main() {
	int pid;
	
	pid = fork();

	if  (pid == -1){
		printf("\nError: No se pudo crear el hijo.\n");
	} else{
		if (pid == 0) {
			/* hijo */
			printf("\nSoy un proceso hijo.\n");
		} else {
		/* padre */
			printf("\nSoy el proceso padre.\n");
		}
	}
	return 0;
}