/*
Programa para ingresar e imprimir strings
en consola.
*/

#include <stdio.h>

int main()
{
    char nombre[80];
    char apellido[80];
    
    printf("Ingresa tu nombre y apellido\n");
    scanf("%s %s",&nombre,&apellido);
    printf("Tu nombre es: %s %s\n",nombre,apellido);

    return 0;
}