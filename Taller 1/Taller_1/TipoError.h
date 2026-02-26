#ifndef TIPOERROR_H_INCLUDED
#define TIPOERROR_H_INCLUDED
#include "String.h"

typedef enum{
    OK = 0,

    // Errores generales de parámetros / sintaxis
    ERR_CANT_PARAM,     // faltan o sobran parámetros
    ERR_PARAMETRO,      // parámetro con formato inválido (ej: simple no recibe x/entero)

    // Índices
    ERR_INDICE_FORMATO, // índice no es entero positivo
    ERR_INDICE_NOEXISTE,// índice válido pero no existe en memoria

    // Operadores
    ERR_OPERADOR,       // operador no es + - * /

    // Estado de memoria
    ERR_MEMORIA_VACIA,  // no hay expresiones cargadas

    // Archivos
    ERR_NOMBRE_ARCHIVO, // archivo no es puramente alfabético
    ERR_ARCHIVO_EXISTE, // ya existe archivo.txt (en guardar)
    ERR_ARCHIVO_NOEXISTE,// no existe archivo.txt (en recuperar)
    ERR_ARCHIVO_IO,     // error genérico de I/O (opcional)

    // Cálculo
    ERR_DIV_CERO        // división por cero durante evaluar

} TipoError;

// Para mostrar mensajes claros
void Error(TipoError e);

#endif
