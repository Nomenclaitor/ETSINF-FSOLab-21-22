#include<stdio.h>
#include<pthread.h>
#include<string.h>

void *printMth(void *ptr) {
	char *men;
	men = (char*)ptr;
	
	write(1,men,strlen(men));
}

int main() {
	pthread_attr_t atrib;
	pthread_t thread1, thread2;
	
	pthread_attr_init( &atrib );
	
	pthread_create(&thread1, &atrib, printMth, "Hola ");
	pthread_create(&thread2, &atrib, printMth, "mundo\n");
	
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
}