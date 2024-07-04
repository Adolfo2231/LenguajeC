#include <stdio.h>
#include <stdbool.h>
int main() {
	
	//do while se repetira mientras la expresion sea falsa, al ser verdadera
	//deja de repetirse al contrario del WHILE
	
	//do -while
	//Repetir hasta que sea un numero positivo
	int numero;
	bool condicion;//Se inicia afuera para que tenga el alcance
	do{
		printf("\nProporcine un numero positivo: ");
		scanf("%d", &numero);
		condicion = numero >= 0;
	 //Se repite mientras NO sea positivo
	} while(!condicion);
	//termina el ciclo
	
	printf("\nValor positivo proporcionado: %d", numero);
	return 0;
}

