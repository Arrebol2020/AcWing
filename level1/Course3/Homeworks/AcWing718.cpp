#include <iostream>
#include <cstdio>

using namespace std;

// 实验
int main(){
    int n, cnt;
    int c_cnt = 0, r_cnt = 0, f_cnt = 0;
    char type;

    cin >> n;

    for( int i = 0; i < n; i++ ){
        cin >> cnt >> type;
        if( type == 'C' ) c_cnt += cnt;
        else if( type == 'R') r_cnt += cnt;
        else f_cnt += cnt;
    }

    printf("Total: %d animals\n", c_cnt + r_cnt + f_cnt);
    printf("Total coneys: %d\n", c_cnt);
    printf("Total rats: %d\n", r_cnt);
    printf("Total frogs: %d\n", f_cnt);
    printf("Percentage of coneys: %.2lf %%\n", c_cnt*100.0/(c_cnt+r_cnt+f_cnt));
    printf("Percentage of rats: %.2lf %%\n", r_cnt*100.0/(c_cnt+r_cnt+f_cnt));
    printf("Percentage of frogs: %.2lf %%\n", f_cnt*100.0/(c_cnt+r_cnt+f_cnt));

    return 0;
}