#include <stdio.h>

int main()
{
    int numero = 0, acumuladorSuma = 0;

    
    for (numero = 1; numero <= 5; numero++)
    {
        
        printf("\n(AcumuladorSuma + numero) -> %d + %d\n", acumuladorSuma, numero);

        acumuladorSuma += numero;
        printf("(Suma parcial acumulada) -> %d\n", acumuladorSuma);
    }

    printf("\nLa suma de los primeros 5 numeros es: %d", acumuladorSuma);

    return 0;
}
