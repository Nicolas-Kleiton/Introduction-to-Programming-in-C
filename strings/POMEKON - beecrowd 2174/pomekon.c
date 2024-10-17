#include <stdio.h>
#include <string.h>

int main(void){
    
    int quantidade, cont = 151;
    char pomekons[1000][1000];
    int unico = 0;

    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++){
        char pomekon[100];
        scanf("%s", pomekon);

        int repetido = 0;

        for(int j = 0; j < unico; j++){
            if(strcmp(pomekon, pomekons[j]) == 0){
                repetido = 1;
                break;
            }
        }

        if(!repetido){
            strcpy(pomekons[unico],pomekon);
            unico++;
            cont--;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", cont);

    return 0;
}