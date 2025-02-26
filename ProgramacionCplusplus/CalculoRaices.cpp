#include <iostream>
using namespace std;

#define MaxIter 10000

float curva(float x); // Prototipo de la funcion
float error(float x1, float x2); 

int main(){
    float xo; // valor inicial o antiguo
    float x; // valor nuevo
    float e = 1e6;
    float tol = 0;
    float convergencia[MaxIter];
    int iter = 0;

    cout << " ****************************************** " << endl;
    cout << " Algoritmo de punto fijo para el cálculo de " << endl;
    cout << " raíces de una función arbitaria " << endl;
    cout << " ****************************************** " << endl;
    cout << " Alberto Sánchez, 2025 " << endl;
    cout <<"" <<endl;
    cout << "Ingrese el valor inicial (xo): ";
    cin >> xo;
    cout << endl;

    cout << "Ingrese el valor de la tolerancia: ";
    cin >> tol;
    cout << endl;

    do{
        x += curva(xo);
        e = error(x,xo);
        convergencia[iter] = e;
        xo = x;
        iter++;
    } while( (e >= tol) & (iter <= MaxIter));

    cout << "El algoritmo ha terminado por: " << endl;
    if(iter >= MaxIter){
        cout << "Maximo número de iteraciones" << endl;
    } else {
        cout << "Convergencia del algoritmo " << endl;
        cout << "La raíz de la curva es: " << xo << endl;
        cout << "Con un error de " << e << endl;
    }
    
    return 0;
}

// implementación de la función curva
float curva(float x){
    float y = 0;
    y = (x-3)*(x-1);
    return y;
}

float error(float x1, float x2){
    float e = 0;
    // calcula el valor absoluto del error
    e = (x2 - x1)*(x2 - x1);
    return e;
}