#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolha, escolhaPc;
    srand(time(NULL));
    escolhaPc = rand() % 3;
    printf("Bem vindo ao Jokenpo\n");
    printf("Escolha uma opcao:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
        case 0: 
        printf("Voce escolheu Pedra\n");
        break;
        case 1:
        printf("Voce escolheu Papel\n");
        break;
        case 2: 
        printf("Voce escolheu Tesoura\n");
        break;
        default:
        printf("Escolha inválida\n");
        break;
    }

    switch (escolhaPc)
    {
        case 0: 
        printf("Computador: Pedra\n");
        break;
        case 1:
        printf("Computador: Papel\n");
        break;
        case 2: 
        printf("Computador: Tesoura\n");
        break;
        default:
        break;
    }

    if (escolha == escolhaPc){
        printf("Empate!\n");
    } else if ((escolha == 0 && escolhaPc == 2) || (escolha == 1 && escolhaPc == 0) || (escolha == 2 && escolhaPc == 1)){
        printf("Voce venceu!\n");
    } else if ((escolha == 0 && escolhaPc == 1) || (escolha == 1 && escolhaPc == 2) || (escolha == 2 && escolhaPc == 0)){
        printf("Computador venceu!\n");
    } else {
        printf("Jogo encerrado devido a escolha inválida.\n");
    }

}

