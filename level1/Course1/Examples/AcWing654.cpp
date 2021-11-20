# include <iostream>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    int hours, minutes, seconds;

    hours = n / 3600;  // 计算小时
    n %= 3600;

    minutes = n / 60;  // 计算分钟
    n %= 60;

    seconds = n;  // 秒

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}