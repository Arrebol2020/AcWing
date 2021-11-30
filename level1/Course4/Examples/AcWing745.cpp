#include <cstdio>

using namespace std;

// 数组的右上半部分
int main(){
    double M[12][12], sum = 0;
    char c;
    int cnt = 0;

    scanf("%c", &c);

    for( int i = 0; i < 12; i++ )
        for( int j = 0; j < 12; j++ )
            scanf("%lf", &M[i][j]);
    
    for( int i = 0; i < 12; i++ )
        for( int j = 0; j < 12; j ++)
            if( j > i ){
                sum += M[i][j];
                cnt ++;
            }
    
    if( c == 'S' ) printf("%.1lf", sum);
    else printf("%.1lf", sum / cnt);

    return 0;
}