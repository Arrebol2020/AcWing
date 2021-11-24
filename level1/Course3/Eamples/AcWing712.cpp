#include <iostream>

using namespace std;

// 正数
int main(){
    int count = 0;
    double x;

    while( cin >> x ){
        if( x > 0) count++;
    }
    
    cout << count << " positive numbers" << endl;

    return 0;
}