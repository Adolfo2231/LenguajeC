//* Reservar espacio en memoria con malloc para un array de tipo double para 1000 numeros
//* y comprobar si el puntero es vÃ¡lido (Si el puntero devuelve NULL, significa que
//* no hay suficiente memoria).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOPE 10 // Define the size of the array

int main() {
    double *p_array;

    // Allocate memory for the array
    p_array = ( double *)malloc(TOPE * sizeof(double));
    if (p_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers and store them in the array
    for (int i = 0; i < TOPE; i++) {
        p_array[i] = 1 + rand() % ((TOPE + 1) - 1);
        printf("%lf\n", p_array[i]);
    }

    // Free the allocated memory
    free(p_array);

    return 0; // Exit the program successfully
}