#include <stdio.h>

int valor1 = 30, valor2 = 20, maior;
float temperatura = 10.5;

int main(){

    valor1 > valor2 ? (maior = valor1) : (maior = valor2);

    printf("O maior valor entre %d e %d é: %d", valor1, valor2, maior);

    temperatura >= 32.0 ? printf("\nEstá quente!") : printf("\nEstá frio!");
    
    return 0;

}