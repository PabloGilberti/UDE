#include <iostream>

using namespace std;


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


int main()
{
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
printf("El numero mayorde 3  es %d:",recibir);


}


