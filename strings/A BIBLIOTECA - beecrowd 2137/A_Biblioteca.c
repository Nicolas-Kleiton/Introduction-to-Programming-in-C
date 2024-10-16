#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    
    char livros[100][5], aux[5];
    int N, troca;

    while(scanf("%d", &N) != EOF){
        
        for(int i = 0; i < N; i++){
            scanf("%s", livros[i]);
        }

        troca = 1;
        while(troca){
            troca = 0;
            for(int i = 0; i < N - i - 1; i++){
                if(atoi(livros[i]) > atoi(livros[i + 1])){
                    strcpy(aux, livros[i]);
                    strcpy(livros[i], livros[i+1]);
                    strcpy(livros[i+1], aux);
                    troca = 1;
                }
            }
        }

        for(int i = 0; i < N; i++){
            printf("%s\n", livros[i]);
        }
    }

    return 0;
}