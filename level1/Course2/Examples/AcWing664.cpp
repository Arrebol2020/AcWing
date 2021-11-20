#include <iostream>
#include <cstdio>

using namespace std;

// 三角形
int main(){
    double a, b, c;

    cin >> a >> b >> c;

    if(a + b > c and a + c > b and b + c > a) printf("Perimetro = %.1lf", a+b+c);
    else printf("Area = %.1lf", (a+b)*c/2);
    
    return 0;
}