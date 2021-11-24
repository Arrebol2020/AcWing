#include <iostream>

using namespace std;

// 奇数
int main(){
    int x;

    cin >> x;

    for(int i = 1; i <= x; i += 2)
        cout << i << endl;
    return 0;
}