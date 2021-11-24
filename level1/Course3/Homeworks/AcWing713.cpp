#include <iostream>

using namespace std;

// 区间2
int main(){
    int n, x;
    int in_cnt = 0, out_cnt = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;

        if( x >= 10 and x <= 20 ) in_cnt ++;
        else out_cnt ++;
    }
    
    cout << in_cnt << " in" << endl << out_cnt << " out" << endl;

    return 0;
}