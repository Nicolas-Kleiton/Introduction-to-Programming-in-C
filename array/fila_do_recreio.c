#include <stdio.h>

int main(void){

    int N, M, temp;

    scanf("%d", &N);

    for(int k = 0; k < N; k++){
        scanf("%d", &M);
        int A[M];
        int B[M];

        int cont = 0;

        for(int i = 0; i < M; i++){
            scanf("%d", &A[i]);
            B[i] = A[i];
        
        }

        for(int i = 0; i < M; i++){
            for(int j = i + 1; j < M; j++){
                if(B[i] < B[j]){
                    temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        for(int i = 0; i < M; i++){
            if(A[i] == B[i]){
                cont++;
            }
        }
    printf("%d\n", cont); 
    
    }

    return 0;
}
