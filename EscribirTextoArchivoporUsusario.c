#include <stdio.h>

int main()
{

    FILE *Archivo = fopen("Prueba.txt", "a");//?Solo abrira el archivo
    if (Archivo == NULL)
    {
        printf("Error al intentar crear/acceder al archivo\n");
    }
    else
    {
        char letra;
        //* Mientras que el usuario no presione Enter
        while ((letra = getchar()) != '\n')//? getchar() atrapa caracter por caracter hasta que encuentre un enter
        {
            fputc(letra, Archivo); //! Escribe lo que digite en el archivo caracter por caracter
        }
    }
    fclose(Archivo);

    return 0;
}