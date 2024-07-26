#include <stdio.h>
#include "Funciones.h"

int main(){

    int *pa, *pb, a, b;

    printf("Introdusca los 2 valores:\n");
    scanf("%i %i", &a, &b);

    pa = &a;
    pb = &b;
    int respuestaSuma = suma(pa, pb);
    int respuestaResta = resta(pa, pb);
    int respuestaMultiplicacion = multiplicacion(pa, pb);
    int respuestaDivision = division(pa, pb);

    printf("\nResultado de suma: %i",respuestaSuma);
    printf("\nResultado de resta: %i", respuestaResta);
    printf("\nResultado de multiplicacion: %i", respuestaMultiplicacion);
    printf("\nResultado de division: %i", respuestaDivision);

    return 0;
}