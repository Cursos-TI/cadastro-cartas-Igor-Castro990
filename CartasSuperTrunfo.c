#include <stdio.h>

int main() {

    // CARTA 1
    char estado1[20];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float pib_per_capita1;

    // CARTA 2
    char estado2[20];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float pib_per_capita2;

    // =============================
    // CADASTRO CARTA 1
    // =============================
    printf("Cadastro da Carta 1:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turismo1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // =============================
    // CADASTRO CARTA 2
    // =============================
    printf("\nCadastro da Carta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turismo2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // =============================
    // EXIBIR DADOS CALCULADOS
    // =============================
    printf("\nDensidade Populacional Carta 1: %.2f\n", densidade1);
    printf("PIB per capita Carta 1: %.2f\n", pib_per_capita1);

    printf("Densidade Populacional Carta 2: %.2f\n", densidade2);
    printf("PIB per capita Carta 2: %.2f\n", pib_per_capita2);

    // ==================================================
    // ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO:
    // POPULAÇÃO
    // (pode trocar para area, pib, densidade ou pib_per_capita)
    // ==================================================

    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");

    printf("Carta 1 - %s (%s): %d\n",
           cidade1, estado1, populacao1);

    printf("Carta 2 - %s (%s): %d\n\n",
           cidade2, estado2, populacao2);

    // Resultado
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}