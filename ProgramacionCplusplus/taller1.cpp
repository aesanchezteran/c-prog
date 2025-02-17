#include <iostream>
using namespace std;

double sin(double x, int n){
    double res = 0;
    double nextF = 1;
    double f = 1;
    double currX = x;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            res += (currX/f);
        }
        else{
            res -= (currX/f);
        }
        currX *= x * x;
        f *= (nextF+1) * (nextF+2);
        nextF += 2;
    }
    return res;
}

int main(){
    cout << sin(6, 5) << endl;

    // for(int i = 1; i <= 10; i++){
    //     cout << sin(6, i) << endl;
    // }
    return 0;
}