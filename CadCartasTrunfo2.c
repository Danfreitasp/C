#include <stdio.h>

int main() {
    char estado1[20], estado2[20], codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;

    // Carta Um
    printf("Digite o estado da carta 1: \n");
    scanf(" %19[^\n]", estado1);

    printf("Digite o código (ex: A01, B03): \n");
    scanf(" %3s", codigo1);

    printf("Digite a cidade da carta 1: \n");
    scanf(" %19[^\n]", cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1 em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da carta 1: \n");
    scanf("%d", &turismo1);

    // Carta Dois
    printf("Digite o estado da carta 2: \n");
    scanf(" %19[^\n]", estado2);

    printf("Digite o código (ex: A01, B03): \n");
    scanf(" %3s", codigo2);

    printf("Digite a cidade da carta 2: \n");
    scanf(" %19[^\n]", cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2 em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da carta 2: \n");
    scanf("%d", &turismo2);

    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turismo2);

    return 0;
}
