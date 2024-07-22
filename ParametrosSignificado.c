ParÃ¡metro Significa abrir el archivo en modo
    r Lectura.El archivo debe existir
        w Escritura.Si el archivo no existe,
    se crea, si existe, se sobrescribe a Escritura al final del documento.Si no existe se crea rb Binario.Para lectura r + Lectura y escritura.El archivo debe existir w + Crear un archivo para escritura.Si existe se sobrescribe rb + Binario.Para actualizaciÃ³n(lectura y escritura)

                                                                                                                                                                                                                                             fputc(Caracter, ApuntadorArchivo) es una funciÃ³n nos permite escribir un caracter en el archivo,
    regresa el caracter que se presionÃ³ en caso de que la operaciÃ³n se realice con Ã©xito o
    EOF si fallÃ³.El puntador es el que nos brinda la funciÃ³n fopen.

    fclose(ApuntadorArchivo) guarda los cambios en el archivo,
    cierra la conexiÃ³n y libera los
        recursos usados por el apuntador.

        Modo Significado
        r Abre un archivo de texto para lectura.
        w Crea un archivo de texto para escritura.
        a Abre un archivo de texto para anadir.
        rb Abre un archivo binario para lectura.
        wb Crea un archivo binario para escritura.
        ab Abre un archivo binario para anadir.
        r+ Abre un archivo de texto para lectura / escritura.
        w + Crea un archivo de texto para lectura / escritura.
        a + aniade o crea un archivo de texto para lectura / escritura.
        r + b Abre un archivo binario para lectura / escritura.
        w + b Crea un archivo binario para lectura / escritura.
        a + b anade o crea un archivo binario para lectura / escritura.