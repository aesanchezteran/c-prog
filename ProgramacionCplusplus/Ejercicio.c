/*
Ejercicio en clase - Estructuras if/else y switch/case

1. Escribir un programa en el que el usuario
ingrese un número entre 1 y 10

2. Si el numero no está entre 1 y 10 el programa
debe mostrar en consola este error.

3. -Si el numero es 1 entonces imprimir el numero 10
   -Si el numero es 5 entonces imprimir el numero 5
   - Si no es ninguno imprimir NINGUNO

*/

#include <stdio.h>

int main(){
    int numero = 0;

    printf("Ingrese un numero entre 1 y 10\n");
    scanf("%d",&numero);

    if((numero>0) &(numero <11)){
        switch(numero){
            case 1:
                printf("El numero es 10\n");
                break;
            case 5:
                printf("El numero es 5\n");
            default:
                printf("NINGUNO\n");
        }
    }else{
        printf("El numero no está entre 1 y 10\n");
    }
}