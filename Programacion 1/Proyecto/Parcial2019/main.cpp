#include <iostream>

typedef enum {FALSE, TRUE} boolean;
typedef enum {PEON, TORRE, CABALLO, ALFIL, DAMA, REY} pieza;
const int TAM = 16;
typedef pieza arreglo [TAM];
//definiciones ejercicio 3
const int MAX = 50;
typedef char String [MAX];

int main()
{
 //Ejercicio 3

 String cadenaIngreso;
 boolean valido=TRUE, encontrado=FALSE;
 char c;
 int i =0;

   printf("Ingrese un caracter ENTER para finalizar:");
   scanf("%c",&c);
   while(c!='\n' && i < MAX -1){
    cadenaIngreso[i]=c;
    scanf("%c",&c);
    i++;
   }
    cadenaIngreso[i]='\0';
    i=0;
    while(cadenaIngreso[i]!='\0' && valido){

        if(!((cadenaIngreso[i]>='A' && cadenaIngreso[i]<='Z')|| (cadenaIngreso[i]>='a' && cadenaIngreso[i]<='z'))){
            valido=FALSE;

        }else{
            i++;
        }


    }
    if(valido){

        printf("El String es Valido");
     }else{
        printf("El String es invalido");


    }

   printf("Ingrese una letra ENTER para finalizar:");
   scanf("%c",&c);

     i=0;
    while(cadenaIngreso[i]!='\0'){

        if(!encontrado){
            valido=FALSE;

        }else{
            i++;
        }


    }


}

    /*
    //ejercicio 1
    arreglo piezas;
    boolean valido=TRUE;
    int peon=0,torre=0,caballo=0,alfil=0,dama=0,rey=0;
    int i;
    int valor;
    for(i=0;i<TAM;i++){
            printf("Ingrese la pieza:(0=PEON, 1=TORRE, 2=CABALLO, 3=ALFIL, 4=DAMA, 5=REY)");

            scanf("%d",&valor);



            switch (valor){

                case 0:
                    piezas[i]=PEON;
                    break;
                case 1:
                    piezas[i]=TORRE;
                    break;
                case 2:
                   piezas[i]=CABALLO;
                   break;

                case 3:
                   piezas[i]=ALFIL;
                   break;
                case 4:
                   piezas[i]=DAMA;
                   break;
                case 5:
                   piezas[i]=REY;
                   break;
                default:
                    printf("Error pieza invalida");
                    i--;
                    break;



            }
        }


    //contar piezas
    i=0;


    do{
             //cuenta[piezas[i]]++
        switch(piezas[i]){
                case 0:
                    peon++;
                    if (peon>8)
                        valido=FALSE;
                    break;
                case 1:
                    torre++;
                    if (torre>2)
                        valido=FALSE;
                    break;
                case 2:
                    caballo++;
                    if (caballo>2)
                        valido=FALSE;
                    break;

                case 3:
                    alfil++;
                    if (alfil>2)
                        valido=FALSE;
                    break;
                case 4:
                    dama++;
                    if (dama>1)
                        valido=FALSE;
                    break;
                case 5:
                    rey++;
                    if (rey>1)
                        valido=FALSE;
                    break;

        }


    i++;
    }while(i < TAM && valido);

    if(valido)
        printf("Juego Valido");
    else
        printf("Juego Invalido");


        */
