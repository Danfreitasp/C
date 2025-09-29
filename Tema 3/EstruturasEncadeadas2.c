#include <stdio.h>

int main(){

    int nota;
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota >= 00 && nota < 20){
        printf("Conceito F!\n");
    } else if (nota >= 20 && nota < 40){
        printf("Conceito E!\n");
    } else if (nota >= 40 && nota < 60){
        printf("Conceito D!\n");
    } else if (nota >= 60 && nota < 80){
        printf("Conceito C!\n");
    } else if (nota >= 80 && nota < 90){
        printf("Conceito B!\n");
    } else if (nota >= 90 && nota <= 100){
        printf("Conceito A!\n");
    } else {
        printf("Nota invalida!\n");
    };

    if (nota >= 60){
        printf("Parabéns, você foi aprovado!\n");
    } else if (nota >= 0 && nota < 60){
        printf("Infelizmente, você foi reprovado!\n");
    };
    return 0;
}