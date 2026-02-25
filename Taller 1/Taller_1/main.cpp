#include <iostream>
#include "ListaString.h"
#include <stdio.h>

using namespace std;


int main()
{
    ListaString L;
    LS_Crear(L);
    // 1️⃣ Probar Split
    String linea;
    strcrear(linea);

    cout << "Linea original: " << endl;
    scan(linea);

    LS_Split(linea, L);

    // 2️⃣ Mostrar cantidad
    int cant = LS_Cantidad(L);
    cout << "Cantidad de Parsing: " << cant << endl;

    // 3️⃣ Mostrar cada elemento
    for (int i = 1; i <= cant; i++)
    {
        String palabra = LS_EnPos(L, i);

        if (palabra != NULL)
            cout << "Token " << i << ": " << palabra << endl;
    }

    // 4️⃣ Liberar memoria
    LS_Liberar(L);

    if (L == NULL)
        cout << "Lista liberada correctamente." << endl;

    return 0;
}

