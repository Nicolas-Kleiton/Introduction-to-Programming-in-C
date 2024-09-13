#include <stdio.h>
#include <math.h>

// Função para calcular a área e o perímetro de um hexágono
void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3 * pow(l, 2) * sqrt(3)) / 2;
    *perimetro = 6 * l;
}

int main() {
    float lado, area, perimetro;

    // Entrada do valor do lado do hexágono
    printf("Digite o valor do lado do hexágono: ");
    scanf("%f", &lado);

    // Chamando a função para realizar os calculos
    CalculaHexagono(lado, &area, &perimetro);

    printf("Área do hexágono: %.2f\n", area);
    printf("Perímetro do hexágono: %.2f\n", perimetro);

    return 0;
}
