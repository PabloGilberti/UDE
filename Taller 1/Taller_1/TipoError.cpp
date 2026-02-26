#include "TipoError.h"

void Error(TipoError e){
   switch (e)
    {
        case OK:
            // si querés, no imprimir nada
            // printf("OK\n");
            break;

        case ERR_CANT_PARAM:
            printf("Error: cantidad de parametros invalida.\n");
            break;

        case ERR_PARAMETRO:
            printf("Error: parametro invalido.\n");
            break;

        case ERR_INDICE_FORMATO:
            printf("Error: el indice debe ser un entero positivo.\n");
            break;

        case ERR_INDICE_NOEXISTE:
            printf("Error: el indice no existe en memoria.\n");
            break;

        case ERR_OPERADOR:
            printf("Error: operador invalido.\n");
            break;

        case ERR_MEMORIA_VACIA:
            printf("Error: no hay expresiones en memoria.\n");
            break;

        case ERR_NOMBRE_ARCHIVO:
            printf("Error: nombre de archivo invalido (solo alfabetico).\n");
            break;

        case ERR_ARCHIVO_EXISTE:
            printf("Error: el archivo ya existe.\n");
            break;

        case ERR_ARCHIVO_NOEXISTE:
            printf("Error: el archivo no existe.\n");
            break;

        case ERR_ARCHIVO_IO:
            printf("Error: no se pudo operar con el archivo.\n");
            break;

        case ERR_DIV_CERO:
            printf("Error: division por cero.\n");
            break;

        default:
            printf("Error: desconocido.\n");
            break;
    }
}
