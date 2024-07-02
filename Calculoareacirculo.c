#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main() {
	
	//Calculo  el area y perimetro de un circulo
	
	int radio, areaCirculo, perimetroCirculo;
	
	printf("Proporciona el radio del circulo: ");
	scanf("%d", &radio);
	
	areaCirculo = PI * (pow(radio,2));
	perimetroCirculo = 2 * PI * radio;
	
	printf("\nArea del circulo: %.2d", areaCirculo);
	printf("\nPerimetro del circulo: %.2d", perimetroCirculo);
	
	return 0;
}

