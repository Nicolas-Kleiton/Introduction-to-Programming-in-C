#include <stdio.h>

int main(void) {

    int tempo;
    int horas, minutos, segundos;


	puts("---------- CONVERSOR DE TEMPO ----------\n"); 
    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    tempo = tempo % 3600;
    minutos = tempo / 60;
    segundos = tempo % 60;

    puts("\n---------- RESULTADO ----------\n");
    printf("%d Horas \n", horas);
    printf("%d minutos \n", minutos);
    printf("%d Segundos \n", segundos);


	return 0;
}
