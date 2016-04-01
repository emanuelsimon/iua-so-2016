#include <stdio.h>
#include <stdlib.h>


int main() {
	int pid;
	...
	pid = fork();
	if (pid == 0) {
		/* hijo */
		...
	} else {
	/* padre */
		...
	}
	return 0;
	}
