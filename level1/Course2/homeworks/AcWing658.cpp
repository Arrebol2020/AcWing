#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

// 一元二次方程
int main(){
    double a, b, c;

    cin >> a >> b >> c;

    if(a == 0 or (b*b - 4*a*c) < 0) cout << "Impossivel calcular" << endl;
    else{
        printf("R1 = %.5f\n", (-b + sqrt(b*b-4*a*c)) / (2*a));
        printf("R2 = %.5f\n", (-b - sqrt(b*b-4*a*c)) / (2*a));
    }

    return 0;
}