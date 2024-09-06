#include <stdio.h>

/**** Rafael(), Beto(), Carlos(): Cada função calcula a pontuação com base nos valores de X e Y
*
* Parâmetros:
* X : valor do eixo X (inteiro)
* Y : valor do eixo Y (inteiro)
*
* Retorno: Retorna a pontuação correspondente a cada fórmula:
* - Rafael: (3 * X)^2 + Y^2
* - Beto: 2 * (X^2) + (5 * Y)^2
* - Carlos: (-100 * X) + Y^3
*
* Observações:
* As três funções seguem o mesmo padrão de cálculo, mudando apenas a fórmula utilizada para gerar a pontuação.
****/

int Rafael (int X, int Y){

    int r = (3 * X) * (3 * X) + Y * Y; // Formula de Rafael 
    
    return r;
}
int Beto (int X, int Y){

    int b = 2 * (X * X) + ((5 * Y) * (5 * Y)); // Formula de Beto

    return b;
}
int Carlos (int X, int Y){

    int c = (-100 * X) + (Y * Y * Y); // Formula de Carlos
    
    return c;
}

/**** vencedor(): Calcula as pontuações de Rafael, Beto e Carlos e determina o vencedor
*
* Parâmetros:
* X : valor do eixo X (inteiro)
* Y : valor do eixo Y (inteiro)
*
* Retorno: Retorna uma string indicando o vencedor, que pode ser:
* - "Rafael ganhou\n" se a pontuação de Rafael for maior que a de Beto e Carlos.
* - "Beto ganhou\n" se a pontuação de Beto for maior que a de Rafael e Carlos.
* - "Carlos ganhou\n" se a pontuação de Carlos for maior que a de Rafael e Beto.
*
* Observações:
* Após calcular as pontuações, a função compara os resultados e retorna o nome do vencedor com a maior pontuação.
****/

const char* vencedor (int X, int Y){

    int rafael = Rafael(X,Y);
    int beto = Beto(X,Y);
    int carlos = Carlos(X,Y);

    if (rafael > beto && rafael > carlos){
        return "Rafael ganhou\n";
    } else if (beto > rafael && beto > carlos){
        return "Beto ganhou\n";
    } else{
        return "Carlos ganhou\n";
    }
}

int main(){
    int N;
    int X,Y;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d%d", &X,&Y);

        printf(vencedor(X,Y));
    }

    return 0;
}
