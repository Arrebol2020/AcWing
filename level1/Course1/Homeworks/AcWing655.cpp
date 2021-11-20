# include <iostream>

using namespace std;

// 天数转换
int main(){
    int days;

    cin >> days;

    printf("%d ano(s)\n", days/365);
    days %= 365;

    printf("%d mes(es)\n", days/30);
    days %= 30;

    printf("%d dia(s)\n", days);

    return 0;
}