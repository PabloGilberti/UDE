
#include <stdio.h>

using namespace std;

/*
Ejercicio 3
Escribir una función recursiva que devuelva el máximo común divisor (mcd) de dos enteros p y q,
es decir, el mayor entero d que divide a p y a q. Implementarla en un único programa (sin usar
módulos) y luego invocarla desde el main. El mcd se calcula del siguiente modo:
Mientras el resto r de dividir p entre q sea distinto de 0 hacer
p debe tomar el valor de q
q debe tomar el valor de r
Fin mientras
q es el máximo común divisor
*/


//precondicion que p>=q
int mcd(int p, int q) {

    if (q == 0)
        return p; // caso base
    else{
    // calcular el resto sin usar %
        int cociente = p / q;
        int resto = p - cociente * q;
        return mcd(q, resto); // llamada recursiva
    }
}


int main()
{
    int x=mcd(11,7);
    printf("El MCD es:%d",x);
}


//Ejercicio 4
//Dado el siguiente programa:
//#include <stdio.h>

/*
void Recursivo (int a, int &b, int &c){
    if (a == b)
        printf ("\n Paso base %d %d %d",a,b,c);
    else{
        b = b - 2;
        printf ("\n Antes paso recursivo %d %d %d", a, b, c);
        Recursivo (a-1, b, c);
        c = c + 1;
        printf ("\n Luego paso recursivo %d %d %d", a, b, c);
    }
}
int main ()
{
    int a = 5;
    int b = 8;
    int c = 3;
    printf ("\n Se va a ejecutar un subprograma recursivo");
    Recursivo(a,b,c);
    printf ("\n Se acaba de ejecutar un subprograma recursivo");
}
*/
