#include <stdio.h>

int main()
{
    // Declaracion de un Arreglo(5 espacios reservados)
    int numerosArreglos[5];

    // Modificar los valores de un arreglo
    numerosArreglos[0] = 13;
    numerosArreglos[1] = 21;
    numerosArreglos[4] = 62;

    // Imprimir los valores
    printf("\nValor 1 Arreglo[0] = %d", numerosArreglos[0]);
    printf("\nValor 2 Arreglo[1] = %d", numerosArreglos[1]);
    printf("\nValor 3 Arreglo[2] = %d", numerosArreglos[2]); // Muestra basura ya que no hay nada asignado a ese espacio de memoria en el arreglo
    printf("\nValor 4 Arreglo[3] = %d", numerosArreglos[3]); // Muestra basura ya que no hay nada asignado a ese espacio de memoria en el arreglo
    printf("\nValor 5 Arreglo[4] = %d", numerosArreglos[4]);
    return 0;
}
