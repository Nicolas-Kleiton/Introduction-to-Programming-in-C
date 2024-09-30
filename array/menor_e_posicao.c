#include <stdio.h>

void MenorPosicao(int arr[], int t){

    int menor = arr[0];
    int posicao;

    for(int i = 0; i < t; i++){
        if (arr[i] < menor){
            menor = arr[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
}

int main(void){
    
    int N;

    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    MenorPosicao(arr, N);

    return 0;
}
