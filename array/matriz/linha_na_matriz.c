#include <stdio.h>

int main(void){

    int l;
    char t;
    double m[12][12], soma = 0;

    scanf("%d%*c", &l);
    scanf("%c", &t);

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    
    for (int j = 0; j < 12; j++){
        soma = soma + m[l][j];
    }

    if(t == 'S'){
        printf("%.1lf\n", soma);
    }

    if(t == 'M'){
        printf("%.1lf\n", soma / 12);
    }

    return 0;
}
