#include <iostream>
using namespace std;
int main(){
    int i,j,r;
    int m,n,p,l;
    float A[10][10] = {};
    float B[10][10] = {};
    float C[10][10] ={};

    cout << "Ingrese el numero de filas de A: ";
    cin >> m;
    cout << endl;

    cout << "Ingrese el numero de columnas de A: ";
    cin >> n;
    cout << endl;

    cout << "Ingrese el numero de filas de B: ";
    cin >> l;
    cout << endl;

    cout << "Ingrese el numero de columnas de A: ";
    cin >> p;
    cout << endl;

    if(n == l){
        //multiplicacion
            // Ingrese la matriz A
            for(i = 0;i<m;i++){
                for(j=0;j<n;j++){
                    cout << "Ingrese el valor de A[" << i << "][" << j << "]";
                    cin >> A[i][j];
                    cout << endl; 
                }
                cout << endl;
            }
            // Imprimir matriz en consola
            for(i = 0;i<m;i++){
                for(j=0;j<n;j++){
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
            // Ingrese la matriz B
            for(i = 0;i<l;i++){
                for(j=0;j<p;j++){
                    cout << "Ingrese el valor de B[" << i << "][" << j << "]";
                    cin >> B[i][j];
                    cout << endl; 
                }
                cout << endl;
            }

            // Multiplicación de C = A*B
            for(i=0;i<m;i++){
                for(j=0;j < p; j++){
                    for(r=0;r<n;r++){
                        C[i][j] += A[i][r]*B[r][j];
                    }
                }
            }

    // Imprimir matriz C en consola
    for(i = 0;i<m;i++){
        for(j=0;j<p;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    }else{
        //mostrar error
        cout << "el numero de filas de A no corresponde con el numero de columnas de B";
    }



    return 0;
}