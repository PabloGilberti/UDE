#include "producto.h"
#include "booleano.h"



void CargarProducto(Producto &p) {

    CargarString(p.nombre);
   printf("Ingrese un nombre de producto: ");
    CargarString(p.nombre);
    printf("Numero (entero largo): ");
    scanf("%ld", &p.numero);
    printf("Precio: ");
    scanf("%f", &p.precio);
    printf("Se encuentra en Stock?:\n");
    CargarBooleano(p.en_stock);
    printf("Fecha de adquisicion:\n");
    CargarFecha(p.fecha_adquisicion);

}

 void MostrarProducto(Producto p) {
    printf("Producto:\n");
    printf("  Nombre: ");  MostrarString(p.nombre); printf("\n");
    printf("  Numero: %ld\n", p.numero);
    printf("  Precio: %.2f\n", p.precio);
    printf("  En stock: "); MostrarBooleano(p.en_stock); printf("\n");
    printf("  Fecha adquisicion: "); MostrarFecha(p.fecha_adquisicion); printf("\n");
}

long int DarNumero(Producto p){
    return p.numero;
    }
float DarPrecio(Producto p){
    return p.precio;
    }
booleano DarEnStock(Producto p){
    return p.en_stock;
    }
Fecha DarFechaAdquisicion(Producto p){
    return p.fecha_adquisicion;
    }
