#include <stdio.h>

int main(void){

    float nota1, nota2, nota3;
    float media;

    // Exibe um título, apenas visual
    puts (" ---------- CALCULADOR DE MEDIA -----------\n");

    // Solicita e lê a nota digitada, armazenando-a a uma variável
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Expressão para cálcular a média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibir a média na tela já calculada com uma casa decimal
    printf("\nA media das notas eh: %.1f\n", media);

    return 0;
}
