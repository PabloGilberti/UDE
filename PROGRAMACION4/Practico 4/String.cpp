#include "String.h"



String::String(){


    cadena=new char[1];
    cadena[0]='\0';


}

String::String(Char * cad){

    int largo = strlen(cad);
    cadena = new char [largo +1];
    strcpy(cadena,cad);// 1er par = destino, 2do par = origen
}

String :: ~String(){//destructor

    delete[cadena];
    //no es necesario --->cadena=null

}

bool String::mismoLargo(String otro){

    return (strlen(cadena)== strlen(otro.cadena));


}
//cuando termina la funcion , como creo un objeto, automaticamente lo destruye C++
//al liberar la memoria del contenido, por lo tanto los punteros apuntan a nada, estos
//quedaron sueltos

//por lo tanto ocurren 3 problemas, memoria dnamica inaccesible, "Marylin" qeuda desconectado
// al generarse el alias entre punteros, cadena uno y dos apuntan a basura ya que se
//elimina automaticamente por c++ el objeto alias creado entonces los objetos principale no se entera cuadno son eliminados los punteros

//alias entre punteros es cuando mas de un puntero apuntan a la misma direccin de memoria.
//en estge ejemplo el alias es perjudicial
//al no definir un construcctor de copia, c++ implementa uno el

//3 - para arreglar los porblemas visto, hay que realizar el constructor de copia y la sobrecarga
//del operador =

String::String(const String &otro){

    int largo = strlen(otro.cadena);
    cadena = new char [largo +1];
    strcpy(cadena,otro.cadena);

}

//a partir de ahora cada obeto tendra su propia cadena

//sobrecarga

String String::operator=(const String &otro){
    if (this != otro){
        delete[] cadeena;//libero la cadena apuntada
        int largo = strlen(otro.cadena);
        cadena = new char[largo +1];
        strcpy(cadeena,otro.cadena);
    }
    return (*this);


}
//cuando una clase maneja memoria dinamica en sus atributos (como el ejemplo de la clase String), para evitar problemas de memoria dinamica, definir de manera adecuada
//lls sioguientes metodos
//1) destructor
//2)consturctor
//
