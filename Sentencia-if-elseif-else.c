#include <stdio.h>

int main() {
	//Sentencia if-else
	//Verificar si un numero es positivo
	
	printf ("Proporcione un numero: \n");
	int miNumero;
	scanf("%d", &miNumero);
	
	//Verificamos si el numero es positivo
	if(miNumero > 0){
		printf("Valor Positivo: %d", miNumero);
	}
	else if(miNumero < 0){
	   printf("\nValor Negativo: %d", miNumero);
	}
	else{
		printf("Valor Cero: %d", miNumero);
	}
	
	return 0;
}
