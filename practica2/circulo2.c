#include<stdio.h>

#define PI 3.1416

float areaC(float radio) {
    return (PI * (radio * radio));
}

main() {
	float area, radio;
	radio = 10;
	area = areaC(radio);
	printf("Are del circulo de radio %.2f es %.4f\n", radio, area);
}



