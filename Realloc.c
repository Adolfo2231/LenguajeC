

#include <stdio.h>

//?Permite ampliar el bloque de memoria

int main()
{

    int *vector, *vectorConvertido;
    int i;
    vector = malloc(3 * sizeof(int));
    // Reserva memoria para 3 elementos enteros

    // Primer Vector
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    for (i = 0; i < 3; i++)
    {
        printf("%i ", vector[i]);
    }
    // realloc
    vectorConvertido = realloc(vector, 5 * sizeof(int));
    // Ampliando el arreglo a 5

    // Agregamos los demas valores
    vector[3] = 4;
    vector[4] = 5;
    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%i ", vector[i]);
    }

    free(vectorConvertido);

    return 0;
}