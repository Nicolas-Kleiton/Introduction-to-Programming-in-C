#include <stdio.h>

int main(void) {

    char sexo;
    float altura, pesoideal;

    printf("Informe o seu sexo (M ou F): ");
    scanf("%c", &sexo);
    printf("\nInforme a sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M') {
        printf("\nO seu peso ideal eh: %.1f",pesoideal = (72.7*altura)-58 );
    } else if (sexo == 'F') {
        printf("\nO seu peso ideal eh: %.1f", pesoideal = (62.1*altura)-44.7);
        } else {
            puts("\nSexo Invalido, por favor informe novamente.");
        }


	return 0;
}