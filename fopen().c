/*
Utilizar Funcion fopen(), para determinar si existe un archivo de texto (.txt)
o no

fopen(nombre archivo, modo);

    nombre archivo = cadena ... Contiene el identificador externo del archivo
    modo = cadena           ... Contiene el modo en que va a ser tratado el archivo

*/
#include <stdio.h>

int main()
{
    //* Apundor al archivo
    FILE *fd;

    char direccion[] = "C:\\Users\ryzen\\OneDrive\\Documents\\Trabajos-C\\hola-mundo\\prueba.txt";

    fd = fopen(direccion, "r"); // "r" = read -> leer

    if (fd == NULL)
    {
        printf("El archivo no existe\n");
    }
    else
    {
        printf("Se encontro el Archivo\n");
        printf("Su ubicacion es: %s\n", direccion);
        // Imprime la ubicacion donde esta el archivo
    }

    return 0;
}
