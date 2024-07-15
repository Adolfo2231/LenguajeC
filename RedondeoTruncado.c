#include <stdio.h>
#include <math.h>

int main (){

    //Redondeo y truncado
    float numero = 8.7;
    int redondeo, truncado;

    //Redondeo de numero
    redondeo = round(numero);
    printf("Valor %.2f redondeado = %d\n", numero, redondeo);

    //Truncado
    truncado = trunc(numero);
    printf("Valor %.2f truncado = %d\n", numero, truncado);
}