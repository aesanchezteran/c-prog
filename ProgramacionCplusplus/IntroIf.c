/*
Este es un programa de prueba de la estructura if/else
*/

#include <stdio.h>

int main(){

    int var1 = 0;
    printf("Ingresa un número entero:");
    scanf("%d",&var1);
    if(var1 >= 0){
        printf("El número %d es positivo",var1);
    }else{
        printf("El número %d es negativo",var1);
    }
    return 0;
}