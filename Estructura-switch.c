#include <stdio.h>

int main() {
	// Estructura switch
	int diaSemana;
	printf("Proporciona dia semana: \n");
	scanf("%d", &diaSemana);
	// En lugar de if-else, usaremos Switch
	//la condicion debe ser un NUMERO ENTERTO, no acepta flotantes
	switch (diaSemana){
	case 1:
		printf("\nLunes");
		break;//Necesario para parar el codigo en el stament 1
	case 2:
		printf("\nMartes");
		break;
	case 3:
		printf("\nMiercoles");
		break;
	case 4:
		printf("\nJueves");
		break;
	case 5:
		printf("\nViernes");
		break;
	case 6:
		printf("\nSabado");
		break;
	case 7:
		printf("\nDomingo");
		break;
	default://Sera la ultima opcion de no entrar en ninguno de los case
		printf("\nValor dia erroneo: %d", diaSemana);
	} // fin de switch
	
	return 0;	
}
