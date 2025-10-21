#include <iostream>
#include <stdio.h>
typedef enum {TRUE, FALSE} boolean;
int main() {
    /*
    int numero;
    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            sumaPares += numero;
        } else {
            sumaImpares += numero;
        }
    }

    printf("\nSuma de numeros pares: %d\n", sumaPares);
    printf("Suma de numeros impares: %d\n", sumaImpares);

    return 0;
}*/


    int dia, mes,anio;
    boolean valido=FALSE;
        printf("Ingrese una fecha dado el dia, mes y anio en orden y separados por comas: ");
        scanf("%d, %d, %d", &dia, &mes, &anio);

        if (mes < 1 || mes > 12) {
            printf("Fecha invalida: mes incorrecto.\n");

    }
}
