#include <iostream>

using namespace std;

// 约数
int main(){
    int n;

    cin >> n;

    for( int i = 1; i <= n; i++ ){
        if( !(n % i) ) cout << i << endl;
    }
    return 0;
}