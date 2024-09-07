#include <stdio.h>
#include <math.h>

/**** Bilhar(): Calcula a distânciaentre dois pontos em um plano
*
* Parâmetros:
* x1: Coordenada x do primeiro ponto (inteiro, posição da primeira bola)
* y1: Coordenada y do primeiro ponto (inteiro, posição da primeira bola)
* x2: Coordenada x do segundo ponto (inteiro, posição da segunda bola)
* y2: Coordenada y do segundo ponto (inteiro, posição da segunda bola)
*
* Retorno: Retorna a distância entre os dois pontos como um valor do tipo `double`.
*
****/

double Bilhar (int x1, int y1, int x2, int y2){

    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    
}

int main() {
    
    int C, N;
    int x_branca,y_branca;
    int x_bola, y_bola;

    scanf("%d", &C);

    for (int i = 0; i < C; i++){
        scanf("%d", &N);
        scanf("%d %d", &x_branca, &y_branca);

        int bolaMaisProxima = 1;
        double menorDistancia = -1;
        
        for (int j = 1; j <= N; j++){
   
            scanf("%d %d", &x_bola, &y_bola);

            double distancia = Bilhar(x_branca,y_branca, x_bola, y_bola);   

            if (menorDistancia == -1 ||  distancia < menorDistancia ){
                menorDistancia = distancia;
                bolaMaisProxima = j;
            }
        }

        printf("%d\n", bolaMaisProxima);
    }

    return 0;
}
