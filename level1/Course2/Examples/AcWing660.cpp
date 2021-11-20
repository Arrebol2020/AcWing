#include <iostream>
#include <cstdio>

using namespace std;

// 零食
int main(){
    int id, num;

    cin >> id >> num;

    if(id == 1) printf("Total: R$ %.2lf", 4.00*num);
    else if(id == 2) printf("Total: R$ %.2lf", 4.50*num);
    else if(id == 3) printf("Total: R$ %.2lf", 5.00*num);
    else if(id == 4) printf("Total: R$ %.2lf", 2.00*num);
    else printf("Total: R$ %.2lf", 1.50*num);

    return 0;
}