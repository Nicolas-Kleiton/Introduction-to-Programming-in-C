#include <stdio.h>
#include <math.h>

int CalculaRaizes(float a, float b, float c, float *x1, float *x2) {

    // Verifica se é uma equação do segundo grau
    if (a == 0) {
        return -1;  
    }

    // Calcula o delta
    float delta = (b * b) - (4 * a * c);

    // Verifica se a equação tem raízes reais
    if (delta < 0) {
        return -2; 
    }

    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);

    return 0;  
}

int main() {
    float a, b, c;
    float x1, x2;
    int resultado;

    printf("Digite os coeficientes a, b e c da equação do segundo grau (a != 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    // Chama a função para calcular as raízes
    resultado = CalculaRaizes(a, b, c, &x1, &x2);

    // Verifica o resultado e exibe as informações adequadas
    switch (resultado) {
        case 0:
            printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
            break;
        case -1:
            printf("Os coeficientes nao representam uma equacao do segundo grau.\n");
            break;
        case -2:
            printf("A equação nao possui raizes reais.\n");
            break;
        default:
            break;
    }
    
    return 0;
}