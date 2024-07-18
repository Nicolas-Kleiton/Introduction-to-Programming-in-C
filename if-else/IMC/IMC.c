#include <stdio.h>

int main(){

    float altura, peso;
    float imc;

    puts("------- Indice de Massa Corporal (IMC) -------\n");

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    printf("\nDigite o seu peso em kg: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc <= 18.5) {
        printf("Seu IMC deu %.1f, voce esta abaixo do peso.\n",imc);
    } else if (imc > 18.5 && imc <=25) {
        printf("Seu IMC deu %.1f, voce esta com o peso normal.\n",imc);
    } else if (imc > 25 && imc <=30) {
        printf("Seu IMC deu %.1f, voce esta com sobrepeso.\n",imc);
    } else if (imc > 30) {
        printf ("Com o IMC deu %.1f, voce esta com obesidade.\n", imc);
    }

    return 0;
}
