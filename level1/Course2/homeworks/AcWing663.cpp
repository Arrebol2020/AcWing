#include <iostream>

using namespace std;

// 简单排序
int main(){
    double a, b, c;

    double update_a, update_b, update_c;

    cin >> a >> b >> c;

    // 排序
    if (a >= b and a >= c){
        update_a = a;
        if(b >= c){
            update_b = b;
            update_c = c;
        }else{
            update_b = c;
            update_c = b;
        }
        
    }else if(b >= a and b >= c){
        update_a = b;
        if(a >= c){
            update_b = a;
            update_c = c;
        }else{
            update_b = c;
            update_c = a;
        }
    }else{
        update_a = c;
        if(a >= b){
            update_b = a;
            update_c = b;
        }else{
            update_b = b;
            update_c = a;
        }
    }

    cout << update_c << endl << update_b << endl << update_a << endl << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;

}