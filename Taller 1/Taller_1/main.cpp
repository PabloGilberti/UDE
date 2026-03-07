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
    printf (s);
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

    Dar_Error(OK);
    Dar_Error(ERR_CANT_PARAM);
    Dar_Error(ERR_PARAMETRO);
    Dar_Error(ERR_INDICE_FORMATO);
    Dar_Error(ERR_INDICE_NOEXISTE);
    Dar_Error(ERR_OPERADOR);
    Dar_Error(ERR_MEMORIA_VACIA);
    Dar_Error(ERR_NOMBRE_ARCHIVO);
    Dar_Error(ERR_ARCHIVO_EXISTE);
    Dar_Error(ERR_ARCHIVO_NOEXISTE);
    Dar_Error(ERR_ARCHIVO_IO);
    Dar_Error(ERR_DIV_CERO);
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

// main.cpp  (solo printf/scanf)
#include <stdio.h>

#include "Booleano.h"
#include "String.h"
#include "ListaString.h"
#include "TipoError.h"
#include "Arbol.h"
#include "Termino.h"
#include "TipoTermino.h"

// =====================================
// CONFIG: índice base de ListaString
// 0 si LS_EnPos(L,0) es el primero
// 1 si LS_EnPos(L,1) es el primero
// =====================================
const int BASE_INDEX = 0;

// =====================================
// Helpers de consola
// =====================================
void limpiarEnter()
{
    int c;
    do { c = getchar(); } while (c != '\n' && c != EOF);
}

void cortarEnCRLF(String &s)
{
    if (s == NULL) return;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '\r' || s[i] == '\n' || s[i] == '\t')
        {
            s[i] = '\0';
            return;
        }
        i++;
    }
}

char aMinuscula(char c)
{
    if (c >= 'A' && c <= 'Z') return (char)(c - 'A' + 'a');
    return c;
}

Boolean streq_ci_lit(String s, const char* lit)
{
    if (s == NULL || lit == NULL) return FALSE;
    int i = 0;
    while (s[i] != '\0' && lit[i] != '\0')
    {
        if (aMinuscula(s[i]) != aMinuscula(lit[i])) return FALSE;
        i++;
    }
    return (s[i] == '\0' && lit[i] == '\0') ? TRUE : FALSE;
}

// =====================================
// Helpers numéricos / términos
// =====================================
Boolean es_numero(String s)
{
    if (s == NULL) return FALSE;
    cortarEnCRLF(s);

    int i = 0;
    if (s[i] == '-') i++;
    if (s[i] == '\0') return FALSE;

    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9') return FALSE;
        i++;
    }
    return TRUE;
}

int a_int(String s)
{
    cortarEnCRLF(s);

    int i = 0, sign = 1;
    if (s[i] == '-') { sign = -1; i++; }

    int val = 0;
    while (s[i] != '\0')
    {
        val = val * 10 + (s[i] - '0');
        i++;
    }
    return sign * val;
}

Boolean es_operador_valido(String op)
{
    if (op == NULL) return FALSE;
    cortarEnCRLF(op);
    if (op[1] != '\0') return FALSE;

    return (op[0] == '+' || op[0] == '-' || op[0] == '*' || op[0] == '/') ? TRUE : FALSE;
}

Termino TerminoValor(int v)
{
    Termino t;
    t.discriminante = TERMINO_VALOR;
    t.dato.valor = v;
    return t;
}

Termino TerminoVariable(char v)
{
    Termino t;
    t.discriminante = TERMINO_VARIABLE;
    t.dato.variable = v;
    return t;
}

Termino TerminoOperador(char op)
{
    Termino t;
    t.discriminante = TERMINO_OPERADOR;
    t.dato.operador = op;
    return t;
}

TipoError tokenA_Termino(String tok, Termino &t)
{
    if (tok == NULL) return ERR_PARAMETRO;
    cortarEnCRLF(tok);

    if (tok[1] == '\0' && (tok[0] == 'x' || tok[0] == 'X'))
    {
        t = TerminoVariable('x');
        return OK;
    }

    if (es_numero(tok))
    {
        t = TerminoValor(a_int(tok));
        return OK;
    }

    return ERR_PARAMETRO;
}

// =====================================
// TESTS
// =====================================
void testString()
{
    printf("\n--- TEST String ---\n");
    String s;
    strcrear(s);

    printf("Ingrese una linea: ");
    scan(s);
    cortarEnCRLF(s);

    printf("Largo: %d\n", strlar(s));
    printf("Contenido: ");
    printf(s);
    printf("\n");

    strdestruir(s);
}

void testSplit()
{
    printf("\n--- TEST ListaString / Split ---\n");

    ListaString L;
    LS_Crear(L);

    String linea;
    strcrear(linea);

    printf("Ingrese una linea:\n> ");
    scan(linea);
    cortarEnCRLF(linea);

    LS_Split(linea, L);

    int cant = LS_Cantidad(L);
    printf("Cantidad de tokens: %d\n", cant);

    for (int i = 0; i < cant; i++)
    {
        String tok = LS_EnPos(L, i + BASE_INDEX);
        if (tok != NULL)
            printf("Token %d: %s\n", i, tok);
    }

    LS_Liberar(L);
    strdestruir(linea);
}

void testErrores()
{
    printf("\n--- TEST TipoError ---\n");
    // Mostramos varios, ajustá si tu enum tiene otros nombres:
    Dar_Error(OK);
    Dar_Error(ERR_CANT_PARAM);
    Dar_Error(ERR_PARAMETRO);
    Dar_Error(ERR_OPERADOR);
    Dar_Error(ERR_DIV_CERO);

    // Si este existe en tu TipoError.h, genial; si no, comentarlo:
    // Error(ERR_MEMORIA_VACIA);
}

// =====================================
// ARBOL: crear desde comando Compuesta t1 op t2
// =====================================
TipoError crearArbolDesdeLinea(String linea, Arbol &A)
{
    ListaString L;
    LS_Crear(L);
    LS_Split(linea, L);

    int cant = LS_Cantidad(L);
    if (cant == 0)
    {
        LS_Liberar(L);
        return ERR_CANT_PARAM;
    }

    String cmd = LS_EnPos(L, 0 + BASE_INDEX);
    cortarEnCRLF(cmd);

    if (!streq_ci_lit(cmd, "compuesta"))
    {
        LS_Liberar(L);
        return ERR_PARAMETRO; // si tenés ERR_COMANDO o ERR_LEXICO, mejor
    }

    if (cant != 4)
    {
        LS_Liberar(L);
        return ERR_CANT_PARAM;
    }

    String s1  = LS_EnPos(L, 1 + BASE_INDEX);
    String sop = LS_EnPos(L, 2 + BASE_INDEX);
    String s2  = LS_EnPos(L, 3 + BASE_INDEX);

    cortarEnCRLF(s1);
    cortarEnCRLF(sop);
    cortarEnCRLF(s2);

    if (!es_operador_valido(sop))
    {
        LS_Liberar(L);
        return ERR_OPERADOR;
    }

    Termino t1, t2;
    TipoError e1 = tokenA_Termino(s1, t1);
    if (e1 != OK) { LS_Liberar(L); return e1; }

    TipoError e2 = tokenA_Termino(s2, t2);
    if (e2 != OK) { LS_Liberar(L); return e2; }

    // liberar árbol anterior si existía
    ARB_Liberar(A);

    Arbol izq = ARB_CrearNodo(t1, NULL, NULL);
    Arbol der = ARB_CrearNodo(t2, NULL, NULL);
    Termino top = TerminoOperador(sop[0]);
    A = ARB_CrearNodo(top, izq, der);

    LS_Liberar(L);
    return OK;
}

void cargarEjemplo(Arbol &A)
{
    ARB_Liberar(A);
    Arbol izq = ARB_CrearNodo(TerminoVariable('x'), NULL, NULL);
    Arbol der = ARB_CrearNodo(TerminoValor(5), NULL, NULL);
    A = ARB_CrearNodo(TerminoOperador('+'), izq, der);
}

void menuArbol(Arbol &A, int valorX)
{
    int op = -1;

    while (op != 0)
    {
        printf("\n--- MENU ARBOL ---\n");
        printf("1) Crear arbol con comando: Compuesta t1 op t2\n");
        printf("2) Cargar ejemplo (x + 5)\n");
        printf("3) Mostrar arbol\n");
        printf("4) Evaluar arbol\n");
        printf("5) Liberar arbol\n");
        printf("0) Volver\n");
        printf("Opcion: ");

        scanf("%d", &op);
        limpiarEnter();

        if (op == 1)
        {
            String linea;
            strcrear(linea);

            printf("\nIngrese comando:\n> ");
            scan(linea);
            cortarEnCRLF(linea);

            TipoError e = crearArbolDesdeLinea(linea, A);
            Dar_Error(e);

            if (e == OK)
            {
                printf("Arbol: ");
                ARB_Mostrar(A);
                printf("\n");
            }

            strdestruir(linea);
        }
        else if (op == 2)
        {
            cargarEjemplo(A);
            Dar_Error(OK);
            printf("Arbol: ");
            ARB_Mostrar(A);
            printf("\n");
        }
        else if (op == 3)
        {
            if (ARB_EsVacio(A))
            {
                // si no existe en tu enum, cambialo por otro, o usa ERR_PARAMETRO
                Dar_Error(ERR_MEMORIA_VACIA);
            }
            else
            {
                Dar_Error(OK);
                printf("Arbol: ");
                ARB_Mostrar(A);
                printf("\n");
            }
        }
        else if (op == 4)
        {
            if (ARB_EsVacio(A))
            {
                Dar_Error(ERR_MEMORIA_VACIA);
            }
            else
            {
                int res = 0;
                TipoError e = ARB_Evaluar(A, valorX, res);
                Dar_Error(e);
                if (e == OK)
                    printf("Resultado (x=%d): %d\n", valorX, res);
            }
        }
        else if (op == 5)
        {
            ARB_Liberar(A);
            Dar_Error(OK);
            printf("Arbol liberado.\n");
        }
        else if (op == 0)
        {
            // volver
        }
        else
        {
            printf("Opcion invalida.\n");
        }
    }
}

// =====================================
// MAIN principal: todo junto
// =====================================
int main()
{
    printf("=== TEST COMPLETO (String / ListaString / TipoError / Arbol) ===\n");

    int valorX = 0;
    printf("Valor para x: ");
    scanf("%d", &valorX);
    limpiarEnter();

    Arbol A = ARB_CrearVacio();

    int op = -1;
    while (op != 0)
    {
        printf("\n=============================\n");
        printf(" MENU PRINCIPAL\n");
        printf("=============================\n");
        printf("1) Probar String\n");
        printf("2) Probar Split (ListaString)\n");
        printf("3) Probar TipoError\n");
        printf("4) Menu Arbol (crear/mostrar/evaluar/liberar)\n");
        printf("0) Salir\n");
        printf("Opcion: ");

        scanf("%d", &op);
        limpiarEnter();

        switch (op)
        {
            case 1: testString(); break;
            case 2: testSplit(); break;
            case 3: testErrores(); break;
            case 4: menuArbol(A, valorX); break;
            case 0: break;
            default: printf("Opcion invalida.\n"); break;
        }
    }

    ARB_Liberar(A);
    printf("Fin.\n");
    return 0;
}
*/
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
    if (s == NULL) return FALSE;
    return (s[0] == 'x' && s[1] == '\0') ? TRUE : FALSE;
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
    return (op == '+' || op == '-' || op == '*' || op == '/') ? TRUE : FALSE;
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
