#include <stdio.h>

struct persona{

    char nombre[20];
    int edad;
}
persona1 = {"Jorge", 19},
    persona2 = {"Ricardo", 18};

int main()
{
    printf("\nSu nombre es: %s", persona1.nombre);
    printf("\nLa edad es: %i", persona1.edad);

    printf("\n\nSu nombre es: %s", persona2.nombre);
    printf("\nLa edad es: %i", persona2.edad);

    return 0;
}