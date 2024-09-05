#include <stdio.h>

unsigned long long Fatorial(int n){
    unsigned long long fatorial = 1;
   
    for(int i = 1; i <= n; i++){
        fatorial *= i;

    }
    return fatorial;
}

int main(){
    
    int M, N;

    while(scanf("%d %d", &M,&N) != EOF){
        
        unsigned long long fatorial1 = Fatorial(M);
        unsigned long long fatorial2 = Fatorial(N);
        
        printf("%llu\n", fatorial1 + fatorial2);
    }

    return 0;
}
