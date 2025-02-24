#include <iostream>
using namespace std;
float curva(float x);
int main(){
    float w,z;
    cout << "Ingrese el valor de w: ";
    cin >> w;
    z = curva(w);
    cout << "El valor de curva(" << w << ") es " << z << endl; 
    return 0;
}

// implementación de la función curva
float curva(float x){
    float y = 0;
    y = x*x+3*x+2;
    return y;
}