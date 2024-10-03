#include <stdio.h>

int main(void){
    
    int N;
    int cont = 0;

    scanf("%d", &N);

    int Largada[N];
    int Chegada[N];
    int posicao [N + 1];
    
    for(int i = 0; i < N; i++){
        scanf("%d", &Largada[i]);
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &Chegada[i]);
        posicao[Chegada[i]] = i;
    }

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if (posicao[Largada[i]] > posicao[Largada[j]]) {
                cont++;
            }
        }

    }

    printf("%d\n", cont);

    return 0;
}
