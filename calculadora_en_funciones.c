
#include <stdio.h>
#include "operaciones.h"

    


int main() {
        
    int num1, num2, opcion ;
    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);
    

    printf("Seleccione una opcion:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
           sumar(num1, num2);
        break;
        case 2:
            resta(num1, num2);
        break;
        case 3:
           multiplicacion(num1, num2);
        break;
        case 4:
            division(num1, num2);
        break;
        default:
            printf("Opcion invalida\n");
        break;
    }
}
