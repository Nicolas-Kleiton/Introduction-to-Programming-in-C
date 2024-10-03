#include <stdio.h>

int CrescimentoPopulacional(int PA, int PB, double G1 , double G2){
    int anos = 0;

    while(PA <= PB){
        PA += (PA * G1) / 100;
        PB += (PB * G2) / 100;
        anos++;

        if(anos > 100){
        return -1;
        }

    }

    return anos;
    
}

int main(void){
    
    int T;
    int PA, PB;
    double G1, G2;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d %d %lf %lf", &PA, &PB, &G1 ,&G2);

        int anos = CrescimentoPopulacional(PA, PB, G1, G2);

        if(anos == -1){
            printf("Mais de 1 seculo.\n");
        } else{
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}
