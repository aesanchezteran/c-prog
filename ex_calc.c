/*Calculo de e^x con una serie */
#include <stdio.h>
int main(){
    double x = 0;
    int n = 1;
    int i =0;
    double ex = 1;
    double num = 1;
    double den = 1;
    printf("Ingrese el valor de x:\n");
    scanf("%lf",&x);
    printf("Cuanto términos quiere usar?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num = num*x;
        den = den*i;
        ex = ex + num/den;
    }
    printf("El valor de e^x es %lf\n",ex);
    return 0;
}