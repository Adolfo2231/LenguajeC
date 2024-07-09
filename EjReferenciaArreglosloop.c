#include <stdio.h>

void cArreglo(int arreglo[], int *reg) //[]Recibe referencia de memoria
{
    for (int i = 0; i < *reg; i++)
    {
        printf("\nProporcione el dato a guardar en [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    /* for (int i = 0; i < *reg; i++)
     {
         printf("\nDato en [%d]: %d", i, arreglo[i]);

     }
     */
}

void cMatrix(int arreglo[], int *reg, int *colum)
{
  for (int reglones = 0; reglones < *reg; reglones++)
    {
        for (int columnas = 0; columnas < *colum; columnas++)
        {
            printf("\nProporcione el dato a guardar en [%d][%d]: ", reglones, columnas);
            scanf("%d", &arreglo[reglones][columnas]);
        }
    }
}
int main()
{
    int REG, COLUM, arquitectura;

       printf("Proporcione que desea crear: \n1) Arreglo\n 2)Matrix ");
    scanf("%d", &arquitectura);

    if (arquitectura == 1)
    {
        int argArreglo[REG];
        printf("\n-----Creando un arreglo-----\n");
        printf("Proporcione la cantidad de reglones: ");
        scanf("%d", &REG);

        cArreglo(argArreglo, &REG);
    }
    else if (arquitectura == 2)
    {
        int argMatrix[REG][COLUM];
        printf("\n-----Creando una Matrix-----\n");
        printf("\nProporcione la cantidad de reglones: ");
        scanf("%d", &REG);

        printf("\nProporcione la cantidad de columnas: ");
        scanf("%d", &COLUM);

        cMatrix(argMatrix, &REG, &COLUM);
    }

    return 0;
}
