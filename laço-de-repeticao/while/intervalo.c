#include <stdio.h>

int main(void){

    int a,b;
    int i,temp;

    //apenas solicitando o usuario a digitar dois numeros inteiros.
    printf("Insira um numero inteiro: ");
    scanf("%d",&a);
    printf("Insira um numero inteiro: ");
    scanf("%d",&b);

    //Caso "a" seja maior que "b" utiliza-se uma variavel temporaria para armazenar o valor de "a" e atribuir a "b", para que "b" sempre seja maior que "a" e fazer a contagem em ordem .decrescente.

    if (a>b){
        temp=a;
        a=b;
        b=temp;

    }
    //atribuindo o valor de "a" na variavel "i" e fazendo o looping de repetição que se encerrará quando "i" chegar no valor de "b".

    i=a;

    while(i<=b){
        printf("%d\n",i);
        i=i+1;
    }

    return 0;
}
