#include <iostream>
#include <cstdio>

using namespace std;

// 数组替换
int main(){
    int array[10];

    for( int i = 0; i < 10; i++ ){
        cin >> array[i];
        if( array[i] <= 0) array[i] = 1;
    }

    for(int i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, array[i]);
    }

    return 0;
}