/*
* Estructura if/else if/else
* 
* Esta estuctura de programación permite probar
* distintas condiciones. Una vez que una condición
* se cumple, se dejan de probar las demás.
* 
if(condicion1){
    código;
    :
}else if(condicion2){
    código;
    :
}else if(condición3){
    código;
    :    
} 

:

else{
    código;
    :
}
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