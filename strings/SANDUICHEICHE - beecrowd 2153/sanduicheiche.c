#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[31];

    while (scanf("%s", palavra) != EOF) {
        int len = strlen(palavra);

        for (int i = 1; i <= len / 2; i++) {
            if (strncmp(&palavra[len - i], &palavra[len - 2 * i], i) == 0) {
                len = len - i;
                break;
            }
        }

        for (int i = 0; i < len; i++) {
            printf("%c", palavra[i]);
        }
        printf("\n");  
    }

    return 0;
}