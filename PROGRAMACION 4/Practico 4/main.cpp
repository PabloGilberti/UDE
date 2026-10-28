#include <iostream>
#include "Fecha.h"

using namespace std;

// Muestra una fecha con formato dd/mm/aaaa (usa solo las selectoras)
void mostrar(Fecha f)
{
    cout << f.getDia() << "/" << f.getMes() << "/" << f.getAnio();
}

void mostrarBool(bool b)
{
    cout << (b ? "true" : "false");
}

int main()
{
    // ---- Constructores
    Fecha f1;                       // por defecto
    Fecha f2(30, 11, 2000);         // común
    Fecha f3(f2);                   // de copia

    cout << "== Constructores ==" << endl;
    cout << "Por defecto: ";  mostrar(f1); cout << endl;
    cout << "Comun:       ";  mostrar(f2); cout << endl;
    cout << "Copia de f2: ";  mostrar(f3); cout << endl;

    // ---- == y <
    cout << endl << "== Comparaciones ==" << endl;
    cout << "f2 == f3 ? ";  mostrarBool(f2 == f3); cout << endl;
    cout << "f1 == f2 ? ";  mostrarBool(f1 == f2); cout << endl;
    cout << "f1 <  f2 ? ";  mostrarBool(f1 < f2);  cout << endl;
    cout << "f2 <  f1 ? ";  mostrarBool(f2 < f1);  cout << endl;

    // ---- ++ prefijo y postfijo
    cout << endl << "== Operador ++ ==" << endl;
    Fecha a(30, 11, 2000);
    Fecha r = ++a;
    cout << "++a con a=30/11/2000 -> devuelve ";  mostrar(r);
    cout << ", a queda ";  mostrar(a);  cout << endl;

    Fecha b(31, 12, 2000);
    Fecha r2 = b++;
    cout << "b++ con b=31/12/2000 -> devuelve ";  mostrar(r2);
    cout << ", b queda ";  mostrar(b);  cout << endl;

    Fecha c(28, 2, 2024);           // año bisiesto
    ++c;
    cout << "++ sobre 28/2/2024 (bisiesto)  -> ";  mostrar(c);  cout << endl;

    Fecha d(28, 2, 2023);           // año no bisiesto
    ++d;
    cout << "++ sobre 28/2/2023 (no bisiesto) -> ";  mostrar(d);  cout << endl;

    // ---- + int
    cout << endl << "== Operador + ==" << endl;
    Fecha e(25, 12, 2025);
    cout << "25/12/2025 + 10  = ";   mostrar(e + 10);  cout << endl;
    cout << "1/1/2000 + 366   = ";   mostrar(f1 + 366); cout << endl;
    cout << "(e no se modifica: ";   mostrar(e);  cout << ")" << endl;

    // ---- - (diferencia de días)
    cout << endl << "== Operador - ==" << endl;
    Fecha g(1, 1, 2026);
    Fecha h(8, 10, 2026);
    cout << "8/10/2026 - 1/1/2026 = " << (h - g) << " dias" << endl;
    cout << "1/1/2026 - 8/10/2026 = " << (g - h) << " dias" << endl;
    cout << "1/1/2000 - 1/1/2000  = " << (f1 - f1) << " dias" << endl;

    // ---- esValida
    cout << endl << "== esValida ==" << endl;
    Fecha v1(29, 2, 2024), v2(29, 2, 2023), v3(31, 4, 2026), v4(15, 13, 2026);
    cout << "29/2/2024 -> ";  mostrarBool(v1.esValida());  cout << endl;
    cout << "29/2/2023 -> ";  mostrarBool(v2.esValida());  cout << endl;
    cout << "31/4/2026 -> ";  mostrarBool(v3.esValida());  cout << endl;
    cout << "15/13/2026 -> "; mostrarBool(v4.esValida());  cout << endl;



     // ---- Sumar 1 dia
     // ---------------- sumar1dia (método público que usa diaSiguiente)
    cout << endl << "== sumar1dia ==" << endl;
    Fecha s1(30, 11, 2000);              // fin de mes
    s1.sumar1dia();                      // se llama sobre el objeto y lo modifica
    cout << "30/11/2000 -> ";  mostrar(s1);  cout << endl;    // 1/12/2000

    Fecha s2(31, 12, 2025);              // fin de año
    s2.sumar1dia();
    cout << "31/12/2025 -> ";  mostrar(s2);  cout << endl;    // 1/1/2026

    Fecha s3(28, 2, 2024);               // febrero de año bisiesto
    s3.sumar1dia();
    cout << "28/2/2024  -> ";  mostrar(s3);  cout << endl;    // 29/2/2024


}
