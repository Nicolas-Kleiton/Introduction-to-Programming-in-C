#include <stdio.h>

int main(void){

   int arr[10]; // Determinando o tamanho do array
   int soma = 0;
   int n;

    // Usuario definir os valores:
    printf("Digite os valores do array: ");

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    
    puts("");

   // printar os valores do array em ordem crescente
    printf("Ordem Crescente: ");

    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    puts("");

    // printar os valores do array em ordem decrescente
    printf("Ordem decrescente: ");

     for (int i = 9; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    puts("");

    // Elemento na quinta posicao do array
    printf("Quinto elemento: %d \n", arr[4]);

    // printar elementos impares do array
    printf("Elementos impares: ");

    for (int i = 1; i <= 10; i++){
        if (i % 2 == 1){
            printf("%d ", arr[i]);
        }
    }

     puts("");
    
    // Soma dos valores do array

    for (int i = 0; i < 10; i++){
        soma += arr[i];

    }
    printf("Soma total: %d\n", soma);

    // Media dos valores do array
    soma = 0;

    for (int i = 0; i < 10; i++){
        soma += arr[i];
    }

    float media = soma / 10.0;

    printf("Media dos valores: %.1f\n", media);

    // Encontrar um valor especifico dentro do array
    
    printf("Informe o valor que deseja procurar no array: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++){
        if (n == arr[i]){
            printf("O numero esta no indice %d\n", i);
        } 
    }

    // Encontrar o maior valor dentro do array
    int maior = arr[0];

    for (int i = 0; i < 10; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
    }

    printf("Maior valor do array: %d\n", maior);

    return 0;
}
