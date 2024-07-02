#include <stdio.h>

int main() {
	
	//Programa para calcular el precio de un terreno
	int ancho, largo, precioM2, area, precioTotal;
	
	printf("Escriba el ancho del terreno en metros: ");
	scanf("%d", &ancho);
	
	printf("\nEscriba el largo del terreno en metros: ");
	scanf("%d", &largo);
	
	printf("\nEscribal el precio por metro cuadrado: ");
	scanf("%d", &precioM2);
	
	 area = ancho * largo;
	 precioTotal = area * precioM2;
	
	printf("\nArea del terreno: %d", area);
	printf("\nPrecio del terreno: %d", precioTotal);
	
	return 0;
}

