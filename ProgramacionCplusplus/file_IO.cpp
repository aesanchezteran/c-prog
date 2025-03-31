/*
    Ejemplo del uso de fstream para leer y escribir en
    archivos.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string miTexto;

    // Crear el archivo
    ofstream MyFile("prueba.txt");
    // Escribo en el archivo
    MyFile << "Este es un ejemplo de escritura en un archivo \n Esta es una segunda linea \n esta es una tercera linea" << endl;
    // Cierro el achivo
    MyFile.close();

    ifstream MiArchivoLectura("prueba.txt");

    while(getline(MiArchivoLectura,miTexto)){
        cout << miTexto << endl;
    } 

    MiArchivoLectura.close();

    return 0;

}