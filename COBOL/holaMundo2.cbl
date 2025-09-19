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
      *----EMITIR UN MENSAJE POR PANTALLA CON COMANDO DISPLAY
            DISPLAY "Hello world".
            DISPLAY "Display Muetra un string en pantalla" "anexo".
            DISPLAY SALUDO.
            DISPLAY NUMERO.
            DISPLAY "Introduce el primer numero: "
      *----SOLICITAR Y ALMACENAR EN VARIABLE VALOR INGRESADO POR TECLADO
            ACCEPT NUM1.
            DISPLAY "Introduce el segundo numero: "
            ACCEPT NUM2.
      * REALIZANDO SUMAS---------------------------------
            ADD NUM1 to NUM2 GIVING RESULTADO.
            DISPLAY "El Resultado es: " RESULTADO.
      * REALIZAR RESTAS----------------------------------
            SUBTRACT NUM1 FROM NUM2 GIVING RESULTADO.
            DISPLAY "El resultado de la resta es: "RESULTADO.
      * REALIZAR MULTIPLICACION--------------------------
           MULTIPLY NUM1 BY NUM2 GIVING RESULTADO.
           DISPLAY "El resultado de la multiplicacion es: "RESULTADO.
      * REALIZAR DIVICION---------------------------------
           COMPUTE RESULTADO= NUM1 + NUM2.
           DISPLAY "El resultado de la SUMA es: " RESULTADO.
           COMPUTE RESULTADO= NUM1 - NUM2.
           DISPLAY "El resultado de la RESTA es: " RESULTADO.
           COMPUTE RESULTADO= NUM1 * NUM2.
           DISPLAY "El resultado de la MULTIPLICACION es: " RESULTADO.
           COMPUTE RESULTADO= NUM1 / NUM2.
           DISPLAY "El resultado de la DIVISION es: " RESULTADO.
           IF RESULTADO >50
               DISPLAY "EL RESULTADO ES MAYOR QUE 50"
           ELSE
               DISPLAY "EL RESULTADO ES MENOR A 50"
           END-IF.
           STOP RUN.
       END PROGRAM Curso-de-Cobol.
