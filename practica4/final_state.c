#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[]) {
	printf("Process %ld \n", (long)getpid());
	int processFork;
	int finalState;
	pid_t val_return;
	for(int aux = 0; aux < 5; aux++) {
		processFork = fork();
		if (processFork == 0) {
			printf("Process %ld, Process iteration: %d, Parent Process is: %ld\n\n", (long)getpid(), aux + 1, (long)getppid());
		} else {
			printf("Parent process %ld , Process Iteration: %d", (long)getpid());
			//bugged 0 position is here
			printf(" Message from child process: %d\n", finalState/256);
			break;
		}
	}
	
	wait();
	while(wait(&finalState) > 0) {
		printf("Parent process %ld , Process Iteration: %d ", (long)getpid());
		printf("Message form child process: %d\n", WEXITSTATUS(finalState));
		printf("Message from child process: %d\n", finalState/256);
	}
	exit(0);
}