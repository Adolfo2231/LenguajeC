#include <stdio.h>

//Definimos la funcion sumar
int sumar(int a, int b){

    //Realizamos la suma
    int resultadoSuma = a + b;
    return resultadoSuma;//Devolvemos el valor de la variable pero podria ser los operandos en si mismos, ya no puedes agregar mas codigo por el return

}

int main (){
    //Ejercicio funcion sumar
    //Solicitamos los valores
    int argA, argB, resultado;

    printf("Proporciona el argumento A: \n");
    scanf("%d", &argA);

    printf("Proporcina el argumento B: \n");
    scanf("%d", &argB);

    //Llamamos la funcion sumar

    resultado = sumar(argA, argB);
    printf("Resultado de la suma: %d", resultado);

    return 0;
}