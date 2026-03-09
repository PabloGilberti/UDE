#include <cstdio>
#include "Arbol.h"
#include "Termino.h"
#include "TipoError.h"
#include "TipoTermino.h"
/* =========================
   Básicas
   ========================= */

Arbol ARB_CrearVacio()
{
    return NULL;
}

Boolean ARB_EsVacio(Arbol a)
{
    return (a == NULL) ? TRUE : FALSE; // si tu Boolean usa true/false, ajustamos
}

Arbol ARB_CrearNodo(Termino info, Arbol izq, Arbol der)
{
    nodoA* nuevo = new nodoA;
    nuevo->info = info;
    nuevo->numeroNodo = 0;   // si luego numerás, lo cambiás donde corresponda
    nuevo->hizq = izq;
    nuevo->hder = der;
    return nuevo;
}

/* =========================
   Copia profunda
   ========================= */

Arbol ARB_Copiar(Arbol a)
{
    if (a == NULL) return NULL;

    Arbol ci = ARB_Copiar(a->hizq);
    Arbol cd = ARB_Copiar(a->hder);

    Arbol copia = ARB_CrearNodo(a->info, ci, cd);
    copia->numeroNodo = a->numeroNodo;
    return copia;
}

/* =========================
   Liberar (postorden)
   ========================= */

void ARB_Liberar(Arbol& a)
{
    if (a == NULL) return;

    ARB_Liberar(a->hizq);
    ARB_Liberar(a->hder);

    delete a;
    a = NULL;
}

/* =========================
   Mostrar
   ========================= */

/*
  IMPORTANTE: Esto depende de cómo es tu Termino.
  Asumo que Termino tiene:
    - TipoTermino discriminante;
    - union dato con:
        - int valor;
        - char variable;   // 'x'
        - char operador;   // '+', '-', '*', '/'
*/
static void imprimirTermino(Termino t)
{
    switch (t.discriminante)
    {
        case TERMINO_VALOR:
            printf("%d", t.dato.valor);
            break;

        case TERMINO_VARIABLE:
            printf("%c", t.dato.variable);
            break;

        case TERMINO_OPERADOR:
            printf(" %c ", t.dato.operador);
            break;
        case TERMINO_PARENTESIS:
            printf(" %c ", t.dato.parentesis);
            break;

        default:
            printf("?");
            break;
    }
}

void ARB_Mostrar(Arbol a)
{
    if (a == NULL) return;

    // hoja
    if (a->hizq == NULL && a->hder == NULL)
    {
        imprimirTermino(a->info);
        return;
    }

    // nodo operador
    printf("(");
    ARB_Mostrar(a->hizq);
    imprimirTermino(a->info);
    ARB_Mostrar(a->hder);
    printf(")");
}

/* =========================
   Evaluar
   ========================= */

TipoError ARB_Evaluar(Arbol a, int valorX, int &resultado)
{
    if (a == NULL)
    {
        resultado = 0;
        return OK; // si tu cátedra lo considera error, cambiamos
    }

    // hoja: valor o variable
    if (a->hizq == NULL && a->hder == NULL)
    {
        if (a->info.discriminante == TERMINO_VALOR)
        {
            resultado = a->info.dato.valor;
            return OK;
        }
        else if (a->info.discriminante == TERMINO_VARIABLE)
        {
            resultado = valorX;
            return OK;
        }
        else
        {
            resultado = 0;
            return ERR_PARAMETRO;
        }
    }

    // operador: evaluar hijos
    int izq = 0, der = 0;

    TipoError e1 = ARB_Evaluar(a->hizq, valorX, izq);
    if (e1 != OK)
        return e1;

    TipoError e2 = ARB_Evaluar(a->hder, valorX, der);
    if (e2 != OK)
        return e2;

    if (a->info.discriminante != TERMINO_OPERADOR)
        return ERR_PARAMETRO;

    char op = a->info.dato.operador;

    switch (op)
    {
        case '+':
            resultado = izq + der;
            return OK;

        case '-':
            resultado = izq - der;
            return OK;

        case '*':
            resultado = izq * der;
            return OK;

        case '/':
            if (der == 0)
                return ERR_DIV_CERO;
            resultado = izq / der;
            return OK;

        default:
            return ERR_OPERADOR;
    }
}

/* =========================
   Iguales
   ========================= */

Boolean terminoIgual(Termino a, Termino b){
    // 1) Si el tipo (discriminante) es distinto, ya no pueden ser iguales
    if (a.discriminante != b.discriminante)
        return FALSE;

    // 2) Comparar según el tipo
    switch (a.discriminante)
    {
        case TERMINO_VALOR:
            if (a.dato.valor == b.dato.valor)
                return TRUE;
            else
                return FALSE;

        case TERMINO_VARIABLE:
            if (a.dato.variable == b.dato.variable)   // tu campo es "variables"
                return TRUE;
            else
                return FALSE;

        case TERMINO_OPERADOR:
            if (a.dato.operador == b.dato.operador)
                return TRUE;
            else
                return FALSE;
        case TERMINO_PARENTESIS:
            if (a.dato.operador == b.dato.parentesis)
                return TRUE;
            else
                return FALSE;

        default:
            // Tipo no contemplado
            return FALSE;
    }
}
Boolean ARB_Iguales(Arbol a, Arbol b)
{
    if (a == NULL && b == NULL)
        return TRUE;
    if (a == NULL || b == NULL)
        return FALSE;

    if (terminoIgual(a->info, b->info) == FALSE)
        return FALSE;

    if (ARB_Iguales(a->hizq, b->hizq) == FALSE)
        return FALSE;
    if (ARB_Iguales(a->hder, b->hder) == FALSE)
        return FALSE;

    return TRUE;
}

/* =========================
   Guardar / Cargar (stub)
   ========================= */
void armarNombreArchivo(String base, String &completo)
{
    strcrear(completo);
    strcop(completo, base);
    strcon(completo, (String)".dat ");
}
// Estas dos dependen de tu formato de archivo (serialización).
// Si me pasás la letra/formato, las implementamos.
static void Bajar_Arbol_Aux(Arbol a, FILE *f)
{
    int marca;

    if (a == NULL)
    {
        marca = 0;
        fwrite(&marca, sizeof(int), 1, f);
    }
    else
    {
        marca = 1;
        fwrite(&marca, sizeof(int), 1, f);

        fwrite(&(a->info), sizeof(Termino), 1, f);

        Bajar_Arbol_Aux(a->hizq, f);
        Bajar_Arbol_Aux(a->hder, f);
    }
}


TipoError ARB_GuardarEnArchivo(Arbol a, String nombreArchivo)
{
    String nomArch;
    armarNombreArchivo(nombreArchivo, nomArch);

    FILE *test = fopen(nomArch, "rb");

    if (test != NULL)
    {
        fclose(test);
        strdestruir(nomArch);
        return ERR_ARCHIVO_EXISTE;
    }

    FILE *f = fopen(nomArch, "wb");

    if (f == NULL)
    {
        strdestruir(nomArch);
        return ERR_ARCHIVO_IO;
    }

    Bajar_Arbol_Aux(a, f);

    fclose(f);
    strdestruir(nomArch);

    return OK;
}
static Arbol Levantar_Arbol_Aux(FILE *f, TipoError &err)
{
    int marca;

    if (fread(&marca, sizeof(int), 1, f) != 1)
    {
        err = ERR_ARCHIVO_IO;
        return NULL;
    }

    if (marca == 0)
        return NULL;

    Termino t;

    if (fread(&t, sizeof(Termino), 1, f) != 1)
    {
        err = ERR_ARCHIVO_IO;
        return NULL;
    }

    Arbol izq = Levantar_Arbol_Aux(f, err);
    if (err != OK) return NULL;

    Arbol der = Levantar_Arbol_Aux(f, err);
    if (err != OK) return NULL;

    return ARB_CrearNodo(t, izq, der);
}

TipoError ARB_CargarDesdeArchivo(Arbol &a, String nombreArchivo)
{
    String nomArch;
    armarNombreArchivo(nombreArchivo, nomArch);

    FILE *f = fopen(nomArch, "rb");

    if (f == NULL)
    {
        strdestruir(nomArch);
        return ERR_ARCHIVO_NOEXISTE;
    }

    ARB_Liberar(a);
    a = NULL;

    TipoError err = OK;

    a = Levantar_Arbol_Aux(f, err);

    fclose(f);
    strdestruir(nomArch);

    return err;
}
