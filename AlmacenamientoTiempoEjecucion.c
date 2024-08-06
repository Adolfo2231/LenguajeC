#include "AlmacenamientoTiempoEjecucion.h"

int main(){

    
    int cantidadAutos;
    printf("Cantidad de autos a ingresar: ");
    fflush(stdin);
    scanf("%i", &cantidadAutos);

    //**Apuntador a la estructura Automovil (reservando el espacio de memoria) */
    Automovil *carrosCreados = (Automovil *)calloc(cantidadAutos, sizeof(Automovil));

    llenarDatosAutomovil(carrosCreados, cantidadAutos);
    printf("Imprimiendo datos Automovil..\n");

    imprimirDatosAutomovil(carrosCreados, cantidadAutos);
    free(carrosCreados);//!Liberando la memoria reservada

    return 0;
}