      ******************************************************************
      * Author:
      * Date:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. Curso-de-Cobol.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 SALUDO PIC X(40) VALUE"Hola como estas, espero que todo bien".
       01 NUMERO PIC 999 VALUE 128.
       01 NUM1 PIC 9(5).
       01 NUM2 PIC 9(5).
       01 RESULTADO PIC 9(5).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
            DISPLAY "Hello world".
            DISPLAY "Display Muetra un string en pantalla".
            DISPLAY SALUDO.
            DISPLAY NUMERO.
            DISPLAY "Introduce el primer numero: "
            ACCEPT NUM1.
            DISPLAY "Introduce el segundo numero: "
            ACCEPT NUM2.
            ADD NUM1 to NUM2 GIVING RESULTADO.
            DISPLAY "El Resultado es: " RESULTADO.
            SUBTRACT NUM1 FROM NUM2 GIVING RESULTADO.
            DISPLAY "El resultado de la resta es: "RESULTADO.

            COMPUTE RESULTADO= NUM1 * NUM2.
            DISPLAY "El resultado de la multiplicacion es: " RESULTADO.


            STOP RUN.
       END PROGRAM Curso-de-Cobol.
