#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("**********************************\n");
    printf("* Bem vindo ao jogo de Adivinhacao *\n");
    printf("**********************************\n");
    printf("Escolha M para tentar acertar um número maior.\n");
    printf("Escolha N para tentar acertar um número menor.\n");
    printf("Escolha E para tentar acertar um número exato.\n");

    int numero, numeroPc, resultado;
    char comparacao;

    srand(time(0));
    numeroPc = rand() % 100 + 1;  

    printf("Digite o número que você escolheu: ");
    scanf("%d", &numero);
    printf("Digite a letra correspondente à sua escolha: ");
    scanf(" %c", &comparacao);

    switch (comparacao) {
        case 'M':
        case 'm':
            if (numeroPc > numero) {
                resultado = 1;
            } else {
                resultado = 0;
            }
            break;
        case 'N':
        case 'n':
            if (numeroPc < numero) {
                resultado = 1;
            } else {
                resultado = 0;
            }
            break;
        case 'E':
        case 'e':
            if (numeroPc == numero) {
                resultado = 1;
            } else {
                resultado = 0;
            }
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    if (resultado = 1) {
        printf("Parabéns! Você ganhou, o número era %d.\n", numeroPc);
    } else {
        printf("Que pena! Você errou! O número era %d.\n", numeroPc);
    }

    return 0;

}