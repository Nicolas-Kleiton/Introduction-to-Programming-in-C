#include <stdio.h>

int main(void){

    float diametro;
    float raio, area, perimetro;

    //Exibe um titulo apenas visual
    puts("---- CALCULAR RAIO, AREA E PERIMETRO DO CIRCULO ----\n");

    //Solicita, lê e armazena o valor do diametro na variavel
    printf("Digite o diametro do circulo: ");
    scanf ("%f", &diametro);

    //Expressões para calcular cada situação
    raio = diametro / 2;
    area = 3.14 * raio * raio;
    perimetro = 2 * 3.14 * raio;

    // Exibe o resultado de cada operação na tela
    puts("\n----------- RESULTADO -----------\n");
    printf("Diametro: %.2f\n", diametro);
    printf("Raio: %.2f\n", raio);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
