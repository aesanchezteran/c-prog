#include <iostream>
using namespace std;

int main(){
    int numero = 0;

    cout << "Ingrese un número entero:";
    cin >> numero;

    cout << "El número ingresado es:" << numero++; //posincremento
    cout << "El número actual es: " << numero;

    return 0;
}