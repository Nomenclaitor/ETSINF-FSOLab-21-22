#include <stdio.h>

int main(int argc, char *argv[]) {   
     for (int aux = 0; aux < argc; aux++) {
     	printf("Argumento %d es %s \n", aux, argv[aux]);
     }
}

