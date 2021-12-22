#include <stdio.h> 
#include <math.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

#define DIMROW 10 
#define NUMROWS 200 
 
typedef struct row 
{    
	int vector[DIMROW]; 
	long add; 
} row;

row matrix[NUMROWS];


int main(void){
	pid_t hijos[NUMROWS];
  	int status, i, j, k; 
  	long total_add = 0 ;
  	
  // Initializing to 1 all the elements of the vector
  for (i = 0; i < NUMROWS; i++) {
    for (j = 0; j < DIMROW; j++) { 
      matrix[i].vector[j] = 1;
      matrix[i].add = 0;
    }
  }
  
  for (i = 0; i < NUMROWS; i++) { 
    hijos[i] = fork();
    if(hijos[i] == 0) {
    	for (k = 0; k < DIMROW; k++) {     
    	  	matrix[i].add += matrix[i].vector[k];
       	}
        total_add += matrix[i].add;
        exit(total_add);
      }
  }


	for(i = 0; i < NUMROWS; i++) {
		pid_t cpid = waitpid(hijos[i], &status, 0);
			if(WIFEXITED(status)) {
				total_add += WEXITSTATUS(status);	
			}
	}
	printf("The total addition is %ld", total_add);

  
  exit(0);
  return 0;
	
}
