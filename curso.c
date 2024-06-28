#include <stdio.h>


int main() {
	//Operadores de Asignacion
	//Operador = para asignar valar
	int miNumero = 10;
	printf("Valor miNumero: %d", miNumero);
	miNumero = 20;
	printf("\nValor miNumero: %d", miNumero);
	
	
	//Operador += (Operador compuesto)
	miNumero += 5; //miNumero = miNumero +5
	printf("\nValor miNumero: %d", miNumero);
	
	//Operador -= (Operador compuesto)
	miNumero -= 3; //miNumero = miNumero -5
	printf("\nValor miNumero: %d", miNumero);
	
	//Operador *= (Operador compuesto)
	miNumero *= 2; //miNumero = miNumero *5
	printf("\nValor miNumero: %d", miNumero);
	
	//Operador /= (Operador compuesto)
	miNumero /= 7; //miNumero = miNumero /5
	printf("\nValor miNumero: %d", miNumero);
	
	//Operador %= (Operador compuesto)
	miNumero %= 2; //miNumero = miNumero %5
	printf("\nValor miNumero: %d", miNumero);
	
	return 0;
}

