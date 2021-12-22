#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[]) {
	printf("Process %ld \n", (long)getpid());
	fork();
	printf("Process %ld, my parent is: %ld\n", (long) getpid(), (long) getppid());
	sleep(10);
	exit(0);
}