#include <stdio.h>
#include <string.h>

int main(void){
    
    int T;
    char Sheldon [101];
    char Raj [101];

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%s %s", Sheldon, Raj);

        if(strcmp(Sheldon, Raj) == 0){
            printf("Caso #%d: De novo!\n", i);
        } else if(
            (strcmp(Sheldon, "tesoura") == 0 && (strcmp(Raj, "papel") == 0 || strcmp(Raj, "lagarto") == 0)) ||
            (strcmp(Sheldon, "papel") == 0 && (strcmp(Raj, "pedra") == 0 || strcmp(Raj, "Spock") == 0)) ||
            (strcmp(Sheldon, "pedra") == 0 && (strcmp(Raj, "lagarto") == 0 || strcmp(Raj, "tesoura") == 0)) ||
            (strcmp(Sheldon, "lagarto") == 0 && (strcmp(Raj, "Spock") == 0 || strcmp(Raj, "papel") == 0)) ||
            (strcmp(Sheldon, "Spock") == 0 && (strcmp(Raj, "tesoura") == 0 || strcmp(Raj, "pedra") == 0)) ||
            (strcmp(Sheldon, "Spock") == 0 && (strcmp(Raj, "tesoura") == 0 || strcmp(Raj, "pedra") == 0))
        ){
            printf("Caso #%d: Bazinga!\n", i);
        } else{
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        
    }

    return 0;
}
