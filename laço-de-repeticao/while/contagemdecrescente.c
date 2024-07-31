#include <stdio.h>

int main(void){

    //primeiramente definir uma variavel com o valor 10

    int i=10;

    /*Enquanto (while) a variavel "i" for maior ou igual a 1, o programa fara um looping e ficara printando o valor da variavel "i" e subtraindo -1 a cada looping, se encerrando quando i chegar a 1.*/


    while (i>=1){
        printf("%d\n",i);
        i=i-1;
    }

    return 0;
}
