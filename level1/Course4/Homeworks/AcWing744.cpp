#include <iostream>
#include <cstdio>

using namespace std;

// 数组的列
int main(){
    double a[12][12], s = 0;;
    int n;
    char t;

    cin >> n >> t;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin >> a[i][j];
    
    for(int i = 0; i < 12; i++)
        s += a[i][n];
    
    if(t == 'S') printf("%.1lf\n", s);
    else printf("%.1lf\n", s / 12);

    return 0;
}