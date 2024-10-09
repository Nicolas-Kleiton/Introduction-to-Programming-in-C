#include <stdio.h>

int validarSenha(char senha[]){
    int temMaiuscula = 0, temMinuscula = 0, temDigito = 0;
    int i;

    for(i = 0; senha[i] != '\0'; i++){
        if(senha[i] >= 'A' && senha[i] <='Z'){
            temMaiuscula = 1;
        } else if(senha[i] >='a' && senha[i] <='z'){
            temMinuscula = 1;
        } else if(senha[i] >= '0' && senha[i] <= '9'){
            temDigito = 1;
        } else{
            return 0;
        }
    }

    if(i < 6 || i > 32){
        return 0;
    }

    if(temMaiuscula && temMinuscula && temDigito){
        return 1;
    }

    return 0;
}

int main(void){
    
    char senha[100];

    while (fgets(senha, sizeof(senha), stdin)) {
        if (validarSenha(senha)) {
            printf("Senha valida.\n");
        } else {
            printf("Senha invalida.\n");
        }
    }


    return 0;
}
