#include <iostream>

using namespace std;

// 六个奇数
int main(){
    int x;
    
    cin >> x;

    for(int i = x, count=0; count < 6; x++){
        if( x % 2 != 0){
            cout << x << endl;
            count ++;
        }
    }

    return 0;
}