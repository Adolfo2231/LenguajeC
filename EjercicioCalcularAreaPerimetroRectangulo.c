#include <stdio.h>

int main() {
	
	//Ejercicio Calcular area y perimetro rectangulo
	
	int base, altura, perimetro, area;
	
	printf("Proporcione la base del restangulo: ");
	scanf("%d", &base);
	
	printf("\nProporcione la altura del rectangulo: ");
	scanf("%d", &altura);
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	printf("\nArea del rectangulo: %d", area);
	printf("\nPerimetro del rectangulo: %d\n", perimetro);
	return 0;
}

