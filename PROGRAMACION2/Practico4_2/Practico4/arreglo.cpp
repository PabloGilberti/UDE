#include "arreglo.h"
#include "producto.h"




void CargarArreglo(ArrProductos &p){

      for (int i=0; i<TAM; i++){
        printf("\n--- Producto %d ---\n", i+1);
        CargarProducto(p[i]);    // uso del módulo base (como en el apunte)
                              // mantener consistencia del tope
    }





    }

    void MostrarArreglo(ArrProductos p) {
    for (int i = 0; i < TAM; i++) {
        printf("\n[%d]\n", i);
        MostrarProducto(p[i]);
    }
}











