#include <stdio.h>

int main(void){
    int N[20];
    int temp;

    for(int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    for(int i = 0; i < 10; i++){
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    
    for(int i = 0; i < 20;i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
