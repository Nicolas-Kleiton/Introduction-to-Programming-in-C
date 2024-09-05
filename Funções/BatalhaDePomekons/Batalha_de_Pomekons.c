#include <stdio.h>

float bonusBatalha (int X, int Y, int Z, int B){
    float ValorGolpe = (float)(X + Y) / 2;

    if (Z % 2 == 0){
        return ValorGolpe = ValorGolpe + B;
    } else{
        return ValorGolpe;
    }   
}

int main(){
    int T, B;
    int Ai1, Di1, Li1;
    int Ai2, Di2, Li2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%d", &B);
        scanf("%d %d %d", &Ai1,&Di1,&Li1);
        scanf("%d %d %d", &Ai2,&Di2,&Li2);

        float TreinadorUm = bonusBatalha(Ai1,Di1,Li1,B);
        float TreinadorDois = bonusBatalha(Ai2,Di2,Li2,B);
        
        if (TreinadorUm > TreinadorDois){
            printf("Dabriel\n");
        } else if (TreinadorDois > TreinadorUm){
            printf("Guarte\n");
        } else{
            printf("Empate\n");
        }
    }

    return 0;
}
