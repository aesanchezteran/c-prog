/*
* Solución Taller #2 Programación C++
*
* Alberto Sánchez
*
* 24 marzo 2025
*
*/

#include <iostream>
#include <math.h>

using namespace std;

int menu_principal(void);

int main(){
    int opcion;

    opcion = menu_principal();
    cout << "su seleccion es: " << opcion << endl;

    return 0;

}


int menu_principal(){
    int opcion;
    int return_val;

    cout << " Solución Taller #2 Programación C++ " << endl;
    cout << endl;
    cout << " Alberto Sánchez, marzo 2025 " << endl;
    cout << endl;
    cout << "Escoja que ejercicio desea ejecutar " << endl;
    cout << " 1. Regresión Lineal " << endl;
    cout << " 2. Newton - Raphson " << endl;
    cout << " 3. Descomposición LU " << endl;
    cout << " 4. Inversa de matriz con LU " << endl;
    cout << " 5. Salir " << endl;
    cout << " Su selección es: ";
    cin >> opcion;
    cout << endl;

   if((opcion>5) | (opcion < 1)){
    return_val = 0;
   } else{
    return_val = opcion;
   }

}