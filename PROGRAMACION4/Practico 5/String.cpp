#include <iostream>
using namespace std;
#include "string.h"

String :: String ()
{
    cadena = new char[1];
    cadena[0] = '\0';
}

String :: String (char * cad)
{
    int largo = strlen(cad);
    cadena = new char[largo+1];
    strcpy (cadena,cad);
}

String :: String (const String &otro)
{
    int largo = strlen(otro.cadena);
    cadena = new char [largo+1];
    strcpy(cadena,otro.cadena);
}

String :: ~String ()
{
    delete [] cadena;
}

String String :: operator= (const String &otro)
{
    if (this != &otro){
        delete [] cadena;
        int largo = strlen(otro.cadena);
        cadena = new char [largo+1];
        strcpy(cadena,otro.cadena);
    }
     return *this;
}

bool String :: operator== (const String &otro)
{
    return ((strcmp(cadena,otro.cadena))== 0);
}

bool String :: operator< (const String &otro)
{
    return ((strcmp(cadena,otro.cadena)) < 0);
}

String String :: operator+ (const String &otro)
{
    int largo = strlen(cadena), largo2 = strlen(otro.cadena);
    String aux;
    aux.cadena = new char[largo + largo2 + 1];
    strcpy (aux.cadena,cadena);
    strcat(aux.cadena,otro.cadena);
    return aux;
}

void String :: scan ()
{
    char arreglo[MAX];
    char c;
    c = cin.get();
    int i = 0;
    while (c != '\n' && i<MAX-1)
    {
        arreglo[i] = c;
        i++;
        c = cin.get();
    }
    arreglo[i] = '\0';
    cadena = new char [i + 1];
    strcpy (cadena,arreglo);
}

void String :: print()
{
    cout << cadena << endl;
}
