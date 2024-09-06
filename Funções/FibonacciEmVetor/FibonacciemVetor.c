#include <stdio.h>

/**** Fibonacci(): Calcula o enésimo número da sequência de Fibonacci
*
* Parâmetros:
* N : número inteiro que indica a posição na sequência de Fibonacci a ser calculada (onde 0 corresponde ao primeiro número da sequência).
*
* Retorno: Retorna o enésimo número de Fibonacci como um valor do tipo `unsigned long long`, que suporta números grandes.
*
* Observações:
* - A sequência de Fibonacci é definida da seguinte maneira:
*   Fib(0) = 0, Fib(1) = 1, e para n ≥ 2, Fib(n) = Fib(n-1) + Fib(n-2).
* - A função utiliza um método iterativo para calcular o valor de Fibonacci, o que a torna eficiente (complexidade O(N)).
* - Para N = 0, o retorno é 0. Para N = 1, o retorno é 1. Para N > 1, a função calcula os valores somando os dois anteriores.
* - O tipo `unsigned long long` é utilizado para lidar com os grandes números gerados pela sequência de Fibonacci em posições elevadas.
****/

unsigned long long Fibonacci(int N){
    unsigned long long a = 0, b = 1, temp;

    if (N == 0){
        return a;
    }
    for (unsigned long long i = 2; i <= N; i++){
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main(){
    int N;
    int T;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &N);

        printf("Fib(%d) = %llu\n", N, Fibonacci(N));
    }

    return 0;
}
