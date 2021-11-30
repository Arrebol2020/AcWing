#include <cstdio>

// 数组的上方区域
int main(){
    double a[12][12], sum = 0;
    char t;
    int cnt;

    scanf("%c", &t);

    for( int i = 0; i < 12; i++ )
        for( int j = 0; j < 12; j++)
            scanf("%lf", &a[i][j]);
    
    for( int i = 0; i < 12; i++ )
        for( int j = i+1; j < 11-i; j++){
            sum += a[i][j];
            cnt ++;
        }

    if( t == 'S' ) printf("%.1lf", sum);
    else printf("%.1lf", sum / cnt);
    
    return 0;
}