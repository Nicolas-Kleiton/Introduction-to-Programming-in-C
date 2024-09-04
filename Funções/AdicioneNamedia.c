#include <stdio.h>

double AdicioneNamedia (double valor){
    static double soma;
    static int cont;

    soma += valor;
    cont++;

    return soma/cont;
}

int main(void)
{
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
