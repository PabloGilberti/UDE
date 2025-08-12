#include <iostream>
#include <stdio.h>
const int MAX=4;
typedef int arreglo[MAX];
const int MAXS=80;
typedef char String[MAXS];
typedef enum {clavel, rosa, jazmin, dalia}flor;

//a
 void listar(arreglo arr){

    for(int i = 0;i<MAX;i++){
        printf("\nEl valor en la posicion %d, corresponde a:%d",i,arr[i]);
    }
 }
//b
 void listar_string(String palabra){
 int i=0;
  while(palabra[i]!='\0' && i<MAXS){
    printf("%c",palabra[i]);
    i++;
  }
 }
 //c
 void dibujar(int FIL, int COL){

 for(int i=0;i<FIL;i++){
     printf("%c",'\n');
    for(int j=0;j<COL;j++){
        printf("%c",'*');
    }
 }
 }
 //d
 void pasarFlor(flor f){

    switch (f){
        case clavel:
            printf("\nClavel");
            break;
        case rosa:
            printf("\nRosas");
            break;
        case jazmin:
            printf("\nJazmin");
            break;
        case dalia:
            printf("\nDalia");
            break;
        default:
            printf("\nFlor incorrecta");
    }
 }
 //e
 void mayor_promedio(int num1,int num2){
    int mayor;
    float promedio;

    if (num1>num2){
        mayor=num1;
    }
    else
        mayor=num2;


    promedio = (num1+num2)/2;
    printf("El valor mayor es %d: y el resultado del promedio es:%f",mayor,promedio);

}
//f
void valores_impares(int num1,int num2){


    for (int i=num1;i<=num2;i++){

        if(i%2!=0)
            printf("\nvalor:%d",i);

    }
}




int main()
{
/*Escriba un programa que implemente los siguientes procedimientos en C++ y luego los invoque desde
el main. Probar de hacer diferentes invocaciones, pasando como parámetros tanto constantes como
variables, según corresponda. Debe definir todos los tipos de datos y constantes simbólicas necesarias.
a) Un procedimiento que reciba como parámetro un arreglo de enteros y lo liste por pantalla

*/

    arreglo ar;

    for(int i = 0;i<MAX;i++){

        ar[i] = i+2;

    }


    listar(ar);


 //b) Un procedimiento que reciba como parámetro un string y lo liste por pantalla.

//    String pasoPalabra;
//    int i=0;
//    char c;
//    printf("\nIngrese una palabra [ENTER para terminar]: ");
//    scanf("%c",&c);
//    while(c!='\n' && i<MAXS-1){
//        pasoPalabra[i]=c;
//        scanf("%c",&c);
//
//        i++;
//    }
//    pasoPalabra[i]='\0';
//
//    listar_string(pasoPalabra);


//c) Un procedimiento que, dados dos enteros (m y n) dibuje en pantalla un rectángulo de asteriscos
//formado por m filas y n columnas


    dibujar(2,3);


//d) Un procedimiento que reciba como parámetro un valor de un tipo enumerado flor (cuyos valores
//son clavel, rosa, jazmin, dalia) y muestre por pantalla el nombre de la flor correspondiente.
    flor florecita;
    florecita=clavel;
    pasarFlor(florecita);

//e) Un procedimiento que, dados dos enteros, despliegue por pantalla el mayor de ellos y también el
//promedio de ambos.
    //Ejercicio 1 parte b

mayor_promedio(2,4);

//f) Un procedimiento que reciba como parámetros dos enteros n y m, y despliegue por pantalla
//todos los valores impares que existan entre n y m.


valores_impares(1,10);


}
