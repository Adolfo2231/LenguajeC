#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Automovil
{

    char marca[15];
    char modelo[15];
    char color[15];
    char tipoAuto[15];
} Automovil;
//**Prototipo de la funcion llenarDatosAutomovil
void llenarDatosAutomovil(Automovil *carrosCreados, int cantidadAutos);
void imprimirDatosAutomovil(Automovil *carrosCreados, int cantidadAutos);

//*Funciones (Definiciones)
void llenarDatosAutomovil(Automovil *carrosCreados, int cantidadAutos){


    //?Lenamos los datos de la estructura Automovil
    for (int i = 0; i < cantidadAutos; i++)
    {
        printf("Introdusca la marca del auto [%i]: ", i);
        fflush(stdin);
        scanf("%s", &carrosCreados[i].marca);

        printf("Introdusca el modelo del auto [%i]: ", i);
        fflush(stdin);
        scanf("%s", &carrosCreados[i].modelo);

        printf("Introdusca el color del auto [%i]: ", i);
        fflush(stdin);
        scanf("%s", &carrosCreados[i].color);

        printf("Introdusca el tipo de auto [%i]: ", i);
        fflush(stdin);
        scanf("%s", &carrosCreados[i].tipoAuto);

        printf("\n\n");
    }
}

void imprimirDatosAutomovil(Automovil *carrosCreados, int cantidadAutos){

    for (int i = 0; i < cantidadAutos; i++)
    {
        printf("\nMarca del auto [%i]: %s", i, carrosCreados[i].marca);
        printf("\nModelo del auto [%i]: %s", i, carrosCreados[i].modelo);
        printf("\nColor del auto[%i]: %s", i, carrosCreados[i].color);
        printf("\nTipo del auto [%i]: %s", i, carrosCreados[i].tipoAuto);
        printf("\n\n");
    }
}
