#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero par: ");
    scanf("%d", &numero);

    while (numero % 2 != 0){
        printf("Numero invalido! Digite um numero par: ");
        scanf("%d", &numero);
    }

    printf("Obrigado! Voce digitou o numero par %d\n", numero);

    return 0;
}