# include <iostream>

using namespace std;

int main(){
    int ID, hours;
    double pay_each_hour;

    scanf("%d%d%lf", &ID, &hours, &pay_each_hour);
    printf("NUMBER = %d\n", ID);
    printf("SALARY = U$ %.2lf", hours * pay_each_hour);

    return 0;
}