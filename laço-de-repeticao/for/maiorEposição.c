#include <stdio.h>
 
int main() {
    
    int N,i;
    int maior=0, posicao=0;
    
    for (i=1;i<=5;i++){
        scanf("%d",&N);

        if (N > maior){
            maior = N;
            posicao = i;
        }

    } 

    printf("%d\n",maior);
    printf("%d\n",posicao);
 
    return 0;
}