#include <stdio.h>

int Rafael (int X, int Y){

    int r = (3 * X) * (3 * X) + Y * Y;
    
    return r;
}
int Beto (int X, int Y){

    int b = 2 * (X * X) + ((5 * Y) * (5 * Y));
    return b;
}
int Carlos (int X, int Y){

    int c = (-100 * X) + (Y * Y * Y);
    
    return c;
}

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
