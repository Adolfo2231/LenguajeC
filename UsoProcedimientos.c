#include <stdio.h>

/* void(vacio), no devolvera ningun tipo de informacion a la funcion principal*/
/*Funcion = es una serie de pasos que estan que estan en ella al llamar la fucion se ejecutaran los pasos*/
void saludar(char mensaje[]){//parametros a seguir cadena string
    printf("Mensaje: %s\n", mensaje);
}


//funcion que devuelve un entero se llama main y no poseen ningun parametro()
int main(){
    //Ejercicio paara definir una funcion
    char argMensaje[50];
    printf("Proporciona el mensaje a mostrar: ");
    scanf("%[^\n]s", argMensaje);
    saludar(argMensaje);

    return 0;
}

//(%[^\n])Leera hasta que opriman enter la "s" de string
// argMensaje no necesita & para guardar info ya que es una arreglo