#include <stdio.h>

int main()
{
    // Definir constantes tamanio de la matriz (MAYUSCULAS)
    const int REGLONES = 2;
    const int COLUMNAS = 3;

    // Definimos la matriz
    int matriz[REGLONES][COLUMNAS];

    // Llenamos la matriz manualmente
    matriz[0][0] = 100;
    matriz[0][1] = 200;
    matriz[0][2] = 300;
    matriz[1][0] = 400;
    matriz[1][1] = 500;
    matriz[1][2] = 600;

    // Accedemos a los valores
    printf("\nValor de matriz: %d", matriz[0][0]);
    printf("\nValor de matriz: %d", matriz[0][1]);
    printf("\nValor de matriz: %d", matriz[0][2]);
    printf("\nValor de matriz: %d", matriz[1][0]);
    printf("\nValor de matriz: %d", matriz[1][1]);
    printf("\nValor de matriz: %d", matriz[1][2]);

    return 0;
}
