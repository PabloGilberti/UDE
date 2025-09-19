#include "booleano.h"
#include <cctype>

void CargarBooleano(booleano &b) {
    int ok = 0;
    while (!ok) {
        printf("%c (1=SI / 0=NO o S/N): ");
        char c;
        scanf(" %c", &c);
       // if (scanf(" %c", &c) != 1) {
       //         continue;
        //}
        if (c == '1' || c == 'S' || c == 's') {
                b = TRUE;
                ok = 1;
        }
        else if (c == '0' || c == 'N' || c == 'n') {
                b = FALSE;
                ok = 1;
        }
        else{
            printf("Valor invalido. Intente nuevamente.\n");
        }
    }
}

void MostrarBooleano(booleano b) {
    printf("%s", (b == TRUE) ? "SI" : "NO");
}
