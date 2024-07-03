#include <stdio.h>

int main() {
	
	//Mayor de Edad
	
	int  mayorEdad = 18;
	int edadPersona;
	printf("Proporciona tu edad: ");
	scanf("%d", &edadPersona);
	
	if(edadPersona >= mayorEdad){
		printf("La persona con edad: %d es mayor de edad", edadPersona );
	}
	else {
		printf("La persona con: %d es menor de edad", edadPersona);
	}
	
	
	return 0;
}

