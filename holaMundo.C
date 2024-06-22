#include <stdio.h>

<<<<<<< HEAD
int main() {
	// 1. Declaramos una variable
	int miNumero;
	// 2. La inicializamos
	miNumero = 10;
	// 3. Imprimir la variable
	// formato %d -> decimal
	printf("Mi numero es: %d", miNumero);
	
	//1. Declaramos e inicializamos la variableint 
	int miNumero2 =20, miNumero3 = 30;
	
	//2. Imprimir el valor de las variables
	printf("\nMi numero dos es: %d, numero tres es: %d ",miNumero2, miNumero3);
=======
/*
Tipos de datos en C
*/
int main(){
	
	//Tipo entero (formato %d, %i)
	int entero=10;
	printf("Tipo entero: %i", entero);
	
	//Tipo flotantte (formato %f) %.2f mostrara solo 2 numero despues del punto
	float flotante = 3800.5;
	printf("\nTipo flotante: %.2f", flotante);
	
	//Tipo double (formato %f, %1f -> long float)
	double doble = 15.4;
	printf("\nTipo doble: %.6f", doble);
>>>>>>> master

	
	return 0;
}
	
	
