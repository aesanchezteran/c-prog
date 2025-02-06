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

        /* Este primer lazo se repite n veces en caso que el menor
        de todos los numero se encuentre al final del arreglo
        ya que con cada iteración del lazo el número solo se mueve
        una posición hacia abajo. */

        for(i=0;i<(n-1);i++){
            /* Este lazo itera sobre cada elemento del 
            arreglo y compara los valores de dos en dos.
            Si identifica que el siguiente número en el arreglo
            es mayor, lo intercambia.*/

            if(a[i] > a[i+1]){ 
            /* Si encuentro un valor que es menor
            intercambio posiciones en el arreglo*/
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