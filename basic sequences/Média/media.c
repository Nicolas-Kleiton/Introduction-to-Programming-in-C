#include <stdio.h>

int main(void){

    float nota1, nota2, nota3;
    float media;

    // Exibe um t�tulo, apenas visual
    puts (" ---------- CALCULADOR DE MEDIA -----------\n");

    // Solicita e l� a nota digitada, armazenando-a a uma vari�vel
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Express�o para c�lcular a m�dia
    media = (nota1 + nota2 + nota3) / 3;

    // Exibir a m�dia na tela j� calculada com uma casa decimal
    printf("\nA media das notas eh: %.1f\n", media);

    return 0;
}
