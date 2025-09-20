#include "string.h"
//Devuelve la longitud de la cadena.
int strlar(String s)
{
    int i = 0;
    while (s[i] != '\0')
    i++;
    return i;
}
//Imprime la cadena por pantalla.
void print(String s)
{
    int i = 0;
    while (s[i]!= '\0')
    {
        printf ("%c", s[i]);
        i++;
    }
}
//Carga la cadena por teclado.
void scan(String &s)
{
    int i = 0;
    char c;
    fflush(stdin);
    scanf (" %c",&c);
    while ((c != '\n') && (i < MAX - 1))
    {
        s[i] = c;
        i++;
        scanf("%c",&c);
    }
    s[i] = '\0';
}
//Devuelve TRUE si s1 es menor que s2, FALSE en caso contrario.
booleano strmen(String s1, String s2)
{
//Devuelve TRUE si s1 es igual a s2, FALSE en caso contrario.
    int i = 0;
    booleano encontre = FALSE;
    booleano menor = FALSE;
    while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        encontre = TRUE;
        if (s1[i] < s2[i])
        menor = TRUE;
        i++;
    }
    if ((!encontre) && (s2[i]!='\0'))
        menor = TRUE;
    return menor;
}
booleano streq(String s1, String s2)
{
    int i = 0;
    booleano iguales = TRUE;
    while (iguales && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        iguales = FALSE;
        i++;
    }
    if ((s1[i] != '\0') || (s2[i] != '\0'))
        iguales = FALSE;
    return iguales;
}

//Copia s2 en s1.
void strcop(String &s1, String s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}
//Concatena s1 y s2 en s3.
void strcon (String &s1, String s2)
{
    int i = strlar(s1);
    int j = 0;
    while ((i < MAX - 1) && (s2[j] != '\0'))
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}
//Intercambia s1 y s2.
void strswp(String &s1, String &s2)
{
    String aux;
    strcop(aux,s1);
    strcop(s1,s2);
    strcop(s2,aux);
}
