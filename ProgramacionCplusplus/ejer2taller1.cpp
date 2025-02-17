#include <iostream>

using namespace std;

int main(){

    float x = 0;
    int n = 0;
    float sinx = 0;
    float numerador = 1;
    float denominador = 1;
    int signo = 0;

    cout << "Ingresar el valor de x:" << endl;
    cin >> x;

    cout << "Ingresar el valor de n:" << endl;
    cin >> n;

    numerador = x;
    for(i=0;i<n;i++){
         numerador *= x*x;
         denominador *= denominador*i;
         if(i % 2 != 0){
            if(signo == 0){ // suma
                sinx += numerador/denominador;
                signo = 1;
            }else { // resta
                sinx -= numerador/denominador;
                signo = 0;
            }
         } 
    }



}