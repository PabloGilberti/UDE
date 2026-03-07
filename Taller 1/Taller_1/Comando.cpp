#include <string.h>
#include "Comando.h"

char aMinuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

int igualesSinCase(String s, String lit)
{
    int i = 0;

    while (s[i] != '\0' && lit[i] != '\0')
    {
        if (aMinuscula(s[i]) != aMinuscula(lit[i]))
            return 0;
        i++;
    }

    if (s[i] == '\0' && lit[i] == '\0')
        return 1;

    return 0;
}

TipoComando reconocerComando(String palabra)
{
    if (palabra == NULL)
        return CMD_INVALIDO;

    if (igualesSinCase(palabra, "simple"))     return CMD_SIMPLE;
    if (igualesSinCase(palabra, "compuesta"))  return CMD_COMPUESTA;
    if (igualesSinCase(palabra, "calcular"))   return CMD_CALCULAR;
    if (igualesSinCase(palabra, "iguales"))    return CMD_IGUALES;
    if (igualesSinCase(palabra, "mostrar"))    return CMD_MOSTRAR;
    if (igualesSinCase(palabra, "guardar"))    return CMD_GUARDAR;
    if (igualesSinCase(palabra, "recuperar"))  return CMD_RECUPERAR;
    if (igualesSinCase(palabra, "salir"))      return CMD_SALIR;

    return CMD_INVALIDO;
}
