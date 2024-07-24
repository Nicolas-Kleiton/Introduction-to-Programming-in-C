#include <stdio.h>

int main() {
 
    int n;
    int maior,menor,flag;

    //atribuindo valor a n para que sempre execute a repetição pelo menos uma vez e uma variavel flag "temporaria" para ser utilizada na primeira repeticao do codigo
    n=-1;
    flag=1;

    //inicio da repetição
    while (n!=0){   
        printf("Insira um valor: ");
        scanf("%d",&n);
        
        //o primeiro if irá sempre executar pelo menos uma vez, apenas para definir o valor maior e menor valor
        if (flag==1){
            maior=n;
            menor=n;
            flag=0;
        }
        if (n!=0 && n>maior){
            maior=n;
        }
        if(n!=0 && n<menor){
            menor=n;
        }
    }
        printf("Maior valor: %d\nMenor valor: %d\n",maior,menor);

    return 0;
}
