#ifndef TIPOERROR_H_INCLUDED
#define TIPOERROR_H_INCLUDED


typedef enum {
                ERROR_NINGUNO,               // No hay error
                ERROR_CARACTER_INVALIDO,     // Símbolo desconocido
                ERROR_TERMINO_INVALIDO,      // Termino mal formado
                ERROR_PARENTESIS,            // Paréntesis mal balanceados
                ERROR_OPERADOR,              // Operador inválido o mal ubicado
                ERROR_VARIABLE,              // Variable inválida
                ERROR_EXPRESION_INCOMPLETA   // Falta operando u operador
                } TipoError;

#endif // TIPOERROR_H_INCLUDED
