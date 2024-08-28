#include <stdio.h>
#include <math.h>

float Delta (float a, float b, float c){

    float Delta = b*b - 4*a*c;

    return Delta;
}

float Raiz1 (float a, float b, float delta){
    
    float Raiz1 = (- b + sqrt(delta)) / (2 * a);

    return Raiz1;
}

float Raiz2 (float a, float b, float delta){

    float Raiz2 = (-b - sqrt(delta)) / (2 * a);

    return Raiz2;
}

int main(){
    
    float a, b, c; 
    float delta;

    scanf("%f%f%f", &a, &b, &c);

    if (a == 0){
        printf("Os coeficientes nao formam uma equacao do 2 grau!\n");
        return 1;
    }

    delta = Delta(a,b,c);

    if (delta < 0){
        printf("Nao ha raizes reais!\n");
        return 2;
    }

    float x1 = Raiz1 (a, b, delta);
    float x2 = Raiz2 (a,b,delta);

    if (delta == 0){
        printf("Raiz unica: %.1f\n", x1);
    } else {
        printf("X1 = %.1f\nX2 = %.1f\n", x1, x2);
    }
    
    return 0;
}
