#include <stdio.h>

int main(void){
    
    int n,soma;
    int qntd;
    float media; 

    //atribuindo valor as variaveis
    qntd=0; //inicia a contagem de quantas vezes a repeticao foi executada
    n=-1; //valor temporário de "n" para sempre entrar no looping
    soma=0; //soma iniciando em 0 para no final dar uma soma correta

    //Inicio da repeticao apenas se for diferente de 0 com a soma e a quantidade de vezes que a repetição executou
    while (n!=0){   
        printf("Insira um valor: ");
        scanf("%d",&n);
        soma=soma+n;
        qntd=qntd+1;
    }
    
    //colocando a quantidade -1, pois ele considera o 0 na hora da repetição.
    qntd=qntd-1;

    //se a quantidade for maior que 0, o programa calcula a media, se nao, apenas fecha
    if (qntd>0){
        media=1.0*soma/qntd;
        printf("A media dos valores informados eh: %.1f\n",media);
    }
    return 0;
}
