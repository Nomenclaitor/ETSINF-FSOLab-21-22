#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[]) {
	printf("Process %ld \n", (long)getpid());
	int processFork;
	for(int aux = 0; aux < 5; aux++) {
		processFork = fork();
		if (processFork == 0) {
		printf("Process %ld, Process: %d, Parent Process is: %ld\n", (long) getpid(),
		 	aux + 1, (long) getppid());
		sleep(10);
		exit(aux);
		}
	}
	wait();
	exit(0);
}