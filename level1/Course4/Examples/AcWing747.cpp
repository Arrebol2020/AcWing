#include <cstdio>

// 数组的左上半部分
int main(){
    double M[12][12], sum = 0;
    int cnt = 0;
    char c;

    scanf("%c", &c);

    for( int i = 0; i < 12; i++)
        for( int j = 0; j < 12; j++)
            scanf("%lf", & M[i][j]);

    for( int i = 0; i < 12; i++ )
        for( int j = 0; j < 12; j++ )
            if( i + j < 11 ){
                sum += M[i][j];
                cnt ++;
            } 
    
    if( c == 'S' ) printf("%.1lf", sum);
    else printf("%.1lf", sum / cnt);
    
    return 0;
}