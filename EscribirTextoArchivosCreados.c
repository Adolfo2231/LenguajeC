#include <stdio.h>

//* Un puntero a un archivo es un  puntero  a  una  informaciÃ³n  que  define  varias
//* cosas  sobre Ã©l, incluyendo el nombre, el estado y la posiciÃ³n actual del archivo.
//* En esencia identifica un archivo especifico y utiliza la secuencia asociada para dirigir
//* el funcionamiento de  las  funciones  de  E/S  con  buffer.
//* Un  puntero  a  un  archivo  es  una  variable  de  tipo  puntero  al  tipo  FILE  que  se define  en  STDIO.H.
//* Un  programa  necesita  utilizar  punteros  a  archivos  para  leer  o  escribir  en  los  mismos.
//* Para obtener una variable de este tipo se utiliza una secuencia como esta: FILE *F;

int main()
{

    //* Creamos el apuntador y lo igualamos a lo que devuelva fopen
    //! Recuerda que el archivo no existe y se crearÃ¡ automaticamente

    FILE *Archivo = fopen("Prueba3.txt", "a");
    //? Verificacion (NULL es el macro para la memoria nula)

    if (Archivo == NULL)
    {
        printf("Error al intentar crear/acceder al archivo\n");
    }
    else
    {
        //* Definimos un texto y lo escribimos en el archivo
        char Texto[] = "Hola Mundo";
        fprintf(Archivo, "Texto Escrito: %s", Texto);
        printf("Archivo creado con exito\n");
    }

    //? Pase lo que pase, cerramos el archivo
    fclose(Archivo);

    return 0;
}