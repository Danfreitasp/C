#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Nome: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    
    return 0;
}