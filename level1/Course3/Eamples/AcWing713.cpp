#include <iostream>
#include <algorithm>

using namespace std;

// 连续奇数的和1
int main(){
    int x, y;
    int sum = 0;

    cin >> x >> y;

    if( x > y) swap(x, y);

    for(int i = x+1; i < y; i++){
        if( i % 2 != 0 ) sum += i;
    }

    cout << sum << endl;

    return 0;
}