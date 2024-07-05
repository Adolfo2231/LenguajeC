#include <stdio.h>

int main()
{
    // Declaracion de un Arreglo(5 espacios reservados)
    int largoArreglo = 5;
    int numerosArreglos[largoArreglo];

    // Modificar los valores de un arreglo
    numerosArreglos[0] = 13;
    numerosArreglos[1] = 21;
    numerosArreglos[4] = 62;

    /*Ciclo for para que pase por cada uno de los arreglos con el indice*/
   for (int i = 0; i < largoArreglo; i++)
   {
       printf("\nValor del arreglo %d [%d] = %d", i + 1, i, numerosArreglos[i]);
   }
   
    return 0;
}
