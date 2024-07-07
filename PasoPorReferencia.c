#include <stdio.h>

void cambiarValor(int *parametro)//*Recibe referencia de memoria
{
    printf("\nDir. de memoria en parametro: %p", parametro);
    *parametro = 20;//*Edita el valor en la dir. de memoria
}

int main()
{
    /*Paso por referencia edita lo que hay en esa dir. de memoria asi editando el valor antes establecido*/
    int argumento = 10;
    printf("Antes llamar funcion: %d", argumento);

    cambiarValor(&argumento);// & Pasa referencia de memoria
    printf("\nDespues llamar funcion: %d", argumento);

    printf("\nDir. de memoria en argumento: %p", &argumento);

    return 0;
}
