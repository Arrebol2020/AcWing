#include <iostream>

using namespace std;

// 完全数
int main(){
    int n;
    long long x;

    cin >> n;

    while(n--){
        cin >> x;
        int sum = 0;
        for(int i = 1; i < x; i++){
            if( x % i == 0) sum += i;
            else break;
        }
        if( sum == x ) cout << x << " is perfect" << endl;
        else cout << x << " is not perfect" << endl;
    }

    return 0;
}