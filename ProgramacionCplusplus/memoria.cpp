#include <iostream>

using namespace std;

float suma(float a, float b);
void sum(float * a, float * b);

int main(){
    float a = 5.67;
    float b = 7.8;
    float c = 0;

    float *ptrA = &a;
    float *ptrB = &b;
    float *ptrC = &c;

    c = suma(a,b);
    sum(&a,&b);
    return 0;
}

float suma(float a, float b){
    a = b;
    return 2*a;
}
void sum(float * a, float * b){
    *a = *b * 3;
}