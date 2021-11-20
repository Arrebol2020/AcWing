# include <iostream>

using namespace std;

// 简单计算
int main(){
    int id, count;
    double price;
    double costs;

    cin >> id >> count >> price;

    costs = count * price;

    cin >> id >> count >> price;

    costs += count * price; 

    printf("VALOR A PAGAR: R$ %.2lf", costs);

    return 0;
}