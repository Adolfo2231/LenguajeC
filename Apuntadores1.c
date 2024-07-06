#include <stdio.h>

int main(){

    //Manejo de memoria y apuntadores en C
    int miNumero = 10;
    printf("Valor miNumero: %d", miNumero);

    //Imprimimos la dirreccion de memoria de la variable
    //El especificador de formato %p -> pointer
    printf("\nDireccion memoria miNumero: %p", &miNumero);
}