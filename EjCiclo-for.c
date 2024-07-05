#include <stdio.h>

int main() {
	
	//Ejercicio imprimir los 
	int maximo = 10, minimo = -10;
	printf("Incremento de 3 en 3: \n");
	
	for(int numeroVar = 1; numeroVar <= maximo; numeroVar += 3 ){
		printf("%d ", numeroVar);
	}//El alcance de numeroVar es dentro del for luego se destruya pq es una variable local
	

	printf("\nDecremento de 3 en 3: \n");
	for(int numeroVar = 1; numeroVar >= minimo; numeroVar -= 3 ){
		printf("%d ", numeroVar);
	}
	
	
	return 0;
}

