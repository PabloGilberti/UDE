#include <stdio.h>

const int N=10;

typedef enum { FALSE, TRUE } Booleano;
typedef Booleano arreglo[N];

int main() {
    arreglo datos;
    int i;

    // a) Cargar el arreglo de booleanos (usamos 0 para FALSE y 1 para TRUE)
    printf("Ingrese %d valores booleanos (0 para FALSE, 1 para TRUE):\n", N);
    i = 0;
    while (i < N) {
        int valor;
        scanf("%d", &valor);
        if (valor == 0 || valor == 1) {
            if (valor == 1) {
                datos[i] = TRUE;
            } else {
                datos[i] = FALSE;
            }
            i++;
        } else {
            printf("Valor invalido. Ingrese 0 o 1:\n");
        }
    }

    // b) Leer posicion y cambiar todos los posteriores por su negacion
    int posicion;
    do {
        printf("Ingrese la posicion a partir de la cual invertir (0 a %d): ", N-1);
        scanf("%d", &posicion);
    } while (posicion < 0 || posicion >= N);

    i = posicion + 1;
    while (i < N) {
        if (datos[i] == TRUE) {
            datos[i] = FALSE;
        } else {
            datos[i] = TRUE;
        }
        i++;
    }

    // c) Desplegar el contenido del arreglo
    printf("\nContenido final del arreglo:\n");
    i = 0;
    while (i < N) {
        printf("%d ", datos[i]);  // imprimimos como 0 o 1
        i++;
    }
    printf("\n");

    return 0;
}