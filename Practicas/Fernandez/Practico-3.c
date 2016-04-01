 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
int main() {
	int pid; 
	pid = fork();
	if (pid == 0) {
		/* hijo */
		printf("Proceso hijo pid: %d \n", getpid());
	} else {
	/* padre */
		printf("Proceso Padre %d \n", getppid());
	}
	return 0;
	}