#include <iostream>
#include <cstdio>

using namespace std;

// 数组变化
int main(){
    int a[20];

    for(int i = 0; i < 20; i++)
        cin >> a[i];

    for(int i = 20-1, j=0; i >= 0; i--, j++)
        printf("N[%d] = %d\n", j, a[i]);
    
    return 0;
}