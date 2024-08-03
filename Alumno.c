#include "Alumno.h"

int main()
{

    //*Apuntador a Alumno (estructura definida Alumno)
    void llenarAlumno(Alumno * din);

    printf("Tamanio de objeto Alumno = %d\n", sizeof(Alumno)); //*Bytes que ocupa
    Alumno *din1, *din2, *din3;

    din1 = (Alumno*)malloc(5 * sizeof(Alumno));
    din2 = (Alumno *)calloc(5, sizeof(Alumno));

    printf("Primer Apuntador\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direccion[%d] = %p\n", i, din1 + i); //? din1+i para que itere por la lista
    }
    printf("\n");

    printf("Segundo Apuntador\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direccion[%d] = %p\n", i, din2 + i); //? din1+i para que itere por la lista
    }
    printf("\n");

    printf("Con realloc\n");
    din3 =(Alumno*)realloc(din2, 10*sizeof(Alumno));
    for (int i = 0; i < 10; i++)
    {
        printf("&din3[%d] = %p\n", i, din3 + i);
    }

    llenarAlumno(din1);
    llenarAlumno(din2);//!Error al guardar en archivo


    din1 = (Alumno *)realloc(din1, 0);//* == free()
    
    free(din2);
   
    return 0;

}

void llenarAlumno(Alumno *din){

    printf("\n\nLlena los datos del alumno\n");
    printf("\nEscribe su nombre\n");
    fflush(stdin);
   //scanf("%s", din->nombre);//?Al ser din un apuntador se utiliza la ->
    scanf("%s", &din->nombre);

    printf("Escribe el Apellido\n");
    fflush(stdin);
    scanf("%s", &din->apellido);

    printf("Escribe su numero de cuenta\n");
    fflush(stdin);
    scanf("%d", &din->numCuenta);

    printf("Escribe su promedio\n");
    fflush(stdin);
    scanf("%f", &din->promedio);

    crearAlumno(din->numCuenta, din->nombre, din->apellido, din->promedio);
    imprimirAlumno(*din);//*Mandamos una copia
    archivos(*din);
}
