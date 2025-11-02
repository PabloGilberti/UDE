#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{

    char c ='a';
    char * pc = &c;

    int n = -560;
    int * pn = &n;

    float f = 1714.326;
    float * pf = &f;

    printf("\nEl Contenido de c es:%c",c);
    printf("\nLa Direccion  de c es:%X",&c);
    printf("\nEl Contenido de pc es:%X",pc);
    printf("\n");
    printf("\nEl Contenido de p es:%d",n);
    printf("\nLa Direccion  de p es:%X",&n);
    printf("\nEl Contenido de pn es:%X",pn);
    printf("\n");
    printf("\nEl Contenido de f es:%f",f);
    printf("\nLa Direccion  de f es:%X",&f);
    printf("\nEl Contenido de pn es:%X",pf);
    printf("\n");




}
