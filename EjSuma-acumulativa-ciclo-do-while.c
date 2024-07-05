#include <stdio.h>

int main()
{
    int numero = 1, maximo = 5, sumaAcumulativa = 0;
    do  {
        printf("\n(sumaAcumulativa + numero) -> %d + %d",
               sumaAcumulativa, numero);

        sumaAcumulativa += numero;
        printf("\nsumaAcumulativa: %d", sumaAcumulativa);
        numero++;
    } while (numero <= maximo);

        printf("\n\nLa suma de los primeros 5 numeros es: %d", sumaAcumulativa);

    return 0;
}
