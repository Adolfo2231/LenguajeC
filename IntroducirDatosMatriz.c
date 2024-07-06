#include <stdio.h>
// Se definieron las constantes antes para que no tenga problemas al compilar

int main()
{

    int renglone, columnas;

    // Introducir valores a una matriz
    printf("Proporciona el numero de renglones: ");
    scanf("%d", &renglone);

    printf("\nProporciones el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[renglone][columnas];

    printf("\n-----Escritura de Matriz-----");
    for (int ren = 0; ren < renglone; ren++)
    {
        printf("\nReglon: %d", ren);
        for (int col = 0; col < columnas; col++)
        {
            printf("\nColumna [%d][%d]:", ren, col);
            scanf("%d", &matriz[ren][col]);
        }
    }

    printf("\n-----Lectura de Matriz-----");
    for (int ren = 0; ren < renglone; ren++)
    {
        printf("\nReglon: %d", ren);
        for (int col = 0; col < columnas; col++)
        {
            printf("\nColumna [%d][%d]: %d", ren, col, matriz[ren][col]);
        }
        printf("\n");
    }

    return 0;
}