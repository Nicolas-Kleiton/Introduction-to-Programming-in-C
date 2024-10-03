#include <stdio.h>

int main(void){
    
    int c;
    char t;
    double m[12][12], soma = 0;

    scanf("%d%*c", &c);
    scanf("%c", &t);

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++){
        soma = soma + m[i][c];
    }

    if (t == 'S'){
        printf("%.1lf\n", soma);
    }

    if (t == 'M'){
        printf("%.1lf\n", soma / 12);
    }

    return 0;
}
