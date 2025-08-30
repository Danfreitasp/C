#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;

    do {
        printf("\nMenu Principal\n");
        printf("Digite: 1 para jogar\n");
        printf("Digite: 2 para entender como funciona\n");
        printf("Digite: 3 para sair \n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: {
                int jogar = 1;
                while (jogar == 1) {
                    int numero, chute;

                    srand(time(0));
                    numero = rand() % 10 + 1;

                    printf("Digite um numero entre 1 e 10: ");
                    scanf("%d", &chute);

                    if(chute == numero){
                        printf("Parabens, voce acertou!\n");
                        printf("O numero era %d\n", numero);
                        jogar = 0; // sai do loop e volta ao menu
                    } else {
                        printf("Voce errou! O numero era %d\n", numero);
                        printf("Deseja tentar novamente? (1-Sim / 2-Nao): ");
                        scanf("%d", &jogar);
                        
                        if (jogar == 2) {
                            printf("Obrigado por jogar! Ate mais!\n");
                            return 0; // encerra o programa imediatamente
                        }
                    }
                }
                break;
            }
            case 2:
                printf("\nComo jogar:\n");
                printf("Escolha um numero entre 1 e 10, caso voce acerte, ganhou.\n");
                break;
            case 3:
                printf("\nSaindo do jogo. Ate mais!\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while(opcao != 3);

    return 0;
}
