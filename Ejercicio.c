/*Hacer un puntero array de tipo float, pedir el usuario el numero de
elementos,luego reservar memoria dinamica con calloc, luego llenar
el array, imprimir todos los elementos, y por ultimo liberar el espacio
de memoria dinamica utilizado.*/

#include <stdio.h>

int main()
{

    int cantidad;
    float *array;
    FILE *Archivo = fopen("Curso.txt", "w");

    if (Archivo == NULL)
    {
        printf("Error al intentar crear/acceder al archivo\n");
    }
    else

    printf("Cantidad de elementos deseados: ");
    scanf("%i", &cantidad);

    array = calloc(cantidad, sizeof(float));
    for (int i = 0; i < cantidad; i++)

    {
        printf("Elemento [%i]: ", i + 1);
        scanf("%f", &array[i]);//?Guardando en la memoria reservada
    }

    for (int i = 0; i < cantidad; i++)
    {
        printf("\nElemento [%i]: %.2f", i, array[i]);//?Imprimiendo memoria dinamica
        fprintf(Archivo,"\nElemento[%i]: %f", i + 1, array[i]);//*Escribiendo en el archivo
    }

    free(array);//?Liberando memoria dinamica
    fclose(Archivo);//*Cerrando archivo
    return 0;
}
