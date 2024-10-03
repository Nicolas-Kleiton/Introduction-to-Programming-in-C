#include <stdio.h>

int main(void){
    
    int N, M;

    scanf("%d %d", &N, &M);

    int m[N][M];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 1; i < N - 1; i++){
        for (int j = 1; j < M - 1; j++){
            if(m[i][j] == 42){
                if(m[i-1][j] == 7 && m[i+1][j] == 7 && m[i][j-1] == 7 && m[i][j+1] == 7 && m[i-1][j-1] == 7 && m[i-1][j+1] == 7 && m[i+1][j-1] == 7 && m[i+1][j+1] == 7){
                    printf("%d %d\n", i + 1,j + 1);
                     return 0;
            }                
            }
            
        }
    }

    printf("0 0\n");

    return 0;
}
