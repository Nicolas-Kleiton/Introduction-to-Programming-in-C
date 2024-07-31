#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int palpite, correto;
    int tentativas, tentativasMaximas;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;

    tentativas=0;

    tentativasMaximas=5;

	while (tentativas < tentativasMaximas) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        tentativas++;

            if (palpite > correto){
                puts("Palpite alto!");
  
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            } else { 
                puts("Voce acertou!\n");
                printf("Quantidade de tentativas: %d\n",tentativas);
                break;
            }
            
            if (tentativas < tentativasMaximas) {
            printf("Restam %d tentativas\n", tentativasMaximas - tentativas);
        }
    }        
    printf("Voce nao acertou! O numero era %d\n", correto);
   
	return 0;

}