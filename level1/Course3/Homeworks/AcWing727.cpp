#include <iostream>

using namespace std;

// 菱形
int main(){
    int n;

    cin >> n;

    int c_x = n / 2, c_y = n / 2;
    int dist;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dist = abs(c_x - i) + abs(c_y - j);

            if( dist <= c_x) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}