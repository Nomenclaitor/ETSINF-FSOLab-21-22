#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main (int argc, char*argv[]) {
	int fd;
	char *arch = "ls_salida.txt";
	mode_t fd_mode = S_IRWXU;
	
	fd = open(arch, O_RDWR | O_CREAT, fd_mode);
	
	//fork de ls -la
	if (fork() == 0) {
		if (dup2(fd, STDOUT_FILENO) == -1) {
			printf("Dup2 error\n");
			close(fd);
			exit(-1);
		}
		if ( execl("/bin/ls", "ls", "-la", NULL) < 0) {
			printf("Execl error\n");
		}
	}
	
	//espera del hijo y ejecucion de cat
	wait(NULL);
	if (dup2(fd, STDIN_FILENO) == -1) {
		printf("Dup2 error\n");
		close(fd);
		exit(-1);
	}
	if ( execl("/bin/cat", "cat", NULL) < 0) {
		printf("Execl error\n");
	}
	exit(0);
}