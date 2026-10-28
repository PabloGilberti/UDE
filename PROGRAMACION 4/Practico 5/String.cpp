#include "String.h"

// ------------------------------------------------------------ constructores y destructor

String::String(){

    cadena=new char[1];
    cadena[0]='\0';

}

// Constructor común: si el texto recibido tiene más de MAX caracteres,
// se guardan solamente los primeros MAX (la cadena queda truncada).
String::String( char * cad){

    int largo = strlen(cad);
    cadena = new char [largo +1];
    strcpy(cadena,cad);

}

String::String (const String &otro){


    int largo = strlen(otro.cadena);
    cadena = new char[largo+1];
    strcpy(cadena,otro.cadena);

}



//alias entre punteros es cuando mas de un puntero apuntan a la misma direccion de memoria.
//al no definir un constructor de copia, c++ implementa uno que copia solo el puntero
//(genera alias). Por eso se define el constructor de copia y la sobrecarga del operador =

String :: String(const String &otro){

    int largo = strlen(otro.cadena);
    cadena = new char [largo +1];       // memoria propia: cada objeto tiene su cadena
    strcpy(cadena,otro.cadena);

}

String :: ~String(){//destructor

    delete[] cadena;
    //no es necesario --->cadena=null

}

// ------------------------------------------------------------ asignación

String String::operator=(const String &otro){
    if (this != &otro){                 // evita el caso s = s
        delete[] cadena;                // libero la cadena apuntada
        int largo = strlen(otro.cadena);
        cadena = new char[largo +1];
        strcpy(cadena,otro.cadena);
    }
    return (*this);

}

// ------------------------------------------------------------ comparaciones

// strcmp(a, b) devuelve:  0 si son iguales
//                        <0 si a va antes que b alfabéticamente
//                        >0 si a va después que b
bool String::operator==(const String &otro) {

    return (strcmp(cadena, otro.cadena) == 0);

}

bool String::operator<(const String &otro) const{

    return (strcmp(cadena, otro.cadena) < 0);

}

// ------------------------------------------------------------ concatenación

// Devuelve un String NUEVO con this seguido de otro; ninguno se modifica.
// Si el resultado supera MAX caracteres, se trunca a MAX.
String String::operator+(const String &otro) const{

    int largo1 = strlen(cadena);
    int largo2 = strlen(otro.cadena);

    char * aux = new char[largo1 + largo2 + 1];   // espacio para los dos + '\0'
    strcpy(aux, cadena);                          // copio el primero
    strcat(aux, otro.cadena);                     // le agrego el segundo al final

    String resultado(aux);              // el constructor común trunca a MAX si hace falta
    delete[] aux;                       // libero el auxiliar: resultado tiene su propia copia
    return resultado;

}

// ------------------------------------------------------------ entrada / salida

// Lee una línea del teclado de a lo sumo MAX caracteres
void String::scan(){

    char buffer[MAX + 1];               // MAX caracteres + '\0'
    cin.getline(buffer, MAX + 1);       // si se escribe de más, se lee solo hasta MAX
    if (cin.fail()){                    // la línea era más larga que MAX:
        cin.clear();                    //   se limpia el error
        cin.ignore(10000, '\n');        //   y se descarta el resto de la línea
    }

    delete[] cadena;                    // libero el texto anterior
    cadena = new char[strlen(buffer) + 1];
    strcpy(cadena, buffer);

}

void String::print() const{

    cout << cadena;

}

// ------------------------------------------------------------ otros

int String::largo() const{

    return strlen(cadena);

}

bool String::mismoLargo(String otro){

    return (strlen(cadena)== strlen(otro.cadena));

}
