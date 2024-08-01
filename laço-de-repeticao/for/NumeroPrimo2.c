#include <stdio.h>

int main() {
    int n, i, j, k;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int contador = 0; 

        scanf("%d", &k);

        for(j = 1; j <= k; j++) {
            if (k % j == 0) {
                contador++;
            }
        }

        if(contador == 2) {
            printf("%d eh primo\n", k);
        } else {
            printf("%d nao eh primo\n", k);
        }
    }

    return 0;
}