#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    
    int minimo = 100, maximo = 200;

    //Usamos la funcionsrand
    //Establecemos un tiempo en 0 para que cada vez envie un # aleatorio
    srand(time(0));

    // Establecer valor aleatorio
    // Generar un valor aleatorio entre 0 y 100
    int valorAleatorio = rand()%100;
    printf("Valor al azar (entre 0 y 100) = %d\n", valorAleatorio);

    //Valores aletorios entre 100 - 200 + 100(empieza desde 100)
    valorAleatorio = rand() % (minimo - maximo) + 100;
    printf("Valor al azar (entre 100 y 200) = %d\n", valorAleatorio);

    return 0;
}