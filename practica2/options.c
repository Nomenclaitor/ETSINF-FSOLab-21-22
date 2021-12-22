#include <stdio.h>

void main(int argc, char *argv[]) {
    for (int aux = 0; aux < argc; aux++) {

        printf("Argumento %d es ", aux);


        switch ((char) argv[aux][1]) {
            case 'c':
                printf("Compliar\n");
                break;
            case 'E':
                printf("Preprocesar\n");
                break;
            case 'i':
                printf("Incluir: %s\n", &argv[aux][2]);
                break;
            default:
                printf("%s\n", argv[aux]);
                break;
        }
    }
}

