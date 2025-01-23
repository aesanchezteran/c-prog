/*
Programa para ingresar e imprimir strings
en consola.
*/

#include <stdio.h>

int main()
{
    char nombre[80]; // crea una variable que puede almacenar hasta 80 caracteres (string)
    char apellido[80];
    printf("Ingresa tu nombre y apellido\n");
    scanf("%s %s",&nombre,&apellido); // %s se usa para ingresar strings (cadena de caracteres)
    printf("Tu nombre es: %s %s\n",nombre,apellido);
    return 0;
}