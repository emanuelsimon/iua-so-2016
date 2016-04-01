 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
int main() {
	int pid; 
	pid = fork();
	if (pid == 0) {
		/* hijo */
		printf("Proceso hijo %d \n", pid);
	} else {
	/* padre */
		printf("Proceso Padre %d \n", pid);
	}
	return 0;
	}