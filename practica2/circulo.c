#include<stdio.h>

#define PI 3.1416
main() {
	float area, radio;
	radio = 10;
	area = PI * (radio * radio);
	printf("Are del circulo de radio %.2f es %.4f\n", radio, area);
}