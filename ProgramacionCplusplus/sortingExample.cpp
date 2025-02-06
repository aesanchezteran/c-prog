#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int j =0;
    int temp = 0;
    int n= 0;
    int a[100];

    cout << "Ingrese cuantos elementos " << endl;
    cin >> n;

    // Ingreso los numeros en el arreglo "a"
    for(i=0;i<n;i++){
        cout << "Ingrese los valores del elemento a[" << i << "]" << endl;
        cin >> a[i];
    }

    for(j=0;j<n;j++){
        for(i=0;i<(n-1);i++){
            if(a[i] > a[i+1]){ // intercambio valores
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }


    // (FIN) Impresion de los datos organizados
    for(i=0;i<n;i++){
        cout << "Los datos organizados son: "<< endl;
        cout << "a[" << i << "] = "<< a[i] << endl;
    }
    return 0;
}