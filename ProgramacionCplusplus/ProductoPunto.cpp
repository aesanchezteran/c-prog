#include <iostream>
using namespace std;

int main(){
    int i = 0;
    float A[3] = {0,0,0};
    float B[3] = {0,0,0};
    float resultado = 0;
    cout << " Programa para calcular el producto punto de dos vectores " << endl;
    // Ingresamos los valores del vector A
    for(i = 0;i<3;i++){
        cout << "Ingrese el valor de A[" << i << "] = " << endl;
        cin >> A[i];
    }
    // Ingresamos los valores del vector B
    for(i = 0;i<3;i++){
        cout << "Ingrese el valor de B[" << i << "] = " << endl;
        cin >> B[i];
    }
    for(i=0;i<3;i++){
        resultado = resultado + A[i]*B[i];
    }
    cout << "El resultado de A*B es :" << resultado <<endl;
    return 0;
}