
#include <iostream>
#include <stdio.h>

using namespace std;
const int MAX=80;
typedef char arreglo[MAX];



//DEFINO FUNCIONES

int contarOcurrencias(arreglo cadena, char caracter) {
    int contador = 0;
    int i = 0;

    while (cadena[i] != '\0') { // recorre hasta el final del string
        if (cadena[i] == caracter) {
            contador++;
        }
        i++;
    }
    return contador;
}

/*
int caracterEspecial(char caracter){
int valor=0;

    if (caracter ==' ' || caracter =='\n'|| caracter== '\t') {

        valor=1;
    }

return valor;

}
int recibirenteros(int num1, int num2){

 int retorno;

 if (num1 > num2){
    retorno=num1;
 }else{
     retorno=num2;
 }
    return retorno;
}

int recibirTresenteros(int num1, int num2,int num3){

 int retorno;

 if ((num1 > num2)&&(num1>num3)){
    retorno=num1;
 }else if (num2>num3){
     retorno=num2;
 }else{
    retorno=num3;
 }
    return retorno;
}

//Una función que calcula el doble de un número real.

float calculoDoble(float numero){
return numero * 2;
}

//Una función que calcula el perímetro de un cuadrado a partir de la longitud de un lado.

float perimetro(float lado){

return lado * 4;
}
*/
//EJECUCION DE LAS FUNCIONES.
int main()
{
/*
 char c='H';
 int valor=caracterEspecial(c);

if (valor==1)
    printf("True");
else
    printf("False");





int num1=1100,num2=530,num3=500, recibir;

recibir=recibirenteros(num1,num2);
printf("El numero mayor es %d:",recibir);

recibir=recibirTresenteros(num1,num2,num3);
printf("\nEl numero mayorde 3  es %d:",recibir);


float numero=3.92;
float numerodoble= calculoDoble(numero);
printf("\nEl valor calculado es %f:",numerodoble);


float lado=4.5;
float perimetroCalulado = perimetro(lado);
printf("\nEl perimetro calculado es %f:",perimetroCalulado);
*/
int cantOcu=0;
arreglo cadena;
/* parte a */
char car;
int i = 0;
printf ("Ingrese una frase y termine con ENTER: ");
fflush (stdin);
scanf ("%c", &car);
// continua en la próxima página

while (car != '\n' && i < MAX-1)
{
    cadena[i] = car;
    i++;
    scanf ("%c", &car);
}
cadena[i]= '\0';

//printf("%d", contarOcurrencias(cadena,'a'));
cantOcu=contarOcurrencias(cadena,'a');
printf("Ocurrencias %d:",cantOcu);
}


