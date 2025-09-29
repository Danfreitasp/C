#include <stdio.h>

int main(){

    int idade;
    float altura, peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    if (idade >= 18 && idade < 30 && altura >= 1.70 && peso > 50 && peso < 100) {
        printf("Voce atende aos requisitos.\n");
    } else {
        printf("Voce nao atende aos requisitos.\n");
    }

return 0;
}