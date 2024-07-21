Nombre FunciÃ³n
fopen() Abre un archivo.
fclose() Cierra un archivo.
fgets() Lee una cadena de un archivo.
fputs() Escribe una cadena en un archivo
fseek() Busca un byte especifico de un archivo.
fprintf() Escribe una salida con formato en el archivo.
fscanf() una entrada con formato desde el archivo.
feof() Devuelve cierto si se llega al final del archivo.
ferror() Devuelve cierto si se produce un error.
rewind() Coloca el localizador de posiciÃ³n del archivo al principio del mismo.
remove() Borra un archivo.
fflush() Vaci­a un archivo.

    //! Hay dos tipos de archivos, archivos de texto y archivos binarios.

    //? Un archivo de texto es una secuencia de caracteres  organizadas  en  lÃ­neas
    //? terminadas  por  un  carÃ¡cter  de  nueva  lÃ­nea.    En  estos  archivos  se pueden almacenar canciones,
    //? fuentes de programas, base de datos simples, etc.
    //? Los archivos de texto se caracterizan por ser  planos,  es  decir,  todas  las  letras  tienen
    //? el  mismo  formato  y  no  hay  palabras  subrayadas,  en  negrita,  o  letras  de distinto tamaÃ±o o ancho.

    //* Un archivo binario es una secuencia de bytes que tienen una correspondencia uno a uno con un dispositivo externo.
    //* AsÃ­  que  no  tendrÃ¡  lugar  ninguna  traducciÃ³n  de  caracteres.
    //* AdemÃ¡s,  el  nÃºmero  de  bytes  escritos  (leÃ­dos) serÃ¡ el mismo que los encontrados en el dispositivo externo.
    //* Ejemplos de estos archivos son FotografÃ­as, imÃ¡genes, texto con formatos, archivos ejecutables (aplicaciones), etc.
