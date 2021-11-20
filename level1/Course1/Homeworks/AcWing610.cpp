# include <iostream>
# include <string>

using namespace std;

// 工资和奖金
int main(){
    string name;
    double base_salary, sale, rate=0.15;

    getline(cin, name);

    scanf("%lf%lf", &base_salary, &sale);
    
    printf("TOTAL = R$ %.2lf", base_salary + sale*rate);
    
    return 0;
}