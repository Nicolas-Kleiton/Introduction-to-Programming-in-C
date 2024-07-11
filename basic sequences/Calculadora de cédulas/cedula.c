#include <stdio.h>

int main(void){

    int cedula100,cedula50,cedula20,cedula10,cedula5,cedula2,cedula1;
    int quantia;

    puts("---------- CALCULADOR DE CEDULAS ----------\n");
    printf("Digite uma quantia: ");
    scanf("%d", &quantia);
    
    cedula100 = quantia / 100;
    quantia = quantia % 100;

    cedula50 = quantia / 50;
    quantia = quantia % 50;

    cedula20 = quantia / 20;
    quantia = quantia % 20;

    cedula10 = quantia / 10;
    quantia = quantia % 10;

    cedula5 = quantia / 5;
    quantia = quantia % 5;

    cedula2 = quantia / 2;
    quantia = quantia % 2;

    cedula1 = quantia / 1;
    
    puts("\n---------- QUANTIDADE DE CADA CEDULA ----------\n");
    printf("Notas de 100: %d\n", cedula100);
    printf("Notas de 50: %d\n", cedula50);
    printf("Notas de 20: %d\n", cedula20);
    printf("Notas de 10: %d\n", cedula10);
    printf("Notas de 5: %d\n", cedula5);
    printf("Notas de 2: %d\n", cedula2);
    printf("Notas de 1: %d\n", cedula1);

    return 0;
}
