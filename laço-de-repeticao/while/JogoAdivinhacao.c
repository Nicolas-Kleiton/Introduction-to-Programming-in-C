#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int palpite, correto,tentativas;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;

    tentativas=0;

	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        tentativas++;

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
	}

    puts("Voce acertou!\n");
    printf("Quantidade de tentativas: %d\n",tentativas);
	return 0;

}