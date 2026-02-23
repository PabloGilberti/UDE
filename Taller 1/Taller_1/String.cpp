#include <string.h>



int strlar(const char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}


void strcop(char* destino, const char* origen)
{
    int i = 0;
    while (origen[i] != '\0')
    {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}
