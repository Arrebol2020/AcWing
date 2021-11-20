# include <iostream>
# include <cmath>

using namespace std;

// 最大值
int main(){
    int a, b, c;
    int temp;
    
    cin >> a >> b >> c;

    temp = (a+b+abs(a-b))/2;  // max(a, b)
    
    temp = (temp+c+abs(temp-c))/2;  // max(temp, c)

    printf("%d eh o maior", temp);

    return 0;
}