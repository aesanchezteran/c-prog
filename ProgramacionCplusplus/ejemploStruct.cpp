#include <iostream>
using namespace std;

int main(){
    int n,i;
    char opcion;
    string nombre;

    struct calificaciones{
        string nombre[100];
        string apellido[100];
        int codigo[100];
        float programacion[100];
        float quimica[100];
    };

    calificaciones calificaciones_202420;

    cout << " Cuantos estudiantes desea almacenar? ";
    cin >> n;
    cout << endl;

    for(i=0;i<n;i++){
        cout << " Ingrese el nombre del estudiante ";
        cin >> calificaciones_202420.nombre[i];
        cout << endl;

        cout << " Ingrese el apellido del estudiante ";
        cin >> calificaciones_202420.apellido[i];
        cout << endl;

        cout << " Ingrese el codigo del estudiante ";
        cin >> calificaciones_202420.codigo[i];
        cout << endl;

        cout << " Ingrese la calificaciones de programacion ";
        cin >> calificaciones_202420.programacion[i];
        cout << endl;

        cout << " Ingrese la calificaciones de quimica ";
        cin >> calificaciones_202420.quimica[i];
        cout << endl << endl;
    }

    while(1){
        cout << " Buscar por (N)ombre " << endl;
        cout << " Buscar por (A)pellido " << endl;
        cout << " buscar por (C)odigo " << endl;
        cout << " (S)alir " << endl;
        cin >> opcion;

        if(opcion == N){
            cout << " Ingrese el nombre a buscar ";
            cin >> nombre;
            cout << endl;

            for(i=0;i<n;i++){
                if(calificaciones_202420.nombre[i] == nombre){
                    cout << " Programacion: " << calificaciones_202420.programacion[i] << endl;
                    cout << " Quimica: " << calificaciones_202420.quimica[i] << endl;
                }
            }
        } else if(opcion == S){
            return 0;
        }

    }

}