#include <stdio.h>

const int N = 5;
typedef int arregloEntero[N];

int main() {
    arregloEntero arreglo1;
    int i, j, num;
    int menor1, menor2;

    // Cargar el primer arreglo
    printf("Ingrese %d numeros para el primer arreglo:\n", N);
    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo1[i]);
    }

    // --- d) Buscar los dos menores ---
    // Inicializar menor1 y menor2 con los dos primeros elementos ordenados
    if (arreglo1[0] < arreglo1[1]) {
        menor1 = arreglo1[0];
        menor2 = arreglo1[1];
    } else {
        menor1 = arreglo1[1];
        menor2 = arreglo1[0];
    }

    // Recorrer el resto del arreglo
    for (i = 2; i < N; i++) {
        if (arreglo1[i] < menor1) {
            menor2 = menor1;
            menor1 = arreglo1[i];
        } else if (arreglo1[i] < menor2) {
            menor2 = arreglo1[i];
        }
    }

    // Mostrar los dos menores
    printf("\nLos dos menores del primer arreglo son: %d y %d\n", menor1, menor2);

    return 0;
}
