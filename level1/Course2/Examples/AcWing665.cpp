#include <iostream>

using namespace std;

// 倍数
int main(){
    int a, b;

    cin >> a >> b;

    if(a >= b and a % b == 0){
        cout << "Sao Multiplos" << endl;
    }
    else if (b > a and  b % a == 0){
        cout << "Sao Multiplos" << endl;
    }else{
        cout << "Nao sao Multiplos" << endl;
    }
    
    return 0;
}