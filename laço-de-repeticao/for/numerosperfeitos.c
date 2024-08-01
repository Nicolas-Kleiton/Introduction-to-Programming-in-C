#include <stdio.h>

int main(){
    
    int N,X,i,j;
    int soma;

    scanf("%d",&N);

    for (i = 1; i <=N; i++){
        scanf("%d",&X);

        soma=0;

        for (j = 1; j<= X / 2; j++){
            if (X % j == 0){
                soma+=j;
            }
        }

        if (soma == X){
            printf("%d eh perfeito\n", X);
        } else{
            printf("%d nao eh perfeito\n", X);
        }

    }

    return 0;
}
