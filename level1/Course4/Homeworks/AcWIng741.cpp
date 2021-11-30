#include <cstdio>

// 斐波那契数列
int main(){
    int n, v;
    long a[60] = {0};

    a[1] = 1;  // 赋初值

    for( int i = 2; i < 60; i++ )
        a[i] = a[i-1] + a[i-2];
    
    scanf("%d", &n);
    for( int i = 0; i < n; i++ ){
        scanf("%d", &v);
        printf("Fib(%d) = %ld\n", v, a[v]);
    }

    return 0;
}