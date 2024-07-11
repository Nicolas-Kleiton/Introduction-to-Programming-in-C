#include <stdio.h>

int main(void){

    float nota1,nota2,nota3,nota4;
    float media;

    puts("---------- CALCULO DE MEDIA PONDERADA ----------\n");
    printf("Digite a media do primeiro bimestre: ");
    scanf("%f", &nota1);
    printf("Digite a media do segundo bimestre: ");
    scanf("%f", &nota2);
    printf("Digite a media do terceiro bimestre: ");
    scanf("%f", &nota3);
    printf("Digite a media do quarto bimestre: ");
    scanf("%f", &nota4);

    media = (((nota1*1) + (nota2*2) + (nota3*3) + (nota4*4)) /10);

    puts("\n---------- RESULTADO ----------\n");
    printf("A media anual eh: %.1f", media);



    return 0;
}
