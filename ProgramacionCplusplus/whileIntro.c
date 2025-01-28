/*
Lazos while
*/

#include <stdio.h>
void main(){
    int loop = 0;
    while(loop <= 11){
        printf("%d\n",loop);
        loop++; //loop = loop + 1
    }
    printf("Lazo while finito terminado\n");
    printf("Entrando a lazo infinito\n");
    while(1){
        printf("%d\n",loop);
        loop++; //loop = loop + 1
    }
    printf("Lazo while infinito terminado\n");
}