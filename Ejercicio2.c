#include <stdio.h>
#include <stdlib.h>

//* Agregando texto de escritura en un archivo y tambien lo crea */

FILE *fd;
int main()
{

    int c;
    char direccion[] = "C:\\Users\\ryzen\\OneDrive\\Documents\\Trabajos-C\\hola-mundo\\Curso.txt";

    fd = fopen(direccion, "at"); // at = add text

    if (fd == NULL)
    {
        printf("Error al tratar de crear el archivo");
        return 0;
    }

    while ((c = getchar()) != EOF)
    {
        fputc(c, fd);
    
    }

    fclose(fd);

    return 0;
}