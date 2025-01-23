/*
* Estructura switch/case
* 
* Permite ejecutar segmentos de código dependiendo
* de distintos valores que toma una variable
* entera.
*
* Una estructura switch/case tiene la siguiente
* forma:

    switch(variable int){
        case valor1:
            código;
            :
            break;
        case valor2:
            código;
            :
            break;
        :
        case valorn:
            código;
            :
            break;
        deafult:
            código;
            :
            código; //No hace falta un break
    }
*
 */
#include <stdio.h>
int main(){
    int numero;
    printf("Ingresa un numero:\n");
    scanf("%d",&numero);
    switch(numero){
        case 0:
            printf("Este es el numero 0\n");
            break;
        case 1:
            printf("Este es el numero 1\n");
            break;
        default:
            printf("Este numero no esta\n");
    }
}