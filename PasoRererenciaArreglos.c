#include <stdio.h>

void cambiarValor(int parametro[]) //[]Recibe referencia de memoria
{
    //Cambiando los valores del arreglo
    parametro[0] = 4;
    parametro[1] = 5;
    parametro[2] = 6;
   
}

int main()
{
    /*Paso por referencia con arreglos edita lo que hay en esa dir. de memoria asi editando el valor antes establecido*/
    //Los arreglos siempre se pasan por referencia no hace falta &
    int arg[] = {1, 2, 3};
    //int arg[] = {1, 2, 3};
    printf("Antes llamar funcion:%d %d %d", arg[0], arg[1], arg[2]);

    //Los arreglos se pasan por referencia
    cambiarValor(&arg); // & Pasa referencia de memoria
    printf("\nDespues llamar funcion: %d %d %d", arg[0], arg[1], arg[2]);

   
    return 0;
}
