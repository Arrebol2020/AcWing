# include <iostream>

using namespace std;

// 燃料消耗
int main(){
    long long int hour, speed;

    cin >> hour >> speed;

    long long int s = hour * speed;

    printf("%.3lf", (double)s / 12.0);

    return 0;
}