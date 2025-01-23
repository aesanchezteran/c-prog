/*
Alberto
20 enero 2025

Este ejemplo muestra como trabajar con numeros con
decimales del tipo float (32 bits).
*/

#include <stdio.h>

void main(){
    float numero1 = -345;
    float numero2;
    float resultado;
    
    printf("Por favor ingresa dos numeros enteros separados por un espacio\n");
    scanf("%f %f",&numero1,&numero2);
    resultado = numero1 + numero2;
    printf("Este es el resultado %f\n",resultado);
}