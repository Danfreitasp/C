#include <stdio.h>

int main(){

    int nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    float media = (nota1 + nota2) / 2.0;

    printf("Sua média foi: %.2f", media);

    if (media >= 6) {
        printf("\nParabéns! Você foi aprovado");
    } else {
        printf("\nInfelizmente, você foi reprovado");
    }

    return 0;
}