/*Hacer un puntero array de tipo float, pedir el usuario el numero de
elementos,luego reservar memoria dinamica con calloc, luego llenar
el array, imprimir todos los elementos, y por ultimo liberar el espacio
de memoria dinamica utilizado.*/

#include <stdio.h>
#include <stdlib.h>

void archivo( int *p, float *array){

    FILE *Archivo = fopen("Curso.txt", "w");

    if (Archivo == NULL)
    {
        printf("Error al intentar crear/acceder al archivo\n");
    }
    else{

        for (int i = 0; i < *p; i++)
        {
            fprintf(Archivo, "\nElemento [%i]: %f", i, array[i]);
        }
        
    }
    

    fclose(Archivo); //*Cerrando archivo
}

void elementos(int *p, float *array)
{

    array = (float *)calloc(*p, sizeof(float));//?Creando espacio de memoria
    for (int i = 0; i < *p; i++){
        printf("Elemento [%i]: ", i);
        scanf("%f", &array[i]); //?Guardando en la memoria reservada
    }
    
    //*Funciones anidadas
    //!Mandando valores a las otras 2 funciones
    archivo(p, array);//?Mandando info para funcion archivo
    mostrar(p, array); //?Mandando info para funcion mostrar
}

void alMemoria(int *p, float *array){

    char respuesta;
    int memo;

    printf("Desea reservar mas memoria ?: (s)");
    scanf("%c", &respuesta);

    if (respuesta == 's'){

        printf("Cantidad de elementos deseados: ");
        scanf("%i", &p);
        array = realloc(array, p*sizeof(float));

        /* code */
    }
    
}
int main()
{
    int cantidad, *pCantidad;
    float *array;

    printf("Cantidad de elementos deseados: ");
    scanf("%i", &cantidad);

    pCantidad = &cantidad;
    elementos(pCantidad, array);

    return 0;
}

void mostrar(int *p, float *array)
{

    for (int i = 0; i < *p; i++)
    {
        printf("\nElemento [%i]: %.2f", i, array[i]); //?Imprimiendo memoria dinamica
    }
    free(array);
}