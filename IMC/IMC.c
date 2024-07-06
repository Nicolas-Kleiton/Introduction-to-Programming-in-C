#include <stdio.h>

int main(void){

    float altura, peso;
    float imc;

    //Exibe um titulo apenas visual
    puts("------- Indice de Massa Corporal (IMC) -------\n");

    //Solicita, lê e armazena a informação em uma variável
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("\nDigite seu peso em kg: ");
    scanf("%f", &peso);

    //Expressão para calcular o imc
    imc = peso / (altura * altura);

    //Mostrando informações inseridas e resultado no final
    puts("\nRESULTADO: \n");
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.1f\n", peso);
    printf("IMC: %.2f\n", imc);

    return 0;
}
