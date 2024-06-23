#include <stdio.h>
//Definimos que nuestra constante sea PI 3.1416
#define PI 3.1416

#include<math.h>
int main() {
	// 1. Definir constantes en C (DEBEN SER MAYUSCULAS)
	const int MI_CONSTANTE = 10;
	//MI_CONSTANTE = 20;
	
	printf("Valor constante = %d", MI_CONSTANTE);
	printf("\nValor de PI = %.4f", PI);
	printf("\n Valor PI Math = %f", M_PI);//M_PI constante de la libreria math.h
	
	//Constante Segundor por minuto
	const int SEGUNDOR_POR_MINUTO = 60;
	printf("\nConstatnte SEGUNDOR_POR_MINUTO= %d", SEGUNDOR_POR_MINUTO);
	
	return 0;
}

