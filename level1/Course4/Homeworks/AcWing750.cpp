#include <cstdio>

// 数组的下方区域
int main(){
    double a[12][12], sum = 0;
    char type;
    int n = 0;

    scanf("%c", & type);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%lf", &a[i][j]);
    
    for(int i = 0; i < 12; i++)
        for(int j = 12-i; j < 12; j++){
            sum += a[j][i];
            n ++;
        }
    
    if('S' == type) printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / n);
    
    return 0;
}