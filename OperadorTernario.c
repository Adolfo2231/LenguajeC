#include <stdio.h>

int main() {
	//Sentencia if-else
	//Verificar si un numero es positivo
	
	printf ("Proporcione un numero: \n");
	int miNumero;
	scanf("%d", &miNumero);
	
	//Verificamos si el numero es positivo
/*	if(miNumero > 0){*/
/*		printf("Valor Positivo: %d", miNumero);*/
/*	}*/
/*	else{*/
/*		printf("Valor Cero: %d", miNumero);*/
/*	}*/
	
	//Operador ternario
	//(expresion) ? "verdadero" : "falso";
	(miNumero > 0) ? printf("Valor Positivo") : printf("Valor negativo o cero");
	
	return 0;
}
