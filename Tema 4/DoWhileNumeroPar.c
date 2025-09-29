#include <stdio.h>

int main(){

    int numero;
    do {
        printf("Digite um numero par: ");
        scanf("%d", &numero);
        if (numero % 2 != 0){
            printf("Numero invalido! ");
        }
    } while (numero % 2 != 0);

    printf("Obrigado! Voce digitou o numero par %d\n", numero);

 }
