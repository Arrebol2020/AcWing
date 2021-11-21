#include <iostream>
#include <cstdio>

using namespace std;

// 税
int main(){
    double a;
    double tax = 0;

    cin >> a;

    if(a >= 0 and a <= 2000) cout << "Isento" << endl;
    else{
        if(a > 2000 and a <= 3000) tax = (a-2000)*0.08;
        else if(a > 3000 and a <= 4500){
            tax = (a-3000)*0.18 + 1000*0.08;
        } 
        else if(a > 4500){
            tax = (a-4500)*0.28 + 1000*0.08 + 1500*0.18;
        }
        printf("R$ %.2lf", tax);
    }

    return 0;
}