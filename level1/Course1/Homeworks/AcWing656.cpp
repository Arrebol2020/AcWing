# include <iostream>

using namespace std;

// 钞票和硬币
int main(){
    double n;
    int int_n;
    
    cin >> n;

    int_n = (int)n;
    int float_n = n*100- int_n*100;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", int_n/100);
    int_n %= 100;

    printf("%d nota(s) de R$ 50.00\n", int_n/50);
    int_n %= 50;

    printf("%d nota(s) de R$ 20.00\n", int_n/20);
    int_n %= 20;

    printf("%d nota(s) de R$ 10.00\n", int_n/10);
    int_n %= 10;

    printf("%d nota(s) de R$ 5.00\n", int_n/5);
    int_n %= 5;

    printf("%d nota(s) de R$ 2.00\n", int_n/2);
    int_n %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", int_n);

    int_n = float_n;
    printf("%d moeda(s) de R$ 0.50\n", int_n/50);
    int_n %= 50;

    printf("%d moeda(s) de R$ 0.25\n", int_n/25);
    int_n %= 25;

    printf("%d moeda(s) de R$ 0.10\n", int_n/10);
    int_n %= 10;

    printf("%d moeda(s) de R$ 0.05\n", int_n/5);
    int_n %= 5;
    printf("%d moeda(s) de R$ 0.01\n", int_n);

    return 0;
}