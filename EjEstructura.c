#include <stdio.h>

struct alumno{

    char nombre[20];
    int edad;
    float promedio;
} alumno[3];



int main(){

    int promedioAlto;
    for (int i = 0; i < 3; i++)
    {
        printf("Nombre del estudiante [%d]: ", i+1);
        scanf("%s", &alumno[i].nombre);

        printf("Edad del alumno [%d]: ", i + 1);
        scanf("%d", &alumno[i].edad);

        printf("Pomedio del alumno [%d]: ", i + 1);
        scanf("%d", &alumno[i].promedio);

    }

    for (int i = 0; i < 3; i++)
    {
        if (alumno[i]->promedio > promedioAlto)
        {
            promedioAlto = alumno[i]->promedio;
        }else
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        
    }
    
  
    

    return 0;
    
}
