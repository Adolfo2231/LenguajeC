#include <stdio.h>
#include<stdbool.h>

int main(){
	
	//1. Declarara variable
	//En c es neccesario definir una variable para poder usarla
	//Como buscar direccion de memoria %p(&miNumero)
	int miNumero = 10;
	printf("Imprimir el valor de la variable: %d", miNumero);
	printf("\nImprimir la direccion de memoria: %p", &miNumero);
	

		
		// 2. Solicitamos al usuario que proporcione un valor
		printf("\nProporciona un numero: \n");
		// 3. Leemos la informacion y la asignamos a la variable
		scanf("%d", &miNumero);
		// 4. Mandamos a imprimir
		printf("\nEl numero proporcionado es: %d", miNumero);
		printf("\nImprimir la dirrecion de memoria: %p", &miNumero);
	
	
	
		return 0;
}
	
	
