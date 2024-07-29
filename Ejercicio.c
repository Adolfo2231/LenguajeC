/*Hacer un puntero array de tipo float, pedir el usuario el numero de
elementos,luego reservar memoria dinamica con calloc, luego llenar
el array, imprimir todos los elementos, y por ultimo liberar el espacio
de memoria dinamica utilizado.*/

#include <stdio.h>
#include <stdlib.h>

void elementos(int *p, float *array)
{

    array = (float *)calloc(*p, sizeof(float));
    for (int i = 0; i < *p; i++)

    {
        printf("Elemento [%i]: ", i);
        scanf("%f", &array[i]); //?Guardando en la memoria reservada
    }

    for (int i = 0; i < *p; i++)
    {
        printf("\nElemento guardado en[%i]: %f ", i, array[i]);
    }
}

int main()
{

    int cantidad, *pCantidad;
    float *array;

    FILE *Archivo = fopen("Curso.txt", "w");

    if (Archivo == NULL)
    {
        printf("Error al intentar crear/acceder al archivo\n");
    }
    else

        printf("Cantidad de elementos deseados: ");
    scanf("%i", &cantidad);

    pCantidad = &cantidad;
    elementos(pCantidad, array);

    free(array);     //?Liberando memoria dinamica
    fclose(Archivo); //*Cerrando archivo
    return 0;
}

void mostrar(int *p, float *array)
{

    for (int i = 0; i < *p; i++)
    {
        printf("\nElemento [%i]: %.2f", i, array[i]); //?Imprimiendo memoria dinamica
    }
}