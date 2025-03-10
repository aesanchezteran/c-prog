/*
 Ejemplo para calcular la derivada numéricamente de una función
 matemática

 Alberto Sánchez, 2025

*/

#include <iostream>
using namespace std;

float funcion(float x); // Prototipo de la funcion
float derivada(float x1, float x2, float h);

int main(){
    float y;
    float dy[10000];
    float x[10000];
    float xo;
    float xf;
    float h;
    int i = 1;
    int exit = 1;

    cout << " ****************************************** " << endl;
    cout << " Función para el cálculo de la derivada " << endl;
    cout << " ****************************************** " << endl;
    cout << " Alberto Sánchez, 2025 " << endl;
    cout <<"" <<endl;

    while(exit){

        cout << "Ingrese el valor donde quiere la derivada: ";
        cin >> xf;
        cout << endl;

        cout << "Ingrese el valor de h: ";
        cin >> h;
        cout << endl;
    
        x[0] = 0;

        while((x[i] <= xf) && (i <= 9999)){
            x[i] = xo+h*i;
            dy[i] = derivada(x[i],x[i-1],h);
            i++;
        }

        cout << "La derivada en x= " << xf << " es " << dy[i] << endl;
        cout << endl;
        cout << " Presione 0 para salir  ";
        cin >> exit;
        cout << endl;
    }

    cout << " ****************************************** " << endl;
    cout << " Muchas gracias! " << endl;
    cout << " ****************************************** " << endl;
    cout <<"" <<endl;
}

// Implementación de funciones
float funcion(float x){
    return (x-1)*(x+1);
}

float derivada(float x1, float x2, float h){
    return (funcion(x1) - funcion(x2))/h;
}