#include <stdio.h>
#include "suma.h"

int main(){

    int *pa, *pb, a, b;

    printf("Introdusca los 2 valores:\n");
    scanf("%i %i", &a, &b);

    pa = &a;
    pb = &b;
    int respuesta = suma(pa, pb);

    printf("\nResultado de suma: %i",respuesta);
    return 0;
}