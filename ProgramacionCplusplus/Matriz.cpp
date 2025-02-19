#include <iostream>
using namespace std;
int main(){
    int fila = 0;
    int columna = 0;
    int M[3][3] = {{5,4,3},{2,1,3},{1,2,3}};
    int V[3] = {};
    int R[3] = {};
    // Ingrese la matriz
    for(fila = 0;fila<3;fila++){
        for(columna=0;columna<3;columna++){
            cout << "Ingrese el valor de M[" << fila << "][" << columna << "]";
            cin >> M[fila][columna];
            cout << endl; 
        }
        cout << endl;
    }
    // Imprimir matriz en consola
    for(fila = 0;fila<3;fila++){
        for(columna=0;columna<3;columna++){
            cout << M[fila][columna] << " ";
        }
        cout << endl;
    }
    // ingresamos el vector
    for(fila = 0; fila <3; fila++){
        cout << "Ingrese el valor de V[" << fila << "] ";
        cin >> V[fila];
        cout << endl;       
    }

    // Multiplicacion de M*V
    for(fila = 0;fila<3;fila++){
        for(columna = 0;columna < 3; columna++){
            R[fila] = R[fila]+M[fila][columna]*V[columna];
        }
    }

    for(fila = 0; fila <3; fila++){
        cout << R[fila] << endl;      
    }

    return 0;
}