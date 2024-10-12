#include <stdio.h>
#include <string.h>

int main(void){
    
    char palavra[21];
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%s", palavra);

        int len = strlen(palavra);

        if(palavra[0] == 'O' && palavra[1] == 'B' &&(len == 3 && (len - 1) != 'I')){
            palavra[strlen(palavra)-1] = 'I';
        } else if(palavra[0] == 'U' && palavra[1] == 'R' &&(len == 3 && (len - 1) != 'I')){
            palavra[strlen(palavra)-1] = 'I';
        } else if(strcmp(palavra, "OB") == 0){
            strcpy(palavra, palavra);
        } else if(strcmp(palavra, "UR") == 0){
            strcpy(palavra, palavra);
        }
        
        printf("%s", palavra);

        if (i < N - 1) {
            printf(" ");
        }
    }
        printf("\n");

    return 0;
}
