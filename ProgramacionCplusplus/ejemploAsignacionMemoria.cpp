#include <iostream>
using namespace std;

int main(){
    float * ptrDato;
    int i, n;

    cout <<"Ingrese el numero de datos: ";
    cin >> n;
    cout << endl;

    ptrDato = new (nothrow) float[n];
    if(ptrDato == null){
        cout << " No existe suficiente memoria " << endl;
        return 0;
    }

    for(i=0;i<n;i++){
        cout << "Ingrese el dato " << i << " ";
        cin >> *ptrDato;
        ptrDato++;
    }

    for(i=n-1;i>=0;i--){
        ptrDato--;
        cout << "El dato " << i << " es " << *ptrDato <<endl; 
    }

    delete[] ptrDato;
    return 0;
}