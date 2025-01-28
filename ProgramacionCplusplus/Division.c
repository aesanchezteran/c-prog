/*Algoritmo para dividir dos enteros */
#include <stdio.h>

void main(){
    int D = 427; // Dividendo
    int N = 50; // Divisor
    int Q = 1; // Cociente
    int R = D; // Residuo
    while(R >= N){
        Q++;
        R = D - Q*N;
    }
    printf("El cociente es %d\n",Q);
    printf("El residuo es %d\n",R);
}


