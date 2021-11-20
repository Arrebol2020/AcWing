#include <iostream>
#include <cstdio>

using namespace std;

// 加薪
int main(){
    double salary;

    cin >> salary;

    if(salary >= 0 and salary <= 400){
        printf("Novo salario: %.2lf\n", salary*(1+0.15));
        printf("Reajuste ganho: %.2lf\n", salary*0.15);
        printf("Em percentual: %.d %\n", 15);
    }else if(salary > 400 and salary <= 800){
        printf("Novo salario: %.2lf\n", salary*(1+0.12));
        printf("Reajuste ganho: %.2lf\n", salary*0.12);
        printf("Em percentual: %.d %\n", 12);
    }else if(salary > 800 and salary <= 1200){
        printf("Novo salario: %.2lf\n", salary*(1+0.1));
        printf("Reajuste ganho: %.2lf\n", salary*0.1);
        printf("Em percentual: %.d %\n", 10);
    }else if(salary > 1200 and salary <= 2000){
        printf("Novo salario: %.2lf\n", salary*(1+0.07));
        printf("Reajuste ganho: %.2lf\n", salary*0.07);
        printf("Em percentual: %.d %\n", 7);
    }else{
        printf("Novo salario: %.2lf\n", salary*(1+0.04));
        printf("Reajuste ganho: %.2lf\n", salary*0.04);
        printf("Em percentual: %.d %\n", 4);
    }

    return 0;
}