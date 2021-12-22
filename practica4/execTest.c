#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	pid_t childpid;
	int status, x;
	char* arguments[] = {"ls", "-R", "/", 0};
	childpid = fork();
	if (childpid == -1) {
		printf("fork failed\n");
		exit(1);
	} else if (childpid == 0) {
		if (execl("/bin/ls", "ls", "-1", NULL) < 0) {
			printf("ls execution failed\n");
			exit(1);
		}
	}
	x = wait(&status);
	printf("Child process has been interrupted by a signal\n");
	exit(0);
}