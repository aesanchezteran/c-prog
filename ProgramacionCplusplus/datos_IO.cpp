/*
    Ejemplo del uso de fstream para leer y escribir en
    archivos.
*/

#include <iostream>
#include <fstream>

using namespace std;

float array_min(float a[], int n);
float array_max(float a[], int n);

int main(){
    float datos[100];
    float minimo = 0;
    float maximo = 0;
    float rango = 0;
    float intervalo = 0;
    string datos_char;
    int i = 0;
    int n = 0;
    int bin[10]={0};
    ifstream readFile;
    readFile.open("datos.txt");

    while((!readFile.eof()) && (i < 100)){  // eof - end of file
        readFile >> datos[i];
        cout << datos[i] << endl;
        i++;
    }
    readFile.close();

    minimo = array_min(datos,i);
    maximo = array_max(datos,i);
    rango = maximo - minimo;
    intervalo = rango / 10;
    n = i;
    for(i = 0; i <n;i++){
        if((datos[i]>= minimo) && (datos[i]< (minimo+intervalo))){
            bin[0]++;
        }else if((datos[i]>= (minimo+intervalo)) && (datos[i]<= (minimo+2*intervalo))){
            bin[1]++;
        }else if((datos[i]>= (minimo+2*intervalo)) && (datos[i]<= (minimo+3*intervalo))){
            bin[2]++;
        }else if((datos[i]>= (minimo+3*intervalo)) && (datos[i]<= (minimo+4*intervalo))){
            bin[3]++;
        }else if((datos[i]>= (minimo+4*intervalo)) && (datos[i]<= (minimo+5*intervalo))){
            bin[4]++;
        }else if((datos[i]>= (minimo+5*intervalo)) && (datos[i]<= (minimo+6*intervalo))){
            bin[5]++;
        }else if((datos[i]>= (minimo+6*intervalo)) && (datos[i]<= (minimo+7*intervalo))){
            bin[6]++;
        }else if((datos[i]>= (minimo+7*intervalo)) && (datos[i]<= (minimo+8*intervalo))){
            bin[7]++;
        }else if((datos[i]>= (minimo+8*intervalo)) && (datos[i]<= (minimo+9*intervalo))){
            bin[8]++;
        }else if((datos[i]>= (minimo+9*intervalo)) && (datos[i]<= (minimo+10*intervalo))){
            bin[9]++;
        }
    }

    for(i=0;i<10;i++){
        cout << bin[i] << endl;
    }

    return 0;

}

float array_min(float a[], int n){
    float minimo = a[0];
    int i = 0;
    for(i=1;i<n;i++){
        if(a[i] < minimo){
            minimo = a[i];
        }
    }
    return minimo;
}
float array_max(float a[], int n){
    float maximo = a[0];
    int i = 0;
    for(i=1;i<n;i++){
        if(a[i] > maximo){
            maximo = a[i];
        }
    }
    return maximo;
}