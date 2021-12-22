#include <stdio.h>

#define N 10

int number;

int main() {
	int i;
	
	printf("Write the number to be displayed: ");
	number = N;
	scanf("%d", &number);
	printf("The first %d natural numbers are: \n", number);
	for (i = 0; i < number; i++) {
		printf("\t %d \n", i);
	}
	printf("BYE\n");
	return(0);
}