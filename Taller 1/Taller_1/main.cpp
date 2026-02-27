/*#include <stdio.h>
#include "ListaString.h"
#include "String.h"

int main()
{
    ListaString L;
    LS_Crear(L);

    // 1️⃣ Probar Split
    String linea;
    strcrear(linea);

    printf("Linea original:\n");
    scan(linea);

    LS_Split(linea, L);

    // 2️⃣ Mostrar cantidad
    int cant = LS_Cantidad(L);
    printf("Cantidad de Parsing: %d\n", cant);

    // 3️⃣ Mostrar cada elemento
    for (int i = 0; i < cant; i++)   // IMPORTANTE: < cant (no <=)
    {
        String palabra = LS_EnPos(L, i);

        if (palabra != NULL)
        {
            printf("String %d: ", i);
            printf(palabra);   // usamos tu print del TAD String
            printf("\n");
        }
    }

    // 4️⃣ Liberar memoria
    LS_Liberar(L);

    if (L == NULL)
        printf("Lista liberada correctamente.\n");

    return 0;
}
*/
#include <stdio.h>

#include "String.h"
#include "ListaString.h"
#include "TipoError.h"
#include "Termino.h"
#include "TipoTermino.h"

void probarString()
{
    String s;
    strcrear(s);

    printf("\n--- PRUEBA String ---\n");
    printf("Ingrese una linea: ");
    scan(s);

    printf("Largo: %d\n", strlar(s));
    printf("Contenido: ");
    printf(s);
    printf("\n");

    strdestruir(s);
}

void probarSplit()
{
    ListaString L;
    LS_Crear(L);

    String linea;
    strcrear(linea);

    printf("\n--- PRUEBA ListaString / Split ---\n");
    printf("Ingrese una linea a parsear: ");
    scan(linea);

    LS_Split(linea, L);

    int cant = LS_Cantidad(L);
    printf("Cantidad de tokens: %d\n", cant);

    // OJO: tu LS_EnPos funciona bien usando pos desde 0
    for (int i = 0; i < cant; i++)
    {
        String palabra = LS_EnPos(L, i);
        if (palabra != NULL)
        {
            printf("Token %d: %s\n", i, palabra);
        }
        else
        {
            printf("Token %d: (NULL)\n", i);
        }
    }

    LS_Liberar(L);
    strdestruir(linea);

    if (L == NULL)
        printf("Lista liberada correctamente.\n");
}

void probarErrores()
{
    printf("\n--- PRUEBA TipoError ---\n");
    printf("Mostrando mensajes de varios errores:\n\n");

    Error(OK);
    Error(ERR_CANT_PARAM);
    Error(ERR_PARAMETRO);
    Error(ERR_INDICE_FORMATO);
    Error(ERR_INDICE_NOEXISTE);
    Error(ERR_OPERADOR);
    Error(ERR_MEMORIA_VACIA);
    Error(ERR_NOMBRE_ARCHIVO);
    Error(ERR_ARCHIVO_EXISTE);
    Error(ERR_ARCHIVO_NOEXISTE);
    Error(ERR_ARCHIVO_IO);
    Error(ERR_DIV_CERO);
}

void mostrarTermino(Termino t)
{
    printf("Termino -> tipo: %d | ", (int)t.discriminante);
    switch (t.discriminante)
    {
        case TERMINO_VALOR:
            printf("valor=%d\n", t.dato.valor);
            break;
        case TERMINO_VARIABLE:
            printf("variable=%c\n", t.dato.variable);
            break;
        case TERMINO_OPERADOR:
            printf("operador=%c\n", t.dato.operador);
            break;
        case TERMINO_PARENTESIS:
            printf("parentesis=%c\n", t.dato.parentesis);
            break;
        default:
            printf("(desconocido)\n");
            break;
    }
}

void probarTermino()
{
    printf("\n--- PRUEBA Termino ---\n");

    DatoTermino d;

    d.valor = 42;
    Termino t1 = TER_Crear(TERMINO_VALOR, d);

    d.ch = 'x';
    Termino t2 = TER_Crear(TERMINO_VARIABLE, d);

    d.ch = '+';
    Termino t3 = TER_Crear(TERMINO_OPERADOR, d);

    d.ch = '(';
    Termino t4 = TER_Crear(TERMINO_PARENTESIS, d);

    mostrarTermino(t1);
    mostrarTermino(t2);
    mostrarTermino(t3);
    mostrarTermino(t4);
}

int main()
{
    int opcion = -1;

    while (opcion != 0)
    {
        printf("\n=============================\n");
        printf("  MENU DE PRUEBAS (UDE)\n");
        printf("=============================\n");
        printf("1) Probar String (scan/print/strlar)\n");
        printf("2) Probar ListaString (Split/Cantidad/EnPos/Liberar)\n");
        printf("3) Probar TipoError (mensajes)\n");
        printf("4) Probar Termino (crear y mostrar)\n");
        printf("0) Salir\n");
        printf("Opcion: ");

        scanf("%d", &opcion);

        // limpiar ENTER del scanf
        int c;
        do { c = getchar(); } while (c != '\n' && c != EOF);

        switch (opcion)
        {
            case 1: probarString(); break;
            case 2: probarSplit(); break;
            case 3: probarErrores(); break;
            case 4: probarTermino(); break;
            case 0: printf("Fin.\n"); break;
            default: printf("Opcion invalida.\n"); break;
        }
    }

    return 0;
}
