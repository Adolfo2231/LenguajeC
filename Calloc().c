#include <stdio.h>

int main(){

    int *p;

    p = calloc(5, sizeof(char));

    for (int i = 0; i < 5; i++)
    {
        printf("Escriba el primer nombre: ");
        scanf("%i", &p[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nValores : %i", p[i]);
    }
    
    return 0;

}