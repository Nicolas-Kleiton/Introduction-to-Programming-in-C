#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

    c = a; 
    a = b; 
    b = c; 

    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
