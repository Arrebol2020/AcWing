#include <iostream>

using namespace std;

// PUM
int main(){
    int n, m;

    cin >> n >> m;

    for(int i = 1, k = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(j == m) cout << "PUM" << endl;
            else cout << k << " ";
            k ++;
        }
    }
    return 0;
}