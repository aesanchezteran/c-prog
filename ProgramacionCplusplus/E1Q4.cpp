#include <iostream>

using namespace std;

float f(float x);

int main(){
    float xi = 0;
    float xi1 = 0;
    float condicion = 0; 
    float t = 0.00001;

    cout << "Ingresar el valor inicial de x:" << endl;
    cin >> xi;

    do {
        xi1 = xi + f(xi);
        condicion = xi1 - xi;
    } while (condicion < t);

    cout << "El valor de la raiz es: " << xi1 << endl;
    return 0;
}

float f(float x){
    return (x*x-5*x+4);
}