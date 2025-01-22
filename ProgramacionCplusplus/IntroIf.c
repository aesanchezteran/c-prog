/*
Este es un programa de prueba de la estructura if/else
*/

#include <stdio.h>

int main(){

    int var1 = 0;
    printf("Ingresa un número entero:\n");
    scanf("%d",&var1);
    if(var1 < -100){
        printf("El número %d es menor que -100\n",var1);
    }else if ((var1 >-100) & (var1<100)){
        printf("El número %d está entre -100 y 100\n",var1);
    }else{
        printf("El número %d es mayor o igual que 100\n",var1);
    }
    return 0;
}