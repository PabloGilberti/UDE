#include <iostream>
#include "Arbol.h"
using namespace std;





int main()
{


    Arbol siete = Cons(7,NULL,NULL);
    Arbol dos = Cons(2,NULL,NULL);
    Arbol uno = Cons(1,NULL,NULL);
    Arbol cinco = Cons(5,uno,siete);
    Arbol tres = Cons (3,NULL,dos);
    Arbol cuatro= Cons (4,cinco,tres);
    printf("\n Raiz:%d", DarRaiz(cuatro));
    printf("\n Hijos: %d %d",DarRaiz(HijoIzq(cuatro)),
                            DarRaiz(HijoDere(cuatro)));
    printf("\n Nietos: %d %d %d", DarRaiz(HijoIzq(HijoIzq(cuatro))),
                                  DarRaiz(HijoDere(HijoIzq(cuatro))),
                                  DarRaiz(HijoDere(HijoDere(cuatro))));


}
