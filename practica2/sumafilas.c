#include <stdio.h>

#define TAM_FILA 100
#define NUM_FILAS 10

/* 
"OBjeto" FILA, en java seria class FILA
*/
struct FILA {
	//Variable datos que es un array de float y suma que es un float tambien
	float datos[TAM_FILA];
	float suma;
};

//Declaracion de una variable global que se llama filas y es un array de "objetos" de tipo FILA
struct FILA filas[NUM_FILAS];

/*
Metodo para sumar los datos de FILA y poner el total en suma
*/
void suma_fila(struct FILA *pf) {
	//Sirve para poner el puntero a suma, en Java seria como hacer pf.suma
	pf -> suma = 0;
	//Un bucle que suma todos los datos y se los asgina a suma
	for (int aux = 0; aux < TAM_FILA; aux++) {
		//En java seria: pf.suma += pf.datos[aux];
		//el += es una forma mas rapida de hacer pf -> suma == pf -> suma + pf -> datos[aux]
		pf -> suma += pf -> datos[aux];
	}
}

/*
Sirve para rellenar los arrays, 
*/
void inicia_filas() {
	//Este primer bucle sirve para recorrer el array filas[NUM_FILAS]
	for (int auxA1 = 0; auxA1 < NUM_FILAS; auxA1++) {
		//Este bucle es para el array datos[TAM_FILA]
		for (int auxA2 = 0; auxA2 < TAM_FILA; auxA2++) {
		
			//Para la el objeto FILA que se encuentra en el array filas[auxA1],
			//asignarle auxA1 * auxA2 a la posicion auxA2 del array datos
			filas[auxA1].datos[auxA2] = (float) auxA1 * auxA2;
		}
	}
}

void main() {
	float suma_total = 0;
	
	//Llamada al metodo inicia_fials para rellenar los arrays de filas
	inicia_filas();
	for (int aux = 0; aux < NUM_FILAS; aux++) {
		//Llamada al metodo suma_fila dandole como argumento filas[aux] 
		// (el & es un puntero)
		suma_fila(&filas[aux]);
		printf("La suma de la fila %u es %.4f\n", aux, filas[aux].suma);
		suma_total += filas[aux].suma;
	}
	printf("La suma final es %.4f\n", suma_total);
}