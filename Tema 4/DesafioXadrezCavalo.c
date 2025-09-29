#include <stdio.h>

int main(){
int cavalo;
char direcao, lado;
printf("Digite a direcao (C para cima ou B para baixo): ");
scanf(" %c", &direcao);
printf("Digite o lado (E para esquerda ou D para direita): ");
scanf(" %c", &lado);

// Movimentos do cavalo
// Cima Esquerda
if(direcao == 'C' || direcao == 'c'){
    if(lado == 'E' || lado == 'e'){
        for(cavalo = 1; cavalo<=2; cavalo++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
// Cima Direita
    } else if(lado == 'D' || lado == 'd'){
        for(cavalo = 1; cavalo<=2; cavalo++){
            printf("Cima\n");
        }
        printf("Direita\n");
    } else {
        printf("Lado invalido!\n");
    }
// Baixo Esquerda
} else if(direcao == 'B' || direcao == 'b'){
    if(lado == 'E' || lado == 'e'){
        for(cavalo = 1; cavalo<=2; cavalo++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
// Baixo Direita
    } else if(lado == 'D' || lado == 'd'){
        for(cavalo = 1; cavalo<=2; cavalo++){
            printf("Baixo\n");
        }
        printf("Direita\n");
    } else {
        printf("Lado invalido!\n");
    }
} else {
    printf("Direcao invalida!\n");
}

return 0;
}