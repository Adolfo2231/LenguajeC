// Metodo de Ordenamiento

#include <stdio.h>

int main()
{

    int array[5] = {3, 2, 4, 1, 5};
    int i, j, aux;

    // *Cada recorrido que hara ya que son 5 elementos
    for (i = 0; i < 5; i++)
    {
        // *Ordenara solo 1 elemento cada vez
        for (j = 0; j < 5; j++)
        {
            //*!Si el elemento es mayor que el elemento siguiente del array
            if (array[j] > array[j + 1])
            {
                aux = array[j];//*? Guardas el valor del elemento mayor en una variable auxiliar */
                array[j] = array[j + 1];//*!Igualas el valor del siguiente elemento en el actual ya que es menor 
                array[j + 1] = aux;//*?Guardas en valor mayor en el siguente elemento
            }
        }
    }
    // Ascendente
    for (i = 0; i < 5; i++)
    {
        printf("%i", array[i]);
    }
    printf("\n\n");

    // Descendente
    for (i = 4; i >= 0; i--)
    {
        printf("%i", array[i]);
    }

    return 0;
}
