#include "archivos.h"
#include <stdio.h>
#include <cstdio>

void Agregar(String nomArch, int entero) {
    FILE* f = fopen(nomArch, "ab");
    if (f == NULL) {
        fprintf(stderr, "Error: No se pudo abrir %s\n", nomArch);
        return;
    }
    fwrite(&entero, sizeof(int), 1, f);
    fclose(f);
}

boolean Existe(String nomArch) {
    FILE* f = fopen(nomArch, "rb");
    if (f == NULL) {
        return FALSE;
    } else {
        fclose(f);
        return TRUE;
    }
}

boolean Vacio(String nomArch) {
    FILE* f = fopen(nomArch, "rb");
    if (f == NULL) return TRUE;
    fseek(f, 0, SEEK_END);
    long tamano = ftell(f);
    fclose(f);
    return (tamano == 0) ? TRUE : FALSE;
}

boolean Pertenece(String nomArch, int entero) {
    FILE* f = fopen(nomArch, "rb");
    if (f == NULL) return FALSE;
    int numLeido;
    boolean encontrado = FALSE;
    while (fread(&numLeido, sizeof(int), 1, f) == 1) {
        if (numLeido == entero) {
            encontrado = TRUE;
            break;
        }
    }
    fclose(f);
    return encontrado;
}

int Largo(String nomArch) {
    FILE* f = fopen(nomArch, "rb");
    if (f == NULL) return 0;
    fseek(f, 0, SEEK_END);
    long tamanoBytes = ftell(f);
    fclose(f);
    return static_cast<int>(tamanoBytes / sizeof(int));
}

int Kesimo(String nomArch, int k) {
    FILE* f = fopen(nomArch, "rb");
    if (f == NULL) return 0;
    fseek(f, (k - 1) * sizeof(int), SEEK_SET);
    int numLeido;
    fread(&numLeido, sizeof(int), 1, f);
    fclose(f);
    return numLeido;
}

void Desplegar(String nomArch) {
    FILE* f = fopen(nomArch, "rb");
    if (f == NULL) {
        fprintf(stderr, "Error: No se pudo abrir %s\n", nomArch);
        return;
    }
    if (Vacio(nomArch) == true) {
        printf("--- Contenido de '%s' (vacio) ---\n", nomArch);
        fclose(f);
        return;
    }
    printf("--- Contenido de '%s' ---\n", nomArch);
    int numLeido;
    while (fread(&numLeido, sizeof(int), 1, f) == 1) {
        printf("%d ", numLeido);
    }
    printf("\n-----------------------------------\n");
    fclose(f);
}
