#include <stdio.h>

// Libreria para las funciones de cadena
#include <string.h>

int main()
{

    // Definir una cadena
    char cadena[] = "Hola Mundo";
    printf("Largo cadena: %d", strlen(cadena)); // strlen funcion para saber largo de una cadena

    //Recorremos cada caracter
    for (int i = 0; i < strlen(cadena); i++)
    {
        printf("\n%c", cadena[i]);//Formato %c para leer cada caracter
    }
    
}