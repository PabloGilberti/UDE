#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#include "fecha.h"
#include "string.h"
typedef struct{String nombre;
               long int numero;
               float precio;
               booleano en_stock;
               Fecha fecha_adquisicion;}Producto;
//Selectoras
void CargarProducto(Producto &p);
void MostrarProducto(Producto p);
long int DarNumero(Producto p);
float    DarPrecio(Producto p);
booleano DarEnStock(Producto p);
Fecha    DarFechaAdquisicion(Producto p);

#endif // PRODUCTO_H_INCLUDED
