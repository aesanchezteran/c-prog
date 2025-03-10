#include <iostream>
using namespace std;

int factorial(int n); // Prototipo de la funcion

int main(){
    int n = 1;
    int y;
    int exit = 1;

    cout << " ****************************************** " << endl;
    cout << " función para el cálculo del factorial " << endl;
    cout << " ****************************************** " << endl;
    cout << " Alberto Sánchez, 2025 " << endl;
    cout <<"" <<endl;

    while(exit){
        cout << "Ingrese el valor (n): ";
        cin >> n;
        cout << endl;
    
        y = factorial(n);
    
        cout << "El factorial de " << n << " es " << y << endl;
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
int factorial(int n){
    int y = 1;
    if(n >= 1){
        y = n*factorial(n-1);
    }
    return y;
}
