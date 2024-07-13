#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Convertir de numero a texto
    int edad = 28;
    char edadTexto[5]; // Suficientes caracteres
    // itoa - int to Ascii
    // ftoa - float to Ascii
    // El valor de 10 es la base del sistema de numeracion
    itoa(edad, edadTexto, 10);
    printf("Convirtiendo a texto: %s %s", edadTexto, "años");

    return 0;
}

//Sistemas de numeracion?