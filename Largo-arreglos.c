#include <stdio.h>

int main()
{
    int largoArreglo = 5;
    int numerosArreglo[largoArreglo];
    /* Modificar los valores de un arreglo */
    numerosArreglo[0] = 13;
    numerosArreglo[1] = 21;
    numerosArreglo[4] = 62;

    // Obtener el largo del arreglo dinamicamente
    // Memoria ocupada por todo el arreglo
    //Sizeof para saber los bytes que ocupa de memoria(int = 4bytes)
    int tamanioArreglo = sizeof(numerosArreglo);
    printf("Tamanio completo del arreglo en bytes: %lu", tamanioArreglo);//lu de long size(para que lea sizeof)

    // Memoria ocupada por su primer elemento(celdas)
    int tamanioUnElemento = sizeof(numerosArreglo[0]);

    printf("\nTamanio un elemento del arreglo en bytes: %lu", tamanioUnElemento); // lu de long size(para que lea sizeof)

    int longitudArreglo = tamanioArreglo / tamanioUnElemento;

    printf("\nLargo del arreglo: %d", longitudArreglo);

    // Iteramos todos los valores usando un ciclo for
    printf("\n\nValores del Arreglo: \n");
    for (int i = 0; i <= longitudArreglo - 1; i++)
    {
        printf("\nValor %d [%d] = %d", i + 1, i, numerosArreglo[i]);
    }

    return 0;
}
