# include <iostream>

using namespace std;

int main(){
    int mileage;
    double cost_oil;

    scanf("%d%lf", &mileage, &cost_oil);
    printf("%.3lf km/l", mileage/cost_oil);
    
    return 0;
}