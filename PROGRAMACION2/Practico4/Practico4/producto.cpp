#include "producto.h"



void CargarProducto(Producto &p) {

    printf("Nombre del producto: ");
    scanf(" %80[^\n]", p.nombre);

    printf("Número: ");
    scanf("%ld", &p.numero);

    printf("Precio: ");
    scanf("%f", &p.precio);

    int stockAux;
    printf("¿Está en stock? (1=SI, 0=NO): ");
    scanf("%d", &stockAux);
    if (stockAux == 1)
        p.en_stock = TRUE;
    else
        p.en_stock = FALSE;

    printf("Fecha de adquisición\n");
    printf("  Día: ");
    scanf("%d", &p.fecha_adquisicion.dia);
    printf("  Mes: ");
    scanf("%d", &p.fecha_adquisicion.mes);
    printf("  Año: ");
    scanf("%d", &p.fecha_adquisicion.anio);
}

