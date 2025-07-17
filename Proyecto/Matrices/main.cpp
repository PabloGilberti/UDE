#include <iostream>

using namespace std;

const int F=3;
const int C=3;
typedef int matriz[F][C];



int main()
{
    matriz mat;
    int i,j;
//carga de matriz
      printf("Ingrese los valores en la matriz: ");

      for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            scanf("%d",&mat[i][j]);

        }

      }
//imprime valores de matriz
      for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
      }
//calcular promedio de valores
      int suma, promedio;
      for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            suma = suma + mat[i][j];        }

      }
       printf("El valor promedio de todos los valores de la matriz es: %d",promedio=suma/(F*C));

//buscar el de menor valor
       int menor=mat[0][0];
      for(i=0;i<F;i++){
        for(j=0;j<C;j++){

            if(mat[i][j]<menor){
                menor=mat[i][j];
            }
        }
      }
      printf("El numero de menort valor es:%d",menor);

}
