#include <stdio.h>
#include <string.h>


int main(void){
    
    char risada[51];
    char vogais[51];
    int j = 0;

    scanf("%s", risada);

    for(int i = 0; risada[i] != '\0'; i++){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[j++] = risada[i];
        }
    }

    vogais[j] = '\0';

    int tamanho = strlen(vogais);
    int engracado = 1;

    for(int i = 0; i < tamanho / 2; i++){
        if(vogais[i] != vogais[tamanho - 1 - i]){
            engracado = 0;
            break;
        }
    }

    if(engracado){
        printf("S\n");
    } else{
        printf("N\n");
    }

    return 0;
}
