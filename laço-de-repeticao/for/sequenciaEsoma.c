#include <stdio.h>
 
int main() {
    
    int N,M;
    int i;

    while(1){

        scanf("%d%d",&N,&M);
        
        if (M <= 0 || N <= 0){
            break;
        }

        int min = M < N ? M : N;
        int max = M > N ? M : N;

        int sum = 0;

        for (i = min; i <= max;i++){
            printf("%d ",i);
            sum += i;
        }
        printf("sum=%d\n", sum);
    }
    
    return 0;
}