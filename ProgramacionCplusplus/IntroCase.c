/*
ejemplo de switch/case
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