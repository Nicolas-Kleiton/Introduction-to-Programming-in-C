#include <stdio.h>

int main(void){

    float altura, peso;
    float imc;

    //Exibe um titulo apenas visual
    puts("------- Indice de Massa Corporal (IMC) -------\n");

    //Solicita, l� e armazena a informa��o em uma vari�vel
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("\nDigite seu peso em kg: ");
    scanf("%f", &peso);

    //Express�o para calcular o imc
    imc = peso / (altura * altura);

    //Mostrando informa��es inseridas e resultado no final
    puts("\nRESULTADO: \n");
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.1f\n", peso);
    printf("IMC: %.2f\n", imc);

    return 0;
}
