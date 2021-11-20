# include <iostream>

using namespace std;

// 平均数2
int main(){
    double a, b, c;
    int weight_a = 2, weight_b = 3, weight_c = 5;

    cin >> a >> b >> c;

    printf("MEDIA = %.1lf", (a*weight_a + b*weight_b + c*weight_c) / (weight_a + weight_b + weight_c));

    return 0;
}