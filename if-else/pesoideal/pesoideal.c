#include <stdio.h>

int main(void) {

    char sexo;
    float altura, pesoideal;

    printf("Informe o seu sexo (M ou F): ");
    scanf("%c", &sexo);
    printf("\nInforme a sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M') {
        pesoideal = (72.7*altura)-58;
        printf("\nO seu peso ideal eh: %.1fKg", pesoideal);
    } else if (sexo == 'F') {
        pesoideal = (62.1*altura)-44.7;
        printf("\nO seu peso ideal eh: %.1fKg", pesoideal);
        } else {
            puts("\nSexo Invalido, por favor informe novamente.");
        }

	return 0;
}