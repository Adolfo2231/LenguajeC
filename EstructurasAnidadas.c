#include <stdio.h>
#include <string.h>

struct infoDireccion
{
    char municipio[30];
    char calle[30];
    int zipCode;
};

struct empleado
{
    char nombre[30];
    int edad;
    char profesion[20];
    //*Inicializamos la struct infoDireccion
    struct infoDireccion dirEmpleado;
} empleado[2];

int main()
{

    for (int i = 0; i < 2; i++)
    {
        printf("Proporcione el primer nombre: ");
        scanf("%[^\n]", &empleado[i].nombre);

        //! Erro al compilar edad nose pq
        //printf("\nProporcione la edad:");
        //scanf("%i", &empleado[i].edad);

        printf("\nProporcione la profesion: ");
        scanf("%[^\n]", &empleado[i].profesion);

        printf("\nProporcione su ciudad de residencia: ");
        scanf("%s", &empleado[i].dirEmpleado.municipio);

        printf("\nProporcione la calle de residencia: ");
        scanf("%[^\n]", &empleado[i].dirEmpleado.calle);

        printf("\nProporcione el zipcode:");
        scanf("%i", &empleado[i].dirEmpleado.zipCode);
        fflush(stdin);
    }
    return 0;
}
