#include <stdio.h>

int main()
{
   //Solicitar los valores al usuario
    int numeroElementos;
    printf("Proporciona el tamano del arreglo: ");
    scanf("%d", &numeroElementos);

    //Creamos el arreglo
    int arregloNumeros[numeroElementos];

    //Solicitar los valores al usuario
    for (int i = 0; i < numeroElementos; i++)
    {
        printf("Proporciona el valor %d del arreglo: ", i + 1);
        scanf("%d", &arregloNumeros[i]);
    }
    
    //Mostramos  cada elemento del arreglo
    for (int i = 0; i < numeroElementos; i++)
    {
        printf("\nValor del arreglo %d [%d] = %d", i + 1, i, arregloNumeros[i]);
    }
    
    
    return 0;
}
