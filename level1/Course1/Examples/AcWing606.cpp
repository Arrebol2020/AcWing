# include <iostream>

using namespace std;

int main(){
    double a, b;
    double weight_a = 3.5, weight_b = 7.5;

    scanf("%lf%lf", &a, &b);
    printf("MEDIA = %.5lf", (a*weight_a + b*weight_b) / (weight_a+weight_b));
    return 0;
}