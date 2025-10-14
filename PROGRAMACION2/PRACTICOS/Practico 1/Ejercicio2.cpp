#include <stdio.h>
const int MAX=80;
typedef char String[MAX];


//a) Una función que calcula el doble de un número real.
float calcularDobleReal(float f1){

    float resultado = f1*2;


    return resultado;

}
//b) Una función que calcula el perímetro de un cuadrado a partir de la longitud de un lado.
float calcularPerimetroCuadrado(float lado){

    float resultado= lado * 4;

    return resultado;

}
//c) Una función que calcula la cantidad de ocurrencias de un carácter dado en un string.
int ocurrenciasString(String palabra,char c){

    int i=0,recurrencia=0;


    while(palabra[i]!='\0'){

        if (palabra[i]==c)
           recurrencia++;
        i++;
    }

        return recurrencia;


    }
int contarPalabras(String palabra){

    int i=0, contador=0;


    while (palabra[i]!='\0'){

            if(palabra[i]==' ')
                contador++;
            i++;





    }
    if (i>0)
        contador++;
    return contador;








}




int main(){

    printf("====== EJERCICIO 2 =========");
    printf("\n");
    float resultado = calcularDobleReal(15.2);
    printf ("\na)-El resultado del float es: %4.2f",resultado);

    float lado=5.35;
    resultado=calcularPerimetroCuadrado(lado);
    printf("\nb)-El perimietro del cuadrado es:%4.2f",resultado);

    String palabra;
    palabra[0]='M';
    palabra[1]='A';
    palabra[2]='N';
    palabra[3]='A';
    palabra[4]='N';
    palabra[5]='A';
    palabra[6]='S';
    palabra[7]='E';
    palabra[8]='S';
    palabra[9]=' ';
    palabra[10]='M';
    palabra[11]='A';
    palabra[12]='R';
    palabra[13]='T';
    palabra[14]='E';
    palabra[15]='S';
    palabra[16]='\0';
    int cantidad = ocurrenciasString(palabra,'A');
    printf("\nc)-La cantidad de recurrencias de la letra ingresada es:%d",cantidad);


    cantidad = contarPalabras(palabra);
    printf("\nLa cantidad de palabras son:%d",cantidad);


    printf("\n");
    printf("\n###### FIN EJERCICIO 2 ######");
    printf("\n");










}
