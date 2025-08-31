      ******************************************************************
      * Author:
      * Date:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. Divisiones.

       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SOURCE-COMPUTER. Ordenador donde se escribio el codigo.
       OBJECT-COMPUTER. Ordenador donde se ejecutra el codigo.
       SPECIAL-NAMES.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL
       SELECT OPTIONAL Nombre-del-archivo
       ASSIGN TO tipo-de-dispositivo.
       ORGANISATION is tipo de organizacion.
       ACCESS MODE IS Modo de acceso al archivo.
       RECORD KEY IS Clave del Registro.
       ALTERNATE RECORD KEY IS Clave Alternativas del registro.
       WITH DUPLICATES
       STATUS IS. Variable del estado del archivo.
       AUTHOR. Pablo Gilberti.
       INSTALLATION.
       DATE-WRITTEN.24/08/2025
       DATE-COMPILED.24/08/2025
       REMARKS.Primer mini programa de cobol.
       DATA DIVISION.
       FILE SECTION.
       Escribiremos los campos que componen los registros de los archivos que se van a utilizar.7
       WORKING-STORAGE SECTION.
       Variables de programas que bno tengan nada que ver con archivos.
       LINKAGE SECTION.
       esta seccion se registran las variables que lanzaran al prgrama princial llaado con e
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
            DISPLAY "Hello world"
            DISPLAY "Soy PAblo GIlberti"
            STOP RUN.
       END PROGRAM Divisiones.
