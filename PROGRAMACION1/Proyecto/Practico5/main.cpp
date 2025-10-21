#include <iostream>

using namespace std;

int main()
{
 //EJERCICIO 1
 /*
    char caracter;
    printf("Ingrese un caracter:\n");
    scanf("%c",&caracter);
    if(caracter>='A' && caracter<='Z'){
        printf("El Caracter es una letra mayuscula");

    }else{
        if(caracter>='a' && caracter<='z'){
            printf("El caracter es una letra minuscula");
        }else
            printf("El caracter ingresado no es una letra");
    }

    */
    //EJERCICIO 2
/*
    char caracter;
    printf("Ingrese un caracter:\n");
    scanf("%c",&caracter);
    if(caracter>='A' && caracter<='Z'){
        printf("El Caracter es una letra mayuscula");

    }else{
        if(caracter>='a' && caracter<='z'){
            printf("El caracter es una letra minuscula");
        }else{
            if(caracter>='0' && caracter<='9'){
                printf("El caracter es un nùmero");
            }else
                printf("El caracter ingresado es un signo");
        }

    }
  */
    //EJERCICIO 3
  /*
    int num1, num2;

    printf("Ingrese un numero:");
    scanf("\n%d",&num1);
    printf("Ingrese otro numero:");
    scanf("\n%d",&num2);
    if(num1>num2){
        printf("el valor mayor es:%d",num1);
    }else{
        if(num1==num2){
            printf("Los valores son iguales");
        }else{
        printf("el valor mayor es:%d",num2);

    }


}
*/
    float a,b,c, mayor, menor;
   printf("Ingrese tres numeros reales");
   scanf("%f %f %f",&a,&b,&c);
   if(a>b && a>c)
    mayor=a;
   else
    float a, b, c, mayor, menor;

    printf("Ingrese tres numeros reales: ");
    scanf("%f %f %f", &a, &b, &c);

    menor = a;
    mayor = a;

    if(b>mayor)
        mayor = b;
    else
        if(b<menor)
            menor = b;

    if(c>mayor)
        mayor = c;
    else
        if(c<menor)
            menor = c;





}
