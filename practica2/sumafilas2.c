#include <stdio.h>

#define TAM_FILA 100
#define NUM_FILAS 10

/* 
"Objeto" FILA, en java seria class FILA
*/
struct FILA {
	float datos[TAM_FILA];
	float suma;
};


/*
Metodo para sumar los datos de FILA y poner el total en suma
*/
void suma_fila(struct FILA *pf) {
	pf -> suma = 0;
	for (int aux = 0; aux < TAM_FILA; aux++) {
		pf -> suma += pf -> datos[aux];
	}
}

/*
Sirve para rellenar los arrays, 
*/
void inicia_filas(struct FILA *filas) {
	for (int auxA1 = 0; auxA1 < NUM_FILAS; auxA1++) {
		for (int auxA2 = 0; auxA2 < TAM_FILA; auxA2++) {
		
			filas[auxA1].datos[auxA2] = (float) auxA1 * auxA2;
		}
	}
}

void main() {
	struct FILA filas[NUM_FILAS];
	float suma_total = 0;
	
	inicia_filas(filas);
	for (int aux = 0; aux < NUM_FILAS; aux++) {
		suma_fila(&filas[aux]);
		printf("La suma de la fila %u es %.4f\n", aux, filas[aux].suma);
		suma_total += filas[aux].suma;
	}
	printf("La suma final es %.4f\n", suma_total);
}