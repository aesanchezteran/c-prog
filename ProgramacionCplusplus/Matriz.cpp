#include <iostream>
using namespace std;
int main(){
    int i,j,r;
    int A[3][3] = {};
    int B[3][3] = {};
    int C[3][3] ={};

    // Ingrese la matriz A
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            cout << "Ingrese el valor de A[" << i << "][" << j << "]";
            cin >> A[i][j];
            cout << endl; 
        }
        cout << endl;
    }
    // Imprimir matriz en consola
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // Ingrese la matriz B
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            cout << "Ingrese el valor de B[" << i << "][" << j << "]";
            cin >> B[i][j];
            cout << endl; 
        }
        cout << endl;
    }

    // Multiplicación de C = A*B
    for(i=0;i<3;i++){
        for(j=0;j < 3; j++){
            for(r=0;r<3;r++){
                C[i][j] += A[i][r]*B[r][j];
            }
        }
    }

    // Imprimir matriz C en consola
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}