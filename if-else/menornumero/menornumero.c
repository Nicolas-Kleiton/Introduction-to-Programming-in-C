#include <stdio.h>

int main(void) {

    int num1, num2;

	printf("Escolha um numero inteiro: ");
    scanf("%d", &num1);
    printf("\nEscolha outro numero inteiro: ");
    scanf("%d", &num2);
    
    if (num1<num2) {
        printf("\nO menor numero eh %d", num1);
    } else {
        printf("\nO menor numero eh %d", num2);
    }

	return 0;
}
