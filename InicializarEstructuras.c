#include <stdio.h>
#include <string.h>

struct Person
{
    char fullName[30];
    char country[10];
    int age;
};

int main()
{
    //*Inicializamos una var de la structura Persona
    struct Person bob;
    struct Person john;

    //* Set values for bob
    strcpy(bob.fullName, "Bob Martin");
    strcpy(bob.country, "USA");
    bob.age = 26;

    //* Set values for john
    strcpy(john.fullName, "John Doe");
    strcpy(john.country, "UK");
    john.age = 18;

    // Output
    printf("--- bob ---\n");
    printf("Name: %s\n", bob.fullName);
    printf("Country: %s\n", bob.country);
    printf("Age: %d\n\n", bob.age);
    printf("--- john ---\n");
    printf("Name: %s\n", john.fullName);
    printf("Country: %s\n", john.country);
    printf("Age: %d\n", john.age);
    return 0;
};