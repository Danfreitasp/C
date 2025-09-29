#include <stdio.h>
int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero %2 == 0){
            printf("Numero positivo e par\n");
        } else {
            printf("Numero positivo e ímpar\n");
        }
    } else {
        if (numero < 0){
            printf("Numero negativo\n");
        } else {
            printf("Numero igual a zero\n");
        }
    }   
    return 0;
}