#include <stdio.h>

int main(){

    int contador = 1;
    while(contador <= 5){
        printf("Contador: %d\n", contador);
        contador++;
    } 

    int num;
    printf("Digite um numero maior que 10 para sair: ");
    scanf("%d", &num);
    while(num <= 10){
        printf("Numero invalido! Digite um numero maior que 10 para sair: ");
        scanf("%d", &num);
    }

    return 0;

}