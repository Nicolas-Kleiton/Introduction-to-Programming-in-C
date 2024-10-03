#include <stdio.h>
#include <stdlib.h>

void Frequencia(int arr[], int t){
    
    int freq[2001] = {0};

    for(int i = 0; i < t; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i < 2000; i++){
        if(freq[i] > 0){
            printf("%d aparece %d vez(es)\n", i, freq[i]);
        }
    }

}

int main(void){
    int N;

    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    Frequencia(arr,N);

    return 0;
}
