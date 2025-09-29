#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1[15] = "Minas Gerais";
    char estado2[15] = "Espirito Santo";
    char codigo1[5] = "AB01", codigo2[5] = "CD02", cidade1[15] = "Belo Horizonte", cidade2[15] = "Vitoria";
    int populacao1 = 2315560, populacao2 = 322869, turismo1 = 40, turismo2 = 25;
    float area1 = 331.4, area2 = 93.38, pib1 = 105.3, pib2 = 31.42, densidade1, densidade2, pibpercapita1, pibpercapita2;
    int opcao1, opcao2, opcao3;
    float atributo1, atributo2;

    printf("****Bem vindo ao jogo de cartas Trunfo!****\n");
    printf("* Digite 1 para jogar\n");
    printf("* Digite 2 para ver as regras\n");
    printf("* Digite 3 para sair\n");
    scanf("%d", &opcao1);

    if (opcao1 == 2) {
        printf("Regras do jogo:\n");
        printf("1. Cada jogador recebe uma carta com informações sobre um estado brasileiro.\n");
        printf("2. Os jogadores escolhem um atributo para comparar (População, Área, PIB, Pontos Turísticos, Densidade Demográfica, PIB per capita).\n");
        printf("3. O jogador com o maior valor no atributo escolhido vence a rodada.\n");
        printf("4. O jogo continua até que todas as cartas sejam comparadas.\n");
        return 0;
    } else if (opcao1 == 3) {
        printf("Saindo do jogo. Até a próxima!\n");
        return 0;
    }
    
    printf("\nSua carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);
    densidade1 = populacao1 / area1;
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade1);
    pibpercapita1 = (pib1 * 1e9) / populacao1; // 1e9 = Convertendo PIB de bilhões para reais
    printf("PIB per capita: %.2f reais\n", pibpercapita1);

    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9) / populacao2;//Calculando antes para o atributo2 não ficar zerado.

    scanf("%d", &opcao2);
    switch (opcao2) {
        case 1:
            atributo1 = populacao1;
            atributo2 = populacao2;
            printf("Você escolheu comparar População.\n");
            break;
        case 2:
            atributo1 = area1;
            atributo2 = area2;
            printf("Você escolheu comparar Área.\n");
            break;
        case 3:
            atributo1 = pib1;
            atributo2 = pib2;
            printf("Você escolheu comparar PIB.\n");
            break;
        case 4:
            atributo1 = turismo1;
            atributo2 = turismo2;
            printf("Você escolheu comparar Pontos Turísticos.\n");
            break;
        case 5:
            atributo1 = densidade1;
            atributo2 = densidade2;
            printf("Você escolheu comparar Densidade Demográfica.\n");
            break;
        case 6:
            atributo1 = pibpercapita1;
            atributo2 = pibpercapita2;
            printf("Você escolheu comparar PIB per capita.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            return 0;
    }

    printf("\nCarta do computador:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turismo2);
    densidade2 = populacao2 / area2;
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade2);
    pibpercapita2 = (pib2 * 1e9) / populacao2; // 1e9 = Convertendo PIB de bilhões para reais
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

    if (opcao2 == 5) { // densidade
        if (atributo1 < atributo2) {
            printf("\nVocê venceu! Sua densidade %.2f é menor.\n", atributo1);
        } else if (atributo1 > atributo2) {
            printf("\nO computador venceu! A densidade dele %.2f é menor.\n", atributo2);
        } else {
            printf("Empate!\n");
        }
    } else { // demais atributos (quanto maior melhor)
        if (atributo1 > atributo2) {
            printf("\nVocê venceu! Seu valor %.2f é maior.\n", atributo1);
        } else if (atributo1 < atributo2) {
            printf("\nO computador venceu! O valor dele %.2f é maior.\n", atributo2);
        } else {
            printf("\nEmpate!\n");
        }
    }

    return 0;
}