#include <stdio.h>

int main() {
    char estado1[15] = "Minas Gerais";
    char estado2[15] = "Espirito Santo";
    char codigo1[5] = "AB01", codigo2[5] = "CD02", cidade1[15] = "Belo Horizonte", cidade2[15] = "Vitoria";
    int populacao1 = 2315560, populacao2 = 322869, turismo1 = 40, turismo2 = 25;
    float area1 = 331.4, area2 = 93.38, pib1 = 105.3, pib2 = 31.42, densidade1, densidade2, pibpercapita1, pibpercapita2;

    
    // Exibição
    printf("\nCarta 1:\n");
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

    printf("\nCarta 2:\n");
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

    if (pib1 > pib2) {
        printf("\nA carta 1 tem o maior PIB.\n");
    } else if (pib1 < pib2) {
        printf("\nA carta 2 tem o maior PIB.\n");
    } else {
        printf("\nAmbas as cartas têm o mesmo PIB.\n");
    }

    return 0;
}
