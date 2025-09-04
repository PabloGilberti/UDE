#include <stdio.h>
#include "string.h"



void cargarArregloString(String &arr){

    int i=0;
    char c;
    printf("\nCargar su String[ENTER para terminar]");
    scanf("%c",&c);
    while (c!='\n' && i<StringMAX-1){
        arr[i]=c;
        scanf("%c",&c);
        i++;
    }
    arr[i]='\0';
}
int strlar(String arr){
    int i=0;

    while(arr[i]!='\0'){

        i++;
    }
        return i;
}

void strcon(String &arre1,String arre2){


int i=strlar(arre1);
printf("\nmel indice es:%d",i);
int j = 0;

    while (arre2[j]!='\0' && i < StringMAX-1){

        arre1[i]=arre2[j];
            i++;
            j++;

    }
    arre1[i]='\0';






}


void strcop (String &arre1,String arre2){
    int i=0;
    while (arre2[i]!='\0'){
        arre1[i]=arre2[i];
        i++;
    }
    arre1[i]='\0';
}

void imprimirArrString(String arre){
    int i=0;

    while(arre[i]!='\0'){
        printf("%c",arre[i]);
        i++;
    }
}

booleano strmen(String arre1,String arre2){
    int i=0;
    booleano menor = TRUE;

    while(arre1[i]!='\0' && arre2[i]!='\0' && menor==TRUE){
        if(arre1[i]>arre2[i]){
            menor=FALSE;
        }
        i++;
    }
    if (arre1[i]!='\0' && arre2[i]=='\0'&& menor==TRUE){

        menor=FALSE;

    }

    return menor;




}
booleano streq(String arre1,String arre2){
    int i=0;
    booleano igual = TRUE;

    while(arre1[i]!='\0' && arre2[i]!='\0' && igual==TRUE){
        if(arre1[i]!=arre2[i]){
            igual=FALSE;
        }
        i++;
    }
    if (((arre1[i]!='\0' && arre2[i] =='\0')||(arre2[i]!='\0' && arre1[i] =='\0'))&& igual==TRUE){
        igual=FALSE;
    }

    return igual;




}
