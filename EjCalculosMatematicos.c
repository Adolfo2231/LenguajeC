#include <stdio.h>
#include <stdbool.h>
int calculo(int *rEcuacion, int *num1, int *num2)
{

    if (*rEcuacion == 1)
    {
        *rEcuacion = *num1 * *num2;
    }
    else if (*rEcuacion == 2)
    {

        *rEcuacion = *num1 / *num2;
    }
    else if (*rEcuacion == 3)
    {

        *rEcuacion = *num1 + *num2;
    }
    else if (*rEcuacion == 4)
    {
        *rEcuacion = *num1 - *num2;
    }
    else
    {
        printf("Valor ingresado erroneo");
    }

    return *rEcuacion;
}

int main()
{
    int ecuacion, num1, num2;
    printf("Proporcione la ecuacion deseada: \n 1) Multiplicacion \n 2) Division\n 3) Suma\n 4) Resta\n");
    scanf("%d", &ecuacion);

    printf("Proporciona el primer numero: ");
    scanf("%i", &num1);

    printf("Proporciona el segundo numero: ");
    scanf("%i", &num2);

    calculo(&ecuacion, &num1, &num2);

    printf("\nResultado: %d", ecuacion);

    return 0;
}