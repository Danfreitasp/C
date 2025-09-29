#include <stdio.h>

int main(){

    char peca;
    int quantidade, lado, direcao, diagonal;
    const int DIREITA = 1, ESQUERDA = 2, CIMA = 3, BAIXO = 4;

    printf("=== MOVIMENTAÇÃO DE PEÇAS DE XADREZ ===\n");
    printf("Digite a peça (T para torre, B para bispo ou R para rainha): ");
    scanf(" %c", &peca);

    // ==================== TORRE ====================
    if (peca == 'T'){
        printf("Digite o lado que deseja se mover (1-Direita, 2-Esquerda, 3-Cima, 4-Baixo): ");
        scanf("%d", &lado);
        printf("Digite a quantidade de casas que deseja se mover: ");
        scanf("%d", &quantidade);

        if (lado == DIREITA){
            while (quantidade-- > 0) printf("Direita.\n");
        }
        else if (lado == ESQUERDA){
            while (quantidade-- > 0) printf("Esquerda.\n");
        }
        else if (lado == CIMA){
            while (quantidade-- > 0) printf("Cima.\n");
        }
        else if (lado == BAIXO){
            while (quantidade-- > 0) printf("Baixo.\n");
        }
        else {
            printf("Movimento inválido para a Torre!\n");
        }
    }

    // ==================== BISPO ====================
    else if (peca == 'B'){
        printf("Digite o lado que deseja se mover (1-Direita, 2-Esquerda): ");
        scanf("%d", &lado);
        printf("Digite a direção em que quer se mover (3-Cima, 4-Baixo): ");
        scanf("%d", &direcao);
        printf("Digite a quantidade de casas que deseja se mover: ");
        scanf("%d", &quantidade);

        if (lado == DIREITA && direcao == CIMA){
            while (quantidade-- > 0) printf("Cima, Direita.\n");
        }
        else if (lado == ESQUERDA && direcao == CIMA){
            while (quantidade-- > 0) printf("Cima, Esquerda.\n");
        }
        else if (lado == DIREITA && direcao == BAIXO){
            while (quantidade-- > 0) printf("Baixo, Direita.\n");
        }
        else if (lado == ESQUERDA && direcao == BAIXO){
            while (quantidade-- > 0) printf("Baixo, Esquerda.\n");
        }
        else {
            printf("Movimento inválido para o Bispo!\n");
        }
    }

    // ==================== RAINHA ====================
    else if (peca == 'R'){
        printf("A rainha pode se mover em todas as direções.\n");
        printf("Deseja mover para diagonal ou em linha reta? (1-Diagonal, 2-Linha Reta): ");
        scanf("%d", &diagonal);

        if (diagonal == 1){ // Movimento diagonal
            printf("Digite o lado que deseja se mover (1-Direita, 2-Esquerda): ");
            scanf("%d", &lado);
            printf("Digite a direção em que quer se mover (3-Cima, 4-Baixo): ");
            scanf("%d", &direcao);
            printf("Digite a quantidade de casas que deseja se mover: ");
            scanf("%d", &quantidade);

            if (lado == DIREITA && direcao == CIMA){
                while (quantidade-- > 0) printf("Cima, Direita.\n");
            }
            else if (lado == ESQUERDA && direcao == CIMA){
                while (quantidade-- > 0) printf("Cima, Esquerda.\n");
            }
            else if (lado == DIREITA && direcao == BAIXO){
                while (quantidade-- > 0) printf("Baixo, Direita.\n");
            }
            else if (lado == ESQUERDA && direcao == BAIXO){
                while (quantidade-- > 0) printf("Baixo, Esquerda.\n");
            }
            else {
                printf("Movimento inválido para a Rainha na diagonal!\n");
            }
        }
        else if (diagonal == 2){ // Movimento em linha reta
            printf("Digite o lado que deseja se mover (1-Direita, 2-Esquerda, 3-Cima, 4-Baixo): ");
            scanf("%d", &lado);
            printf("Digite a quantidade de casas que deseja se mover: ");
            scanf("%d", &quantidade);

            if (lado == DIREITA){
                while (quantidade-- > 0) printf("Direita.\n");
            }
            else if (lado == ESQUERDA){
                while (quantidade-- > 0) printf("Esquerda.\n");
            }
            else if (lado == CIMA){
                while (quantidade-- > 0) printf("Cima.\n");
            }
            else if (lado == BAIXO){
                while (quantidade-- > 0) printf("Baixo.\n");
            }
            else {
                printf("Movimento inválido para a Rainha em linha reta!\n");
            }
        }
        else {
            printf("Opção inválida para movimento da Rainha!\n");
        }
    }

    // ==================== PEÇA INVÁLIDA ====================
    else {
        printf("Peça inválida!\n");
    }

    return 0;
}
