#include <stdio.h>
#include<stdbool.h>

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
	
	//Tipo char (formato %c)
	char caracter = 'A';
	char caracter_decimal = 66;
	printf("\nTipo caracter: %c, %c", caracter, caracter_decimal);
	printf("\nTipo caracter en decimal: %d", caracter);
	
	//Tipo bool (valores true o false)
	//true = 1
	//false = 0
	bool boleano = false;
	printf("\nTipo logico: %d", boleano);
	
	//Tipo cadena (formato %s)
	//[]Indica que es un arreglo
	char cadena [] = "Mi cadena";//\0 ->null al final de una cadena se agrega por ende siempre tendras uno mas de los que vez
	printf("\nTipo cadena: %s", cadena);
	
	//Tipo cadena
	//[20] define el limite de caracteres permitidos
	char cadena2[20]="Mi cadena 2";
	printf("\nTipo cadena2: %s", cadena2);
	
	
		return 0;
}
	
	
