#include <iostream>
#include <cstdio>

using namespace std;

// 数组中的行
int main(){
    int L;
    double M[12][12], sum = 0;
    char c;

    cin >> L >> c;

    for( int i = 0; i < 12; i++ )
        for( int j = 0; j <  12; j++ )
            cin >> M[i][j];
    
    for( int i = 0; i < 12; i++ )
        sum += M[L][i];
    
    if( c == 'S' ) printf("%.1lf", sum);
    else printf("%.1lf", sum / 12);

    return 0;
}