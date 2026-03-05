#include <string.h>
#include "Comando.h"

static char lowerChar(char c) {
    if (c >= 'A' && c <= 'Z') return c + ('a' - 'A');
    return c;
}

static int equalsIgnoreCase(char* a, const char* b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (lowerChar(a[i]) != lowerChar(b[i])) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0') ? 1 : 0;
}

TipoComando reconocerComando(char* palabra)
{
    if (palabra == 0) return CMD_INVALIDO;

    if (equalsIgnoreCase(palabra, "ingresar")) return CMD_INGRESAR;
    if (equalsIgnoreCase(palabra, "calcular")) return CMD_CALCULAR;
    if (equalsIgnoreCase(palabra, "mostrar"))  return CMD_MOSTRAR;
    if (equalsIgnoreCase(palabra, "salir"))    return CMD_SALIR;

    return CMD_INVALIDO;
}
