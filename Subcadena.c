#include <stdio.h>
#include <string.h>

int main(){

    char cadena[] = "Hola Mundo";
    char subcadena[10];

    int inicio = 0, nCaracter = 4;

    strncpy(subcadena, &cadena[inicio], nCaracter);
    subcadena[nCaracter] = '\0';//Establecer leer hasta el espacio 9fin de cadena con salto de linea)

    printf("Cadena original: %s", cadena);
    printf("\nSubcadena: %s", subcadena);

    return 0;
}