# include <iostream>
# include <cmath>

using namespace std;

// 球的体积
int main(){
    int radius;
    double pi = 3.14159;

    cin >> radius;

    printf("VOLUME = %.3lf", (4/3.0)*pi*pow(radius, 3));

    return 0;
}