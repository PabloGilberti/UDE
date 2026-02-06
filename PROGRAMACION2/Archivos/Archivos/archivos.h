#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED
#include "boolean.h"
#include "string.h"
// --- Definiciones de tipos personalizados ---


// 'string' definido como un puntero a char (cadena estilo C)
//typedef char* string;

// --- Prototipos del Módulo ---

/**
 * @brief Agrega un entero al final del archivo.
 */
 void Agregar (String nomArch, int entero);

/**
 * @brief Determina si existe o no un archivo con el nombre recibido.
 */
boolean Existe(String nomArch);

/**
 * @brief Determina si el archivo está vacío o no.
 * @pre El archivo existe.
 */
boolean Vacio(String nomArch);

/**
 * @brief Determina si el entero recibido está en el archivo.
 * @pre El archivo existe.
 */
boolean Pertenece(String nomArch, int entero);

/**
 * @brief Devuelve la cantidad de enteros almacenados en el archivo.
 * @pre El archivo existe.
 */
int Largo(String nomArch);

/**
 * @brief Devuelve el k-ésimo entero almacenado en el archivo.
 * @pre El archivo existe y su largo es >= k.
 */
int Kesimo(String nomArch, int k);

/**
 * @brief Despliega por pantalla los enteros almacenados en el archivo.
 * @pre El archivo existe.
 */
void Desplegar(String nomArch);

#endif // ARCHIVOS_H_INCLUDED
