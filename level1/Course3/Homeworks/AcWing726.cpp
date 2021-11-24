#include <iostream>

using namespace std;

// 区间2
int main(){
    int n, x;
    int in_cnt = 0, out_cnt = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        bool is_prime = true;

        if( x == 2 ) cout << x << " is prime" << endl;
        else{
            for( int j = 2; j < x; j++ )
                if( x % j == 0 ){
                    is_prime = false;
                    break;
                }
            
            if( is_prime ) cout << x << " is prime" << endl;
            else cout << x << " is not prime" << endl;
        }
        
    }

    return 0;
}