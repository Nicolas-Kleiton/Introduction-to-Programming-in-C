#include <stdio.h>

int main(void){
    
    int N;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        char numero[101];
        int totalLEDS = 0;

        scanf("%s", numero);

        for(int j = 0; numero[j] != '\0'; j++){
            totalLEDS += leds[numero[j] - '0'];
        }

        printf("%d leds\n", totalLEDS);
    }

    return 0;
}
