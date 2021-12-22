#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int i;
	char* arguments1[] = { "ls", "-la", 0};
	char* arguments2[] = { "cat", 0};
	int pipeDes[2];
	if ((pipe(pipeDes) == -1) {
		printf(stderr, "Pipe failed\n");
		exit(-1);
	}
	
	
	if (fork() == 0) {
		dup2 (pipeDes[