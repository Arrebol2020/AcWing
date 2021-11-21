#include <iostream>

using namespace std;

// 三角形类型
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

    if(update_a >= update_b + update_c) cout << "NAO FORMA TRIANGULO" << endl;
    else{
        if(update_a*update_a == update_b*update_b + update_c*update_c) cout << "TRIANGULO RETANGULO" << endl;
        if(update_a*update_a > update_b*update_b + update_c*update_c) cout << "TRIANGULO OBTUSANGULO" << endl;
        if(update_a*update_a < update_b*update_b + update_c*update_c) cout << "TRIANGULO ACUTANGULO" << endl;
        if(update_a == update_c) cout << "TRIANGULO EQUILATERO" << endl;
        if(update_a != update_c and (update_a == update_b or update_b == update_c)) cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    return 0;
}