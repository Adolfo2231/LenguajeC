#include <stdio.h>
// Se definieron las constantes antes para que no tenga problemas al compilar
#define REGLONES 2
#define COLUMNAS 3

int main()
{
    // Definir la matriz 2 forma
    int matriz[REGLONES][COLUMNAS] =
        {
            {100, 200, 300}, // primer renglon
            {400, 500, 600}  // segundo renglon
        }; // Terminar con ;

    // Iteramos la matriz (recorremos la matriz)
    printf("-----Iteramos la matriz-----");
    for (int ren = 0; ren < REGLONES; ren++)
    {
        printf("\nrenglon (pivote): %d", ren);
        for (int col = 0; col < COLUMNAS; col++)
        {
            printf("\nMatriz[%d][%d] = %d", ren, col, matriz[ren][col]);
        }
        printf("\n");
    }

    return 0;
}