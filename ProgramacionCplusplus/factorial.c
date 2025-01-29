#include <stdio.h>
int main(){
    int i = 0;
    int condicion = 1;
    int n = 0;
    long long factorial = 1;
    while(condicion != 0){
        printf("Este programa calcula el factorial de un numero\n");
        printf("Por favor ingresa el número\n");
        scanf("%d",&n);
        for(i=n;i>0;i--){
            factorial = factorial*i;
            printf("El calculo parcial es %lld\n",factorial);
        }
        printf("El valor del factorial de %d es %lld\n",n,factorial);
        printf("Escribe 1 para calcular otro valor o 0 para salir\n");
        scanf("%d",&condicion);
        factorial = 1;
    }
    return 0;
}