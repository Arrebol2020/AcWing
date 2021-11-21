#include <iostream>
#include <cstdio>

using namespace std;

// 平均数3
int main(){
    double a, b, c, d;
    double media;

    cin >> a >> b >> c >> d;

    media = (a*2+b*3+c*4+d*1)/(2+3+4+1);

    printf("Media: %.1lf\n", media);

    if(media >= 7) cout << "Aluno aprovado." << endl;
    else if(media <= 5) cout << "Aluno reprovado." << endl;
    else{

        cout << "Aluno em exame." << endl;
        cin >> a;
        printf("Nota do exame: %.1lf\n", a);

        media = (media + a)/2;

        if(media >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        printf("Media final: %.1lf\n", media);
    }


    return 0;
}