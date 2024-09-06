#include <stdio.h>
#include <math.h>

/**** EhPrimo(): Verifica se um número inteiro é primo
*
* Parâmetros:
* X : número inteiro a ser verificado se é primo
*
* Retorno: Retorna uma string:
* - "Prime" se o número for primo.
* - "Not Prime" se o número não for primo.
*
* Observações:
* - Um número é considerado primo se for divisível apenas por 1 e por ele mesmo.
* - O loop verifica divisores potenciais de 2 até a raiz quadrada de X, pois se um número tem divisores, pelo menos um deles será menor ou igual à raiz de X.
* - A função assume que X > 1, pois não lida com o caso de números menores ou iguais a 1.
* - Se encontrar algum divisor dentro do loop, retorna "Not Prime", indicando que o número não é primo.
****/

const char* EhPrimo (int X) {
    for (int i = 2; i <= sqrt(X); i++){
        if (X % i == 0){
            return "Not Prime";
        }
    } 
    return "Prime";
}

int main(){
    
    int N, X;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &X);

        printf("%s\n", EhPrimo(X));
    }

    return 0;
}
