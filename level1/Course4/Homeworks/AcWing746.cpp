#include <cstdio>

// 数组的左下半部分
int main(){
    double s, a[12][12];
    char t;
    int c = 0;

    scanf("%c", &t);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%lf", &a[i][j]);
    
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < i-1; j++){
            s += a[i][j];
            c ++;
        }      
    
    if('S' == t) printf("%.1lf\n", s);
    else printf("%.1lf\n", s / c);

    return 0;
}