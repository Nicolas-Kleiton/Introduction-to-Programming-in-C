#include <stdio.h>

/**** AdicioneNaMedia(): Calcula a media a medida que vai digitando os valores
*
* Parâmetros:
* valor: recebe o valor que será somado para calcular a media.
*
* Retorno: retorna sempre a media a medida que vai digitando os valores.
*
* Observações: 
* A quantidade de vezes que a função vai executar dependerá da escolha do usuário.
****/

double AdicioneNamedia (double valor){
    static double soma = 0;
    static int cont = 0;

    soma += valor;
    cont++;

    return soma/cont; 
}

int main(void) {
    int n;
    double valor;

    printf("Quantos valores serao inseridos?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite o valor: ");
        scanf("%lf", &valor);

        double nova_media = AdicioneNamedia(valor);

        printf("Media atual: %.2lf\n", nova_media);
    }

    return 0;
}