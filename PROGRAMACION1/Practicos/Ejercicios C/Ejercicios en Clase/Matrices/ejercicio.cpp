#include <stdio.h>

const int FIL=6;
const int COL=5;
typedef int Matriz [FIL] [COL];



int main(){


Matriz carros;
int i,j;

for (i=0;i<FIL;i++){

    for(j=0;i<COL;j++){

        printf("Ingrese valor de fila %d y Columna %d",i,j);
        scanf("%f",&carros[i][j]);
    }

}

}