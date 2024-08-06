#include "AlmacenamientoTiempoEjecucion.h"

int main(){

    Automovil *din;
    int cantidad;
    printf("Cantidad del arreglo deseado: ");
    scanf("%i", &cantidad);
    din = (Automovil *)calloc(cantidad, sizeof(Automovil));
  
    creandoArreglo(din);

    return 0;
}