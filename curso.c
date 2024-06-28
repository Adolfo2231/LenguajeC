#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
	//Operadores aritmeticos
	int a, b, c, e, f;
	float d;
	printf("valor de a: %d", a);
	
	//Suma + (literales)
	a = 3 + 4;
	printf("\nSuma: %d ", a);
	
	//Resta -
	b = 6 - 2;
	printf("\nResta: %d", b);
	
	//Multiplicacion *
	c = a * 2;
	printf("\nMultiplicacion: %d", c);
	
	//Division
	d = b / 2.5;
	printf("\nDivision: %.2f", d);
	
	//Modulo (residuo de la division)
	f = 9 % 2;
	printf("\nResiduo de division: %d", f);
	
	//Potencia
	e = pow(a,2);
	printf("\nPotencia: %d", e);
	
	return 0;
}

