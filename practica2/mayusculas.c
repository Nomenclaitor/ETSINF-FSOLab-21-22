#include <stdio.h>
#include <string.h>
#define TAM_CADENA 200

void main() {

	//Declaracion de arrays de char con tamaño TAM_CADENA que servira de String
   	char p1[TAM_CADENA];
   	char p2[TAM_CADENA];
   	printf("\nEnter a string : ");
   	
   	/*
   	Se usa Scanf para que el programa escuche al teclado
   	El %s en si le esta diciendo al scanf que el tipo de variable al que estamos
   	asignandole el input del teclado es de tipo String, el [^\n] sirve para decirle
   	al scanf que incluya los espacios en en el String
   	*/
   	scanf("%[^\n]s",p1);

	/*
	se usa int aux para que vaya recorriendo el array
	El bucle se para si encuentra un caracter de fin de array que es \0, todos los 
	Strings en C acaban con un \0
	*/
   	for (int aux = 0; p1[aux] != '\0'; aux++) {
   		
   		//Si lo que hay en la posicion aux del array p1 es una letra, entonces
   		//Se convierte en un mayuscula al restarle -32 y se le asigna la 
   		//posicion aux en p2
      		if(p1[aux] >= 'a' && p1[aux] <= 'z') {
         		p2[aux] = p1[aux] - 32;
         		
         	//Si no es una letra, se copia lo que hay en p1 en p2 directamente
      		} else {
      			p2[aux] = p1[aux];
      		}

   	}
   	printf("\nString in Upper Case = %s\n", p2);
}