#include <iostream>
#include <algorithm>

using namespace std;

// 连续奇数的和2
int main(){
    int n;
    int x, y;

    cin >> n;

    for( int i = 0; i < n; i++ ){
        cin >> x >> y;
        if(x > y) swap(x, y);
        int sum = 0;
        for( int j = x+1; j < y; j++ ){
            if( j % 2 != 0) sum += j;
        }
        cout << sum << endl;
    }
    return 0;
}