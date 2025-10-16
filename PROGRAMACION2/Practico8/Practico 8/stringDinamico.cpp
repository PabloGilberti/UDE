#include "stringDinamico.h"
#include <stdio.h>





// Devuelve longitud de la cadena
int strlar(String s){

    int i=0;
    while(s[i]!='\0'){

        i++;
    }

    return i;

}


// Imprime la cadena
void print(String &s){

    int i=0;
    while(s[i]!='\0'){

    printf("%c",s[i]);
    i++;
    }


}

// Carga la cadena por teclado
void scan(String &s){







}


// Devuelve TRUE si s1 < s2
boolean strmen(String s1, String s2){

    int i = 0;
    boolean encontre = FALSE;
    boolean menor = FALSE;
    while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0')){

        if (s1[i] != s2[i])
            encontre = TRUE;
        if (s1[i] < s2[i])
            menor = TRUE;
        i++;
    }
    if ((!encontre) && (s2[i]!='\0'))
        menor = TRUE;
    return menor;
}
// Devuelve TRUE si s1 == s2
boolean streq(String s1, String s2){
    boolean iguales=TRUE;
    int i = 0;

    while (s1[i]!='\0' && s2[i]!='\0'){

            if(s1[i]!=s2[i])
                iguales=FALSE;
            else
                i++;

    }
    if (s1[i]=='\0' != s2[i]=='\0')
            iguales=FALSE;

    return iguales;
}

// Copia s2 en s1
void strcop(String &s1, String s2){

    delete[]s1;
    int largo = strlar(s2);
    s1=new char[largo + 1];
    int i=0;
    while (s2[i]!='\0'){


        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}

// Concatena s1 y s2
void strcon(String &s1, String s2){


 int i = strlar(s1);
 int j = 0;
 while ((i < MAX - 1) && (s2[j] != '\0'))
    {
     s1[i] = s2[j];
     i++;
     j++;
    }
    s1[i] = '\0';


}

// Intercambia s1 y s2
void strswp(String &s1, String &s2);

//Crea un string vacío (solo con el carácter ‘\0’)
void strcrear(String &s){


 s = new char[1];
 s [0]= '\0';



}

//Libera la memoria ocupada por el string y lo deja nulo
void strDestruir(String &s){

        delete[]s;
        s=NULL;

}

