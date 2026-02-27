#include "String.h"

void strcrear(String &s)
{
    s = new char[1];
    s[0] = '\0';
}


int strlar(String s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}


void strcop(String &destino, String origen)
{
    int i = 0;
    int largo = strlar(origen) + 1;
    delete [] destino;
    destino = new char[largo];
    while (origen[i] != '\0'){
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';

}

void strdestruir (String &s)
{
delete [] s;
s = NULL;
}




void scan (String &s)
{
String aux = new char[MAX];
int i=0;
char c;
fflush (stdin);
scanf ("%c", &c);
while (c!= '\n' && i < MAX-1)
{
 aux[i] = c;
 i++;
scanf ("%c", &c);
}
aux[i] = '\0';
strcop (s,aux);
strdestruir (aux);
}

Boolean streq(String s1, String s2){
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return FALSE;
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
        return TRUE;

    return FALSE;
}
