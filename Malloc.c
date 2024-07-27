#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//? Reserva espacio de memoria dinamica
//! malloc(Espacios necesarios *sizeof(int,char))
int main (){

    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre, "Ricardo");
    longitud = strlen(nombre);

    printf("La longitud del nombre es: %i\n", longitud);
    p_nombre = malloc((longitud + 1) *sizeof(char));

    strcpy(p_nombre, nombre);
    printf("Nombre: %s", p_nombre);


    return 0;
}