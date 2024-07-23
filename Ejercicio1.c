/*Crear un programa en C, que pueda seguir agregando contactos de email,
hacia el archivo que creamos en el problema */

#include <stdio.h>
#include <stdlib.h>

FILE *fd;
struct datosPersona
{
    char nombre[20];
    char apellidos[20];
    char email[30];
} datos;

int main()
{
    char rpt;
    char direccion[] = "C:\\Users\\ryzen\\OneDrive\\Documents\\Trabajos-C\\hola-mundo\\Prueba.txt";

    fd = fopen(direccion, "at");
    // at = add texto - agregar texto;

    if (fd == NULL)
    {
        printf("Error al tratar de localizar el archivo");
        return 1;
    }

    printf("\tAgregando contacto en el lista\n");

    do
    {
        fflush(stdin);
        printf("\nNombre:");//!Error al capturar el 2 nombre
        gets(datos.nombre);
        printf("Apellido: ");
        gets(datos.apellidos);
        printf("Email: ");
        gets(datos.email);

        fprintf(fd, "\nNombre: ");
        fwrite(datos.nombre, 1, strlen(datos.nombre), fd);
        fprintf(fd, "\nApellido: ");
        fwrite(datos.apellidos, 1, strlen(datos.apellidos), fd);
        fprintf(fd, "\nEmail: ");
        fwrite(datos.email, 1, strlen(datos.email), fd);
        printf("Desea agregar otro contacto(s): ");
        scanf("%c", &rpt);

    } while (rpt == 's');

    fclose(fd);

    return 0;
}