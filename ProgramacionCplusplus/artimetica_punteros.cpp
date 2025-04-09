#include <iostream>
#include "stdint.h"
#include "stdio.h"
using namespace std;

int main(){
    float floatArray[10] ={0};
    uint8_t charArray[10] = {0};

    float * floatarrayPtr = &floatArray[0];
    uint8_t * chararrayPtr = &charArray[0];

    cout << "La direccion inicial de float es: " << floatarrayPtr << endl;
    floatarrayPtr++;
    cout << "La direccion final de float es: " << floatarrayPtr << endl;

    printf("La direccion inicial de char es: 0x%X \n",chararrayPtr);
    chararrayPtr++;
    printf("La direccion final de char es: 0x%X \n",chararrayPtr);
    return 0;

}

