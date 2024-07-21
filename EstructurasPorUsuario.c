#include <stdio.h>

struct persona
{
    char nombre[20];
    int edad;
} persona1, persona2;

int main()
{

    printf("Escribe tu nombre: \n");
    scanf("%s", &persona1.nombre);
    printf("Escriba tu edad: \n");
    scanf("%i", &persona1.edad);
    fflush(stdin);
    printf("Escribe tu nombre: \n");
    scanf("%s", &persona2.nombre);
    printf("Escriba tu edad: \n");
    scanf("%i", &persona2.edad);

    printf("\nSu nombre es: %s", persona1.nombre);
    printf("\nLa edad es: %i", persona1.edad);

    printf("\n\nSu nombre es: %s", persona2.nombre);
    printf("\nLa edad es: %i", persona2.edad);

    return 0;
}