#include <stdio.h>

//EXERCICIO 3 
float MediaArray(int arr[], int t){

    int soma = 0;

    for(int i = 0; i < t; i++){
        soma += arr[i];
    }

    return (float) soma / t; // Float para que a media seja calculada corretamente
}

//EXERCICIO 4
int EmArray (int arr[], int t, int n){

    for (int i = 0; i < t; i++){
        if (arr[i] == n){
            return 1; //  Se o elemento procurado for encontrado no array
        }
    }
    return 0; // Se o elemento procurado não for encontrado no array
}

//EXERCICIO 5
int MaximoValorArray(int arr[], int t){

    int maximo = arr[0]; 

    for(int i = 1; i < t; i++){
        if (arr[i] > maximo){
            maximo = arr[i];
        }    
    }
    return maximo;
}

//EXERCICIO 6
int EhArrayOrdenado (int arr[], int t){

    for(int i = 1; i < t; i++){
        if(arr[i] < arr[i-1]){
            return 0; // Retorna 0 se nao estiver ordenado
        }
    }   

    return 1; // Returna 1 se estiver tudo ordenado

}

int main(){
    
    int arr[10], n;
    int soma = 0;

    /* Codigo abaixo se refere ao EXERCICIO 1 sem a parte modificada (exercicio 2)
    for (int i = 0; i < 10; i++){
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    */
    
   // EXERCICIO 2 : Usuario escolhendo os valores do array aproveitando o restante do codigo do EXERCICIO 1

    printf("Digite os valores do array: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    puts(""); // Apenas para pular linha

    // Printar em ordem crescente:
    printf("Crescente: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    puts(""); // Apenas para pular linha

    // Printar em ordem decrescente:
    printf("Decrescente: ");
    for (int i = 9; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    puts(""); // Apenas para pular linha

    // Elemento na quinta posicao:
    printf("Elemento na quinta posicao do array: %d", arr[4]);

    puts(""); // Apenas para pular linha

    // Apenas elementos impares 
    printf("Elementos impares do array: ");
    for (int i = 0; i < 10; i++){
        if (arr[i] % 2 == 1){
            printf("%d ", arr[i]);
        }
    }

    puts(""); // Apenas para pular linha

    // Soma de todos os valores do array:
    for(int i = 0; i < 10; i++){
        soma += arr[i];
    }
     printf("Soma dos valores do array: %d\n", soma);


    //TESTE EXERCICIO 3 (MediaArray):
    float media = MediaArray(arr, 10);
    printf("Media dos valores do array: %.1f\n", media);


    //TESTE EXERCICIO 4 (EmArray):
    printf("Qual elemento deseja procurar no array?\n");
    scanf("%d", &n);

    if (EmArray(arr, 10, n)){
        printf("O elemento esta no array!\n");
    } else{
        printf("O elemento nao esta no array!\n");
    }


    //TESTE EXERCICIO 5 (MaximoValorArray)
    int maior = MaximoValorArray(arr, 10);
    printf("O maior valor do array eh %d\n", maior);


    //TESTE EXERCICIO 6 (EhArrayOrdenado)
    if (EhArrayOrdenado(arr, 10)){
        printf("O array esta ordenado!\n");
    } else{
        printf("O array nao esta ordenado!\n");
    }

    return 0;
}