#include <stdio.h>
int a = 0;

void inc_a() {
	a++;
}

int valor_anterior(int v) {
	int temp;
	static int s;
	temp = s;
	s = v;
	return temp;
}

main() {
	int b = 2;
	inc_a();
	valor_anterior(b);
	printf("a= %d, b= %d\n", a, b);
	a++;
	b++;
	inc_a();
	b = valor_anterior(b);
	printf("a= %d, b = %d\n", a, b);
}