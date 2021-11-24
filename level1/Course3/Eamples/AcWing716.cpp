#include <iostream>

using namespace std;

// 最大数和它的位置
int main(){
    int x, i = 1;
    int max = 0, pos;

    while(cin >> x){
        if( x > max){
            max = x;
            pos = i;
        }
        i ++;
    }
    
    cout << max << endl << pos << endl;
    
    return 0;
}