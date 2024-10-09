#include <stdio.h>
#include <string.h>

#define ALFABETO_LETRAS 26

int main(void) {
    int N;
    scanf("%d", &N);  

    getchar();

    while (N--) {
        char frase[1001];
        fgets(frase, sizeof(frase), stdin);

        frase[strcspn(frase, "\n")] = '\0';

        int letrasEncontradas[ALFABETO_LETRAS] = {0};

        for (int i = 0; frase[i] != '\0'; i++) {
            if (frase[i] >= 'a' && frase[i] <= 'z') {
                letrasEncontradas[frase[i] - 'a'] = 1;
            }
        }

        int letrasContadas = 0;

        for (int i = 0; i < ALFABETO_LETRAS; i++) {
            letrasContadas += letrasEncontradas[i];
        }

        if (letrasContadas == ALFABETO_LETRAS) {
            printf("frase completa\n");
        } else if (letrasContadas >= ALFABETO_LETRAS / 2) {
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}