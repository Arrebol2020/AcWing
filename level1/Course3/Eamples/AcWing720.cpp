#include <iostream>

using namespace std;

// 连续整数相加
int main(){
    int a, n;
    int sum = 0;

    cin >> a;

    while(cin >> n and n <= 0);  // 一直读取，知道读到正整数

    for(int i = a, j = 1; j <= n; i++, j++) sum += i;

    cout << sum << endl;

    return 0;
}