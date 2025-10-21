#include <stdio.h>
#include <ctype.h>

#define MAX 80

typedef char cadena[MAX + 1];

int main() {
    cadena texto, textoInvertido;
    int i = 0;

    printf("Ingrese una cadena (maximo %d caracteres):\n", MAX);
    
    // Leer carácter por carácter hasta Enter o hasta MAX
    char c;
    while (i < MAX) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        texto[i] = c;
        i++;
    }
    texto[i] = '\0';  // Finalizar cadena con el nulo

    // Mostrar el string
    printf("\nCadena ingresada: %s\n", texto);

    // Buscar si un caracter pertenece al string
    char buscar;
    printf("\nIngrese un caracter para buscar en la cadena: ");
    scanf(" %c", &buscar);  // el espacio es para consumir el enter previo

    int encontrado = 0;
    for (int j = 0; texto[j] != '\0'; j++) {
        if (texto[j] == buscar) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado)
        printf("El caracter '%c' SI se encuentra en la cadena.\n", buscar);
    else
        printf("El caracter '%c' NO se encuentra en la cadena.\n", buscar);

    // Contar palabras
    int palabras = 0, enPalabra = 0;
    for (int j = 0; texto[j] != '\0'; j++) {
        if (texto[j] != ' ' && enPalabra == 0) {
            palabras++;
            enPalabra = 1;
        }
        if (texto[j] == ' ') {
            enPalabra = 0;
        }
    }
    printf("\nCantidad de palabras: %d\n", palabras);

    // Contar vocales y digitos
    int vocales = 0, digitos = 0;
    for (int j = 0; texto[j] != '\0'; j++) {
        char caracter = texto[j];
        if (caracter >= 'A' && caracter <= 'Z')
            caracter = caracter + 32;  // convertir a minúscula manualmente

       if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
        
            vocales++;
        }
        if (caracter >= '0' && caracter <= '9') {
            digitos++;
        }
    }
    printf("Cantidad de vocales: %d\n", vocales);
    printf("Cantidad de digitos: %d\n", digitos);

     // Copiar invirtiendo mayúsculas y minúsculas
    i = 0;
    while (texto[i] != '\0') {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            textoInvertido[i] = texto[i] - 32;
        }
        else if (texto[i] >= 'A' && texto[i] <= 'Z') {
            textoInvertido[i] = texto[i] + 32;
        }
        else {
            textoInvertido[i] = texto[i];
        }
        i++;
    }
    textoInvertido[i] = '\0';
    
    printf("\nCadena invertida mayusculas/minusculas: %s\n", textoInvertido);

    return 0;
}
