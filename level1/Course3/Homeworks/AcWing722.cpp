#include <iostream>
#include <algorithm>

using namespace std;

// 数字序列和它的和
int main(){
    int x, y;

    while(true){
        cin >> x >> y;

        if( x <= 0 or y <= 0) break; // 任意一个数为 0 或负整数时，立即停止输入

        if( x > y ) swap(x, y);  // 保证x最小

        int sum = 0;
        for( int i = x; i <= y; i++){
            sum += i;
            cout << i << " ";
        } 

        cout << "Sum=" << sum << endl;

    }

    return 0;
}