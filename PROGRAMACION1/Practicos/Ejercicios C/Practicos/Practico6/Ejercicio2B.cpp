#include <stdio.h>

const int N = 5;
typedef int arregloEntero[N];

int main() {
    arregloEntero arreglo1;
    int i, j, num;

    printf("Ingrese %d numeros (se ordenan al ingresar):\n", N);

    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &num);

        // Insertar el numero ordenado en el arreglo
        j = i;
        while (j > 0 && arreglo1[j - 1] > num) {
            arreglo1[j] = arreglo1[j - 1];  // Desplazar hacia la derecha
            j--;
        }
        arreglo1[j] = num;  // Insertar en su lugar
    }

    // Mostrar el arreglo ordenado
    printf("\nArreglo ordenado: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arreglo1[i]);
    }
    printf("\n");

    return 0;
}
