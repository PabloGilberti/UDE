#include <cstdio>
#include "Comando.h"
#include "String.h"
#include "ListaString.h"
#include "ListaExpresiones.h"
#include "TipoError.h"
#include "TipoTermino.h"
#include "Termino.h"
#include "Arbol.h"


Boolean esX(String s)
{
    if (s == NULL)
        return FALSE;

    if (s[0] == 'x' && s[1] == '\0')
        return TRUE;

    return FALSE;
}


Boolean esEntero(String s)
{
    if (s == NULL) return FALSE;

    int i = 0;
    if (s[0] == '-') i = 1;
    if (s[i] == '\0') return FALSE;

    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
            return FALSE;
        i++;
    }
    return TRUE;
}

Boolean operadorValido(char op)
{
   if (op == '+' || op == '-' || op == '*' || op == '/')
    return TRUE;

return FALSE;
}


TipoError crearTerminoDesdeToken(String tok, Termino &t)
{
    DatoTermino d;

    if (esX(tok) == TRUE)
    {
        d.ch = 'x';
        t = TER_Crear(TERMINO_VARIABLE, d);
        return OK;
    }

    if (esEntero(tok) == TRUE)
    {
        int num = 0;
        sscanf(tok, "%d", &num);
        d.valor = num;
        t = TER_Crear(TERMINO_VALOR, d);
        return OK;
    }

    return ERR_PARAMETRO;
}

int main()
{
    ListaExpresiones memoria;
    crearLista(memoria);

    String linea;
    strcrear(linea);

    while (TRUE)
    {
        printf("Ingrese comando: ");
        scan(linea);

        ListaString tokens;
        LS_Crear(tokens);
        LS_Split(linea, tokens);

        int cant = LS_Cantidad(tokens);

        if (cant == 0)
        {
            LS_Liberar(tokens);
            continue;
        }

        String palabraCmd = LS_EnPos(tokens, 1);
        TipoComando cmd = reconocerComando(palabraCmd);

        // ---------------- SIMPLE ----------------
        if (cmd == CMD_SIMPLE)
        {
            if (cant != 2)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            Termino t;
            TipoError e = crearTerminoDesdeToken(LS_EnPos(tokens, 2), t);

            if (e != OK)
            {
                Dar_Error(e);
                LS_Liberar(tokens);
                continue;
            }

            Arbol a = ARB_CrearNodo(t, NULL, NULL);
            insertarExpresion(memoria, a);

            int idx = obtenerProximoIndice(memoria) - 1;
            printf("Resultado:        %d) ", idx);
            ARB_Mostrar(obtenerExpresion(memoria, idx));
            printf("\n");

            ARB_Liberar(a);
            LS_Liberar(tokens);
            continue;
        }

        // ---------------- COMPUESTA ----------------
        if (cmd == CMD_COMPUESTA)
        {
            if (cant != 4)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            String tokIndice1 = LS_EnPos(tokens, 2);
            String tokOp      = LS_EnPos(tokens, 3);
            String tokIndice2 = LS_EnPos(tokens, 4);

            if (esEntero(tokIndice1) == FALSE || esEntero(tokIndice2) == FALSE)
            {
                Dar_Error(ERR_INDICE_FORMATO);
                LS_Liberar(tokens);
                continue;
            }

            if (tokOp[0] == '\0' || tokOp[1] != '\0' || operadorValido(tokOp[0]) == FALSE)
            {
                Dar_Error(ERR_OPERADOR);
                LS_Liberar(tokens);
                continue;
            }

            int i1 = 0, i2 = 0;
            sscanf(tokIndice1, "%d", &i1);
            sscanf(tokIndice2, "%d", &i2);

            if (i1 <= 0 || i2 <= 0)
            {
                Dar_Error(ERR_INDICE_FORMATO);
                LS_Liberar(tokens);
                continue;
            }

            if (existeIndice(memoria, i1) == FALSE || existeIndice(memoria, i2) == FALSE)
            {
                Dar_Error(ERR_INDICE_NOEXISTE);
                LS_Liberar(tokens);
                continue;
            }

            Arbol a1 = obtenerExpresion(memoria, i1);
            Arbol a2 = obtenerExpresion(memoria, i2);

            DatoTermino d;
            d.ch = tokOp[0];
            Termino top = TER_Crear(TERMINO_OPERADOR, d);

            Arbol nuevo = ARB_CrearNodo(top, ARB_Copiar(a1), ARB_Copiar(a2));
            insertarExpresion(memoria, nuevo);

            int idx = obtenerProximoIndice(memoria) - 1;
            printf("Resultado:        %d) ", idx);
            ARB_Mostrar(obtenerExpresion(memoria, idx));
            printf("\n");

            ARB_Liberar(nuevo);
            LS_Liberar(tokens);
            continue;
        }

        // ---------------- CALCULAR ----------------
        if (cmd == CMD_CALCULAR)
        {
            if (cant != 3)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            String tokIndice = LS_EnPos(tokens, 2);
            String tokX      = LS_EnPos(tokens, 3);

            if (esEntero(tokIndice) == FALSE || esEntero(tokX) == FALSE)
            {
                Dar_Error(ERR_PARAMETRO);
                LS_Liberar(tokens);
                continue;
            }

            int indice = 0, valorX = 0;
            sscanf(tokIndice, "%d", &indice);
            sscanf(tokX, "%d", &valorX);

            if (indice <= 0)
            {
                Dar_Error(ERR_INDICE_FORMATO);
                LS_Liberar(tokens);
                continue;
            }

            if (existeIndice(memoria, indice) == FALSE)
            {
                Dar_Error(ERR_INDICE_NOEXISTE);
                LS_Liberar(tokens);
                continue;
            }

            int resultado = 0;
            TipoError e = ARB_Evaluar(obtenerExpresion(memoria, indice), valorX, resultado);

            if (e == OK)
                printf("Resultado:        %d\n", resultado);
            else
                Dar_Error(e);

            LS_Liberar(tokens);
            continue;
        }

        // ---------------- IGUALES ----------------
        if (cmd == CMD_IGUALES)
        {
            if (cant != 3)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            String tokIndice1 = LS_EnPos(tokens, 2);
            String tokIndice2 = LS_EnPos(tokens, 3);

            if (esEntero(tokIndice1) == FALSE || esEntero(tokIndice2) == FALSE)
            {
                Dar_Error(ERR_INDICE_FORMATO);
                LS_Liberar(tokens);
                continue;
            }

            int i1 = 0, i2 = 0;
            sscanf(tokIndice1, "%d", &i1);
            sscanf(tokIndice2, "%d", &i2);

            if (existeIndice(memoria, i1) == FALSE || existeIndice(memoria, i2) == FALSE)
            {
                Dar_Error(ERR_INDICE_NOEXISTE);
                LS_Liberar(tokens);
                continue;
            }

            if (ARB_Iguales(obtenerExpresion(memoria, i1), obtenerExpresion(memoria, i2)) == TRUE)
                printf("Resultado:        las expresiones son iguales\n");
            else
                printf("Resultado:        las expresiones no son iguales\n");

            LS_Liberar(tokens);
            continue;
        }

        // ---------------- MOSTRAR ----------------
        if (cmd == CMD_MOSTRAR)
        {
            if (cant != 1)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            if (listavacia(memoria) == TRUE)
            {
                Dar_Error(ERR_MEMORIA_VACIA);
                LS_Liberar(tokens);
                continue;
            }

            printf("Resultado:\n");
            mostrarExpresiones(memoria);

            LS_Liberar(tokens);
            continue;
        }

        // ---------------- GUARDAR ----------------
        if (cmd == CMD_GUARDAR)
        {
            if (cant != 3)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            String tokIndice = LS_EnPos(tokens, 2);
            String nombre    = LS_EnPos(tokens, 3);

            if (esEntero(tokIndice) == FALSE)
            {
                Dar_Error(ERR_INDICE_FORMATO);
                LS_Liberar(tokens);
                continue;
            }

            int indice = 0;
            sscanf(tokIndice, "%d", &indice);

            if (existeIndice(memoria, indice) == FALSE)
            {
                Dar_Error(ERR_INDICE_NOEXISTE);
                LS_Liberar(tokens);
                continue;
            }

            TipoError e = ARB_GuardarEnArchivo(obtenerExpresion(memoria, indice), nombre);

            if (e == OK)
                printf("Resultado:        expresion %d guardada correctamente en %s.txt\n", indice, nombre);
            else
                Dar_Error(e);

            LS_Liberar(tokens);
            continue;
        }

        // ---------------- RECUPERAR ----------------
        if (cmd == CMD_RECUPERAR)
        {
            if (cant != 2)
            {
                Dar_Error(ERR_CANT_PARAM);
                LS_Liberar(tokens);
                continue;
            }

            String nombre = LS_EnPos(tokens, 2);

            Arbol a = ARB_CrearVacio();
            TipoError e = ARB_CargarDesdeArchivo(a, nombre);

            if (e != OK)
            {
                Dar_Error(e);
                LS_Liberar(tokens);
                continue;
            }

            insertarExpresion(memoria, a);

            int idx = obtenerProximoIndice(memoria) - 1;
            printf("Resultado:        %d) ", idx);
            ARB_Mostrar(obtenerExpresion(memoria, idx));
            printf("\n");

            ARB_Liberar(a);
            LS_Liberar(tokens);
            continue;
        }

        // ---------------- SALIR ----------------
        if (cmd == CMD_SALIR)
        {
            printf("Resultado:        hasta la vista, baby!\n");
            LS_Liberar(tokens);
            break;
        }

        // ---------------- INVALIDO ----------------
        printf("Comando invalido.\n");
        LS_Liberar(tokens);
    }

    liberarLista(memoria);
    strdestruir(linea);

    return 0;
}
