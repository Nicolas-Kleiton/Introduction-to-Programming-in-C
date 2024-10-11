#include <stdio.h>
#include <string.h>

int main(void){
    
    char dna[1001];
    char subsequencia[1001];
    
    
    while(scanf("%s", dna) != EOF){
        scanf("%s", subsequencia);

        if(strstr(dna, subsequencia) != NULL){
        printf("Resistente\n");
        
        } else{
            printf("Nao resistente\n");
        }

    }

    return 0;
}