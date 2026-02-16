#include "Termino.h"


Termino TER_Crear(TipoTermino tipo, DatoTermino dato)
{
    Termino t;


    // 1) Guardar el discriminante
    t.discriminante = tipo;

    // 2) Según el tipo, cargar el dato correcto en la unión
    switch (tipo)
    {
        case TERMINO_VALOR:
            t.dato.valor = dato.valor;
            break;

        case TERMINO_VARIABLE:
            t.dato.variables = dato.ch;
            break;

        case TERMINO_OPERADOR:
            t.dato.operador = dato.ch;
            break;

        case TERMINO_PARENTESIS:
            t.dato.parentesis = dato.ch;
            break;

        default:
            // Caso de seguridad (no debería pasar)
            t.dato.valor = 0;
            break;
    }

    // 3) Devolver el término creado
    return t;
}
