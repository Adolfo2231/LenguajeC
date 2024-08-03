#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Alumno
{
    int numCuenta;
    char nombre[20];
    char apellido[20];
    float promedio;

}Alumno;

//?Prototipo
Alumno crearAlumno(int, char *, char *, float);
void imprimirAlumno(Alumno);


Alumno crearAlumno(int numeroCuenta, char* nombre, char* apellido, float promedio){

    //*Instancia de Alumno = int alumnoCreado
    Alumno alumnoCreado;

    alumnoCreado.numCuenta = numeroCuenta;
    strcpy(alumnoCreado.nombre, nombre);//!strcpy ya que es un string (char)
    strcpy(alumnoCreado.apellido, apellido);
    alumnoCreado.promedio = promedio;

    //*Valor que devolvemos
    return alumnoCreado;
}

void imprimirAlumno(Alumno alumnoPrint){

    printf("\nNumero de Cuenta: %i", alumnoPrint.numCuenta);
    printf("\nNombre: %s", alumnoPrint.nombre);
    printf("\nApellido: %s", alumnoPrint.apellido);
    printf("\nPromedio: %.2f", alumnoPrint.promedio);
}

void archivos(Alumno archivos){

    FILE *Archivo = fopen("Alumnos.txt", "a");
    if (Archivo == NULL)
    {
        printf("Error al encontrar el archivo");
    }

    else{

        fprintf(Archivo, "\nNombre: %s", archivos.nombre);
        fprintf(Archivo, "\nApellido: %s", archivos.apellido);
        fprintf(Archivo, "\nNumero de cuenta: %i", archivos.numCuenta);
        fprintf(Archivo, "\nPromedio: %.2f",archivos.promedio);

        fclose(Archivo);
    }

    

}