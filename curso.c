#include <stdio.h>
#include <stdbool.h>

int main() {
	//sizeof - Nos dira cuantos byte hay en cada dato
	//Definicion de variables
	int entero;
	int flotante;
	double doble;
	char caracter;
	char cadena[]="Hola Mundo";
	bool boleano = true;
	
	//Imprimir ccada variable (tamanio)
	//%lu -especificador de formato(long unsigned) devuelve solo valores positivos
	
	printf("int tamanio bytes: %lu", sizeof(entero));
	printf("\nfloat tamanio bytes: %lu", sizeof(flotante));
	printf("\ndouble tamanio bytes: %lu", sizeof(doble));
	printf("\nchar tamanio bytes: %lu", sizeof(caracter));
	printf("\ncadena tamanio bytes: %lu", sizeof(cadena));
	printf("\nbool tamanio bytes: %lu", sizeof(boleano));
	
	return 0;
}

