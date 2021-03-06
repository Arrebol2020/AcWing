# include <iostream>
# include <cmath>

using namespace std;

// 面积
int main(){
    double a, b, c;
    double pi = 3.14159;

    cin >> a >> b >> c;
    
    printf("TRIANGULO: %.3lf\n", (a * c)/2.0);
    printf("CIRCULO: %.3lf\n", pi*pow(c, 2));
    printf("TRAPEZIO: %.3lf\n", (a + b) * c/2.0);
    printf("QUADRADO: %.3lf\n", pow(b, 2));
    printf("RETANGULO: %.3lf\n", a * b);

    return 0;
}