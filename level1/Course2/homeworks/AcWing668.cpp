#include <iostream>
#include <cstdio>

using namespace std;

// 游戏时间2
int main(){
    int a, b, c, d;
    int hours, minutes;

    cin >> a >> b >> c >> d;
    if(a == c and b == d){
        hours = 24;
        minutes = 0;
    }else{
        if (b > d){
            c -= 1;  // 需要借一个小时
            d += 60;  // d 增加60
        }
        minutes = d - b;  // 计算分钟
    
        if(c >= a) hours = c - a;
        else hours = c + 24 - a;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hours, minutes);

    return 0;
}