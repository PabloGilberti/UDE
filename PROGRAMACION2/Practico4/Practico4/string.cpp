#include "string.h"

void CargarString(String &s) {
    char c;
    int i = 0;
    scanf("%c",&c);
    // Leer hasta 80 caracteres (permite espacios)
       while (c != '\n' && i < (MAX - 1)) {
        s[i] = c;
        i++;
        scanf("%c", &c);
    }
    s[i] = '\0';
}

void MostrarString(String s) {
    int i = 0;
    while (s[i] != '\0') {
        printf("%c", s[i]);
        i++;
    }
}
