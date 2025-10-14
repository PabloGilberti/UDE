#include <iostream>
#include <stdio.h>
typedef enum {FALSE,TRUE} boolean;

boolean caracter_tipo(char c){

    boolean es=FALSE;
    if(c ==' ' || c =='\t' || c =='\n'){
         es= TRUE;
    }

        return es;

}

int elMasGrande(int num1, int num2){
    int retorno;

    if (num1 > num2)

        retorno = num1;
    else
        retorno = num2;

    return retorno;



}

int elMasGrande3(int num1, int num2,int num3){
    int retorno;

    if (num1 >= num2 && num1 >= num3){

        retorno = num1;

    }else{
        if (num2>=num1 && num2 >= num3){

            retorno = num2;
        }else{

            retorno = num3;
        }
    }
    return retorno;



}





int main_1()
{
printf("====== EJERCICIO 1 =========");
printf("\n");

  //a)
    if(caracter_tipo('5'))
        printf("\na)-El caracter corresponde a espacio, tabulador o din de linea");
    else
        printf("\na)-Es otro tipo de caracter");

  //b)
        int retornado = elMasGrande(33,45);

        printf("\nb)-El valor mayor es:%d",retornado);

//c)
        int retornadoDe3=elMasGrande3(15,66,21);
        printf("\nc)-El valor mas grande de 3 es:%d",retornadoDe3);

printf("\n");
printf("\n###### FIN EJERCICIO 1 ######");
printf("\n");
}
