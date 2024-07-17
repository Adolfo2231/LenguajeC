#include <stdio.h>

int main()
{

    int a[10] = {2, 5, 6, 9, 3, 1, 4, 8, 7, 0};
    int i, dato;
    char band = 'F';

    printf("Escribe un numero\n");
    scanf("%i", &dato);

    //! Busqueda Secuencial

    i = 0;
    while ((band == 'F') && (i < 10))
    {
        if (a[i] == dato)
        {
            band = 'V';
        }
        else
            i++;
    }

    if (band == 'F')
    {
        printf("\nEl numero no existe en la lista");
    }
    else if (band == 'V')
    {
        printf("El numero existe, en la posicion %i", i + 1);
    }
    return 0;
}