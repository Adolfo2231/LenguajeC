//! Reservar memoria dinamica para una cadena de caracteres de 10 espacios, Luego
//! Utilizar realloc para ampliar la memoria dinamica a 30 espacios

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char *p_nombre, *p_nombreCompleto;

    p_nombre = malloc(10 * sizeof(char));

    strcpy(p_nombre, "Adolfo");
    printf("Nombre: %s", p_nombre);
    //! Ampliando cadena de carecteres a 30 espacios

    p_nombreCompleto = realloc(p_nombre, 30 * sizeof(char));

    //* Concatenamos "Adolfo" + "Rodriguez"
    strcat(p_nombreCompleto, " Rodriguez"); //* Adolfo Rodriguez

    printf("\nNombre Completo: %s", p_nombreCompleto);

    return 0;
}

//! Asignacion dinamica de memoria
