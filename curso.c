#include <stdio.h>


int main() {
	int a, b;
	int suma, resta, division, multiplicacion;
	
	printf("Introdusca 2 numeros:");
	scanf("%i %i", &a ,&b);
	
	printf("\nValor de a: %i", a);
	printf("\nValor de b: %i", b);
	
	suma = a + b;
	resta = a - b;
	division = a / b;
	multiplicacion = a * b;
	
	printf("\nResultado de suma: %i", suma);
	printf("\nResultado de resta: %i", resta);
	printf("\nResultado de division: %i", division);
	printf("\nResultado de multiplicacion: %i", multiplicacion);
	
	return 0;
}

