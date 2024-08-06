#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Automovil{

    char marca[15];
    char modelo[15];
    char color[15];
    char tipoAuto[15];
} Automovil;

void creandoArreglo(Automovil *din){

    Automovil din;

    for (int i = 0; i < cantidad; i++)
    {
        printf("Introdusca la marca del auto %i", i);
        scanf("%s", &din[i].marca);

        printf("Introdusca la modelo del auto %i", i);
        scanf("%s", &din[i].modelo);

        printf("Introdusca el color del auto %i", i);
        scanf("%s", &din[i].color);

        printf("Introdusca el tipo de auto %i", i);
        scanf("%s", &din[i].tipoAuto);
    }
    
  
}