#include <stdio.h>

int main(){

    //Manejo de memoria y apuntadores en C
    int miNumero = 10;
    printf("Valor miNumero: %d", miNumero);

    //Imprimimos la dirreccion de memoria de la variable
    //El especificador de formato %p -> pointer
    printf("\nDireccion memoria miNumero: %p", &miNumero);

    //Definiendo una variable apuntador, debe ser del mismo tipo que la variable a la que apunta
    int *apuntador = &miNumero;

    //Valor variable apuntador
    printf("\nValor apuntador(dir. memoria): %p", apuntador);//como es una var pointer no se utiliza &

    //Obtenemos el valor de la variable a la cual apuntamos
    //Dereference
    // es %d y *apuntador ya que queremos ver el valor que hay guardado en ese espacio de memoria
    printf("\nValor almacenado en dir. memoria %d", *apuntador);

    //Modificamos el valor de la variable a la cual apuntamos
    *apuntador = 20;
    printf("\nSe modifico el valor de la variable...");
    printf("\nvalor miNumero: %d", miNumero);
    printf("\nValor almacenado en dir. memoria: %d", *apuntador);
}