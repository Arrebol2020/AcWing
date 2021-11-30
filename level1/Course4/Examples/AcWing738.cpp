#include <cstdio>

using namespace std;

// 数组填充
int main(){
    int v;
    int array[10];

    scanf("%d", &v);

    array[0] = v;

    for( int i = 1; i < 10; i++ ) array[i] = array[i-1] * 2;

    for( int i = 0; i < 10; i++ ) printf("N[%d] = %d\n", i, array[i]);
    
    return 0;
}

