#include <stdio.h>
#include <math.h>

/**** EhTrianguloRetangulo(): Verifica se os valores digitados formam um triangulo retangulo
*
* Parâmetros:
* a: primeiro lado (cateto)
* b: segundo lado (cateto)
* c: terceiro lado (hipotenusa)
*
* Retorno: retorna um valor boleano 1 caso forme um triangulo retangulo ou 0 se não formar.
*
* Observações:
* O lado 'c' deve ser a hipotenusa, ou seja, deve ser o maior dos três lados para que a verificação
* do Teorema de Pitágoras seja válida.
****/

int EhTrianguloRetangulo (float a, float b, float c){

    // Verifica se c eh o maior dos tres lados
    if (c > a && c > b){
        if (a * a + b * b == c * c){  // Verifica a relação do Teorema de Pitágoras
            return 1; // Retorna verdadeiro (1) se formar um triângulo retângulo
    }

    }
    return 0; // Retorna falso (0) se não formar um triângulo retângulo
}

/**** FormaTrianguloRetangulo: Calcula o valor correto de um lado para formar um triângulo retângulo
*
* Parâmetros:
* a: primeiro lado (cateto)
* b: segundo lado (cateto)
* c: terceiro lado (hipotenusa)
*
* Retorno: retorna o valor calculado do lado que está como 0 para formar um triângulo retângulo, ou -1
* se mais de um lado for inválido.
*
* Observações:
* A função assume que no máximo um dos lados é inválido (zero ou negativo).
* O lado inválido deve ser calculado para satisfazer a condição de um triângulo retângulo.
****/


float FormaTrianguloRetangulo(float a, float b, float c){
    int invalidos = 0;

    // Verifica quantos lados sao invalidos
    if (a <= 0){
        invalidos++;
    }
    if (b <= 0){
        invalidos++;
    }
    if (c <= 0){
        invalidos++;
    }
 
    // Se mais de um lado for invalido, retorna -1.

    if (invalidos > 1){
        return -1;
    }

    // Calcula o lado correto baseado nos outros dois lados válidos
    if (a <= 0){
        return sqrt ((c*c) - (b*b)); // Calcula a partir de c² = a² + b²
    }
    if (b <= 0){
        return sqrt ((c*c) - (a*a)); // Calcula a partir de c² = a² + b²
    }
    if (c <= 0){
        return sqrt ((a*a) + (b*b)); // Calcula a partir de c² = a² + b²
    }

    return -1; // Caso nenhum lado seja invalido.
}

int main(void) {
  float a, b, c;

  // Solicita que o usuario digite os valores.
  printf("Informe os lados a,b e c do triangulo: ");
  scanf("%f %f %f", &a, &b, &c);
  
  // Verifica se os valores formam um triangulo retangulo.
  if (a > 0 && b > 0 && c > 0){
    if (EhTrianguloRetangulo(a,b,c)){
        printf("Os lados formam um triangulo retangulo!\n");
    } else{
        printf("Os lados nao formam um triangulo retangulo!\n");
    }

  //Se um lado for invalido eh calculado o lado correto
  } else{
    float resultado = FormaTrianguloRetangulo(a, b , c);

    if (resultado == -1){
        printf("Mais de um lado invalido!\n");
    } else {
        if (a <= 0){
            printf("Para que os lados formem um triangulo retangulo o valor de 'a' deve ser: %.1f\n", resultado);
        } else if (b <= 0){
            printf("Para que os lados formem um triangulo retangulo o valor de 'b' deve ser: %.1f\n", resultado);
        } else if (c <= 0){
            printf("Para que os lados formem um triangulo retangulo o valor de 'c' deve ser: %.1f\n", resultado);
    }
  }

  }

    return 0;
}