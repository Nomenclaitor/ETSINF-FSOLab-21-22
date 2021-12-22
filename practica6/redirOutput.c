#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main (int argc, char*argv[]) {
	int fd;
	char *arch = "output.txt";
	mode_t fd_mode = S_IRWXU;
	
	fd = open(arch, O_RDWR | O_CREAT, fd_mode);
	if (dup2(fd, STDOUT_FILENO) == -1) {
		printf("Dup2 error\n");
		exit(-1);
	}
	
	fprintf(stdout, "out: Output redirected\n");
	fprintf(stderr, "error: not redirected\n");
	fprintf(stderr, "Check file %s\n", arch);
	close(fd);
	exit(0);
}