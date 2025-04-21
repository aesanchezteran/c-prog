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
    float * ptrDy;
    float * ptrX;
    float xo;
    float xf;
    float h;
    int i = 1;
    int n = 0;
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
    
        n = (int) xf/h;
        ptrDy = new (nothrow) float[n];
        ptrX = new (nothrow) float[n];
        if((ptrDy == null) | (ptrX == null)){
            cout << " Error de asignación de memoria ";
            return 0;  
        }

        ptrX[0] = 0;  // *ptrX = 0; 

        for(i=0;i<n;i++){
            ptrX[i] = xo+h*i;
            ptrDy[i] = derivada(ptrX[i],ptrX[i-1],h);
            i++;
        }

        cout << "La derivada en x= " << xf << " es " << ptrDy[i-1] << endl;
        cout << endl;
        cout << " Presione 0 para salir  ";
        cin >> exit;
        cout << endl;
    }

    cout << " ****************************************** " << endl;
    cout << " Muchas gracias! " << endl;
    cout << " ****************************************** " << endl;
    cout <<"" <<endl;

    delete[] ptrX;
    delete[] ptrDy;
}

// Implementación de funciones
float funcion(float x){
    return (x-1)*(x+1);
}

float derivada(float x1, float x2, float h){
    return (funcion(x1) - funcion(x2))/h;
}