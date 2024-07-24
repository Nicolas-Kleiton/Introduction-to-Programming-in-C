#include <stdio.h>

int main(void){
    
    //primeiramente definir uma variavel com o valor 1 

    int i=1;

    /*Enquanto (while) a variavel "i" for menor ou igual a 10, o programa fara um looping e ficara printando o valor da variavel "i" e somando +1 a cada looping, se encerrando quando i chegar a 10.*/


    while (i<=10){
        printf("%d\n",i);
        i=i+1;
    }

    return 0;
}
