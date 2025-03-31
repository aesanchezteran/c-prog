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

#define H 1e-6
#define TOL 1e-3
#define MAX_ITER    1e6
#define MAX_SIZE    10

using namespace std;

// protipos de funciones
int menu_principal(void);
void regresion_lineal(void);
void newton_raphson(void);
void descomposicion_lu(void);
void sistema_lineal(void);

float nr( float a, float b, float c, float xo, int opcion);

// funcion main

int main(){
    int opcion;
    int salir = 0;

    while(salir !=1){
        opcion = menu_principal();
        switch(opcion){
            case 1: 
                regresion_lineal();
                cout.flush(); // Flush the output stream
                system("clear"); // Clear the console with the "system" function
                break;
            case 2:
                newton_raphson();
                cout.flush(); // Flush the output stream
                system("clear"); // Clear the console with the "system" function
                break;
            case 3:
                descomposicion_lu();
                cout.flush(); // Flush the output stream
                system("clear"); // Clear the console with the "system" function
                break;
            case 4: 
                sistema_lineal();
                cout.flush(); // Flush the output stream
                system("clear"); // Clear the console with the "system" function
                break;
            default:
                salir = 1;
                break;
        }
    }
    return 1;
}


// Implementación de funciones

void sistema_lineal(void){
    float A[MAX_SIZE][MAX_SIZE] = {0};
    float B[MAX_SIZE] = {0};
    float L[MAX_SIZE][MAX_SIZE] = {0};
    float U[MAX_SIZE][MAX_SIZE] = {0};
    float x[MAX_SIZE] = {0};
    float xtilde[MAX_SIZE] = {0};
    float sum_lx = 0;
    float sum_ux = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int opcion = 0;

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function

    cout << " Sistema de Ecuaciones Lineales " << endl;
    cout << endl;
    cout << " Ingrese el orden del sistema: ";

    while(n <= 0){
        cin >> n;
        cout << endl;
    }

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " Ingrese el elemento A[" << i <<"][" << j << "]: ";
            cin >> A[i][j];
            cout << endl;
        }
    }

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function

    for(i=0;i<n;i++){
            cout << " Ingrese el elemento B[" << i <<"]: ";
            cin >> B[i];
            cout << endl;
    }

    cout << endl;
    cout << " el sistema a resolver es: " << endl;
    cout << endl;

    cout << fixed;
    cout.precision(2);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << A[i][j] << " x[" << (j+1) << "]";
        }
        cout << " = " << B[i];
        cout << endl;
    }

    // Descomposición LU
    for(k=0;k < (n-1);k++){
        if(A[k][k] != 0){
            for(i=k+1;i<n;i++){
                A[i][k] = A[i][k] / A[k][k];
                for(j=k+1;j<n;j++){
                    A[i][j] = A[i][j] - (A[i][k]*A[k][j]/A[k][k]);
                }
            } 
        }
    }

    // Separación de la matriz A en L y U
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( j==i ){
                L[i][j] = 1;
                U[i][j] = A[i][j];
            } else if (j < i){
                L[i][j] = A[i][j];
                U[i][j] = 0;
            } else{
                L[i][j] = 0;
                U[i][j] = A[i][j];
            }
        }
    }

    cout << endl;
    cout << " La matriz L es: " << endl;
    cout << endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << L[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << " La matriz U es: " << endl;
    cout << endl;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << U[i][j];
        }
        cout << endl;
    }

    for(i=0; i< n; i++){
        sum_lx = 0;
        for(j = 0; j <= (i-1); j++){
            sum_lx += L[i][j]*xtilde[j];
        }
        xtilde[i] = B[i] - sum_lx; 
    }

    for(i=(n-1); i >= 0; i--){
        sum_ux = 0;
        for(j = (i+1); j < n; j++){
            sum_ux += U[i][j]*x[j];
        }
        x[i] = (xtilde[i] - sum_ux) / U[i][i]; 
    }
  
    cout << endl;
    cout << " La solución del sistema lineal Ax = B es: " << endl;
    cout << endl;
    for(i=0;i<n;i++){
        cout << "x[" << (i+1) << "]= " << x[i] << endl;
    }

    cout << endl;
    cout << " Presione 1 para retornar al programa principal ";
    do{
        cin >> opcion;
    } while (opcion != 1);

}



void descomposicion_lu(void){
    float A[MAX_SIZE][MAX_SIZE] = {0};
    float L[MAX_SIZE][MAX_SIZE] = {0};
    float U[MAX_SIZE][MAX_SIZE] = {0};
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int opcion = 0;

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function

        cout << " Descomposición de una Matriz en factores LU " << endl;
        cout << endl;
        cout << " Ingrese las dimensiones de la matriz A descomponer: ";
    while(n <= 0){
        cin >> n;
        cout << endl;
    }

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function
  
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " Ingrese el elemento A[" << i <<"][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << endl;
    cout << " La matriz A ingresada es: " << endl;
    cout << endl;

    cout << fixed;
    cout.precision(2);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << A[i][j];
        }
        cout << endl;
    }

    for(k=0;k < (n-1);k++){
        if(A[k][k] != 0){
            for(i=k+1;i<n;i++){
                A[i][k] = A[i][k] / A[k][k];
                for(j=k+1;j<n;j++){
                    A[i][j] = A[i][j] - A[i][k]*A[k][j]/A[k][k];
                }
            } 
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if( j==i ){
                L[i][j] = 1;
                U[i][j] = A[i][j];
            } else if (j < i){
                L[i][j] = A[i][j];
                U[i][j] = 0;
            } else{
                L[i][j] = 0;
                U[i][j] = A[i][j];
            }
        }
    }

    cout << endl;
    cout << " La matriz A descompuesta es: " << endl;
    cout << endl;

    cout << fixed;
    cout.precision(2);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << A[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << " La matriz L es: " << endl;
    cout << endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << L[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << " La matriz U es: " << endl;
    cout << endl;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << " " << U[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << " Presione 1 para retornar al programa principal ";
    do{
        cin >> opcion;
    } while (opcion != 1);


}


void newton_raphson(void){
    int opcion = 0;
    float a = 0;
    float b = 0;
    float c = 0;
    float xo = 0;
    float raiz = 0;

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function

        cout << " Función de Cálculo de Raíces con Newton-Raphson " << endl;
        cout << endl;
        cout << " 1. Función cuadrática de la forma y = ax^2 + bx + c: " << endl;
        cout << " 2. Función periódica exponencialmente decreciente de la forma y = k1e^(alfa * x)sin(wo x): " << endl;
        cout << " 3. Salir " << endl;
        cout << endl;
        cout << " Presione su selección: ";
    while((opcion > 3) || (opcion < 1)){
        cin >> opcion;
        cout << endl;
    }

    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function
    
    if(opcion != 3){

        switch(opcion){
            case 1:
                cout << " Newton Raphson para una funcion cuadrática " << endl;
                cout << endl;
                cout << " y = ax^2 + bx + c " << endl;
                cout << " Ingrese el coeficiente a: ";
                cin >> a;
                cout << endl;
                cout << " Ingrese el coeficiente b: ";
                cin >> b;
                cout << endl;
                cout << " Ingrese el coeficiente c: ";
                cin >> c;
                cout << endl;
                cout << " Ingrese un valor inicial xo: ";
                cin >> xo;
                cout << endl;
                break;
            case 2:
                cout << " Newton Raphson para una funcion periodica exponencial " << endl;
                cout << endl;
                cout << " y = k*e^(alfa * x)*sin(wo * x) " << endl;
                cout << " Ingrese el coeficiente k: ";
                cin >> a;
                cout << endl;
                cout << " Ingrese el coeficiente alfa: ";
                cin >> b;
                cout << endl;
                cout << " Ingrese el coeficiente wo: ";
                cin >> c;
                cout << endl;
                cout << " Ingrese un valor inicial xo: ";
                cin >> xo;
                cout << endl;
                break;
            default:
                break;
        }

        raiz = nr(a,b,c,xo,opcion);
       cout << " La raiz de la funcion: ";
       switch(opcion){
            case 1:
                cout << " y = " << a << "x^2 + " << b << "x + " << "c" << " es " << endl;
                break;
            case 2:
                cout << " y = " << a << "e^(" << b << "x) sin(" << c << "x) es" << endl;
            break;
            default:
            break;
        } 
        cout << " x = " << raiz << endl;
        cout << endl;
        cout << " Presione 1 para retornar al programa principal ";
        do{
            cin >> opcion;
        } while (opcion != 1);
    }
}

// funcion para calcular Newton - Raphson de forma iterativa
float nr( float a, float b, float c, float xo, int opcion){
    float x = xo;
    float xn = 0;
    float num = 0;
    float den = 0;
    float e2 = 0; // error cuadratico
    int iter = 0;

    do{
        if(opcion == 1){ // polinomio
            num = a*x*x + b*x + c;
            den = (a*(x+H)*(x+H) + b*(x+H) + c - num)/H;
        }else if(opcion == 2){ // exponencial-sinusoide
            num = a*exp(b*x)*sin(c*x);
            den = (a*exp(b*(x+H))*sin(c*(x+H)) - num) / H;
        } else{         // ninguna
    
        }
        xn = x - num/den;  
        e2 = (xn - x)*(xn- x);
        x = xn;
        iter ++;
    } while((iter <= MAX_ITER) && (e2 >= TOL));

    return xn;
}


void regresion_lineal(void){
    float x[100] = {0};
    float y[100] = {0};
    float sum_x = 0;
    float sum_y = 0;
    float sum_xy = 0;
    float sum_x2 = 0;
    float sumx_2 = 0; // (sum x)^2
    float avg_x = 0;
    float avg_y = 0;
    float a1 = 0;
    float a0 = 0;
    int i = 0;
    int n = 0;
    int salir;

    // Limpiar el terminal
    cout.flush(); // Flush the output stream
    system("clear"); // Clear the console with the "system" function

    cout << " Función de Regresión Lineal " << endl;
    cout << endl;
    cout << " Ingrese el número de datos: ";
    cin >> n;
    cout << endl;

    for(i=0;i<n;i++){
        cout << " Ingrese el punto x[" << i <<"] y[" << i <<"]: ";
        cin >> x[i] >> y[i];
        cout << endl;
    }

    //Calculo de las sumatorias
    for(i=0;i<n;i++){
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i]*y[i];
        sum_x2 += x[i]*x[i]; 
    }

    avg_x = sum_x/n;
    avg_y = sum_y/n;
    sumx_2 = sum_x * sum_x;

    a1 = ((n * sum_xy) - (sum_x * sum_y)) / ((n * sum_x2) - sumx_2);
    a0 = avg_y - a1 * avg_x;
    
    cout << "La ecuación de la recta en esta regresión lineal es: " << endl;
    cout << endl;
    cout << "y = " << a1 << "x+" << a0 << endl;
    cout << endl;
    cout << " Presione 1 para retornar al programa principal ";
    while(salir != 1){
        cin >> salir;
    }

}


int menu_principal(void){
    int opcion;
    int return_val;

    cout << " ************************************" << endl;
    cout << " Solución Taller #2 Programación C++ " << endl;
    cout << endl;
    cout << " Alberto Sánchez, marzo 2025 " << endl;
    cout << " ************************************" << endl;
    cout << endl;
    cout << " Escoja que ejercicio desea ejecutar " << endl;
    cout << endl;
    cout << "  1. Regresión Lineal " << endl;
    cout << "  2. Newton - Raphson " << endl;
    cout << "  3. Descomposición LU " << endl;
    cout << "  4. Inversa de matriz con LU " << endl;
    cout << "  5. Salir " << endl;
    cout << endl;
    cout << " Su selección es: ";
    cin >> opcion;
    cout << endl;

   if((opcion>5) | (opcion < 1)){
    return_val = 0;
   } else{
    return_val = opcion;
   }

   return return_val;

}