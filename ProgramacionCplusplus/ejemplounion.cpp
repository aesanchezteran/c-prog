#include <iostream>
using namespace std;

int main(){
    union union_ejemplo{
        float dato_float;
        int dato_int;
    };

    union_ejemplo union1;

    union1.dato_float = 5.768;
    union1.dato_int = 36;
    
    return 0;


}