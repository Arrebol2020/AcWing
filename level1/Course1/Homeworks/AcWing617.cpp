# include <iostream>

using namespace std;

// 距离
int main(){
    int car1 = 60, car2 = 90;
    long long int L, minutes;

    cin >> L;

    minutes = L*60/(car2-car1);

    printf("%lld minutos", minutes);

    return 0;
}