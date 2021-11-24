#include <iostream>

using namespace std;

// 简单斐波那契
int main(){
    int n;
    int x = 0, y = 1, tmp;

    cin >> n;

    for(int i = 0; i < n; i++){
        cout << x << " ";
        tmp = x + y;
        x = y;
        y = tmp;
    }
    
    return 0;
}