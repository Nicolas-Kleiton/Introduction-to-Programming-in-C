#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c;
	float delta, x1,x2;

	printf("Informe o coeficiente de a: ");
	scanf("%f", &a);
	printf("Informe o coeficiente de b: ");
	scanf("%f", &b);
	printf("Informe o coeficiente de c: ");
	scanf("%f", &c);
	
	if (a == 0) {
		printf("\nOs coeficientes informados nao formam uma equacao do segundo grau!");
		return 1;
	}

	delta = b*b - 4*a*c;

	if (delta < 0) {
		printf("\nA equacao nao possui raizes reais!");
		return 2; 
		}

	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);

	if (delta == 0) {
		printf("Raiz unica: %.1f", x1);
	} else {
		printf("\nX1 = %.1f\nX2 = %.1f\n", x1,x2);
	}

	return 0;
}