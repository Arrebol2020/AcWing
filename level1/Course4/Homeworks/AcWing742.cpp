#include <cstdio>

// 最小数和它的位置
int main(){
    int n, a[1000];
    int min = 1000, pos = -1;

    scanf("%d", &n);

    for( int i = 0; i < n; i++ )
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
            pos = i;
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Position: %d\n", pos);
    
    return 0;
}