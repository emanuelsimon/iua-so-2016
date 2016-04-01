 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/wait.h>

int main() {
	int pid; int STATUS;
	pid = fork();
	if (pid == 0) {
		/* hijo */
		printf("Proceso hijo pid: %d \n", getpid());
	} else {
	/* padre */
		printf("Proceso Padre %d \n", getppid());
		wait(&STATUS);
		printf("Status: %d\n", STATUS);
		}

	return 0;
	}
