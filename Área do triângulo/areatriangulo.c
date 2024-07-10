#include <stdio.h>

int main(void){

    int base, altura;
    float area;

    puts("---------- CALCULAR AREA DO TRIANGULO ----------\n");
    printf("Digite a base do triangulo (em m): ");
    scanf("%d", &base);
    printf("Digite a altura do triangulo (em m): ");
    scanf("%d", &altura);

    area = (base*altura) / 2.0;

    puts("\n---------- RESULTADO ----------\n");
    printf("Base: %.d metros\n", base);
    printf("Altura: %.d metros\n", altura);
    printf("Area do triangulo: %.2f metros quadrados\n", area);

    return 0;
}
