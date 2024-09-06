#include <stdio.h>

/**** Fatorial(): Calcula o fatorial de um número inteiro positivo
*
* Parâmetros:
* n: número inteiro para o qual será calculado o fatorial
*
* Retorno: Retorna o valor do fatorial de 'n' como um número inteiro sem sinal de 64 bits (`unsigned long long`).
*
* Observações:
* - O fatorial de um número é o produto de todos os inteiros de 1 até 'n' (n! = 1 * 2 * 3 * ... * n).
* - A função retorna 1 para n = 0, pois 0! = 1 por definição.
* - Devido ao rápido crescimento do fatorial, a função utiliza `unsigned long long` para permitir armazenar números grandes.
****/

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
