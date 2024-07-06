#include <stdio.h>
// Se definieron antes para que no tenga problemas al compilar
#define REGLONES 2
#define COLUMNAS 3

int main()
{
    // Definir constantes tamanio de la matriz (MAYUSCULAS)
    // const int REGLONES = 2;
    // const int COLUMNAS = 3;

   /* // Definimos la matriz 1 forma
    int matriz[REGLONES][COLUMNAS] =
        {100, 200, 300, 400, 500, 600};
    */

   //Definir la matriz 2 forma
    int matriz[REGLONES][COLUMNAS] =
        {
            {100, 200, 300}, // primer renglon
            {400, 500, 600}  // segundo renglon
        }; // Terminar con ;

    // Accedemos a los valores
    printf("\nValor de matriz: %d", matriz[0][0]);
    printf("\nValor de matriz: %d", matriz[0][1]);
    printf("\nValor de matriz: %d", matriz[0][2]);
    printf("\nValor de matriz: %d", matriz[1][0]);
    printf("\nValor de matriz: %d", matriz[1][1]);
    printf("\nValor de matriz: %d", matriz[1][2]);

    return 0;
}
