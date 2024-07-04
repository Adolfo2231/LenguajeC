#include <stdio.h>
#include <stdbool.h>
int main() {
	
	int contador =0, repeticiones = 5;
	
	//Ciclo while(mientra)
	while (contador < repeticiones){
		printf("\nBuenos dias... %d\n", contador);
		contador++;
		
		bool condicion = contador < repeticiones;
		printf("%d < %d -> %d\n", contador, repeticiones, condicion);
	}
	printf("Ya estamos fuera del ciclo while");
	
	return 0;
}

