#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Valor absoluto (invertira el numero + a -)
    int numero, numeroAbs;
    printf("Proporciona un valor numerico: ");
    scanf("%d", &numero);
    numeroAbs = abs(numero);
    printf("Valor absoluto de %d es: %d\n", numero, numeroAbs);
    return 0;
}
