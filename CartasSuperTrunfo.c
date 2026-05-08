#include <stdio.h>

int main() {

    // CARTA 1
    char estado1[20];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int turismo1;
    float densidade1, pib_per_capita1;

    // CARTA 2
    char estado2[20];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int turismo2;
    float densidade2, pib_per_capita2;

    int opcao;

    // =============================
    // CADASTRO CARTA 1
    // =============================
    printf("Cadastro da Carta 1:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &turismo1);

    // Cálculos
    densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    pib_per_capita1 = (populacao1 != 0) ? (pib1 * 1000000000) / populacao1 : 0;

    printf("Densidade: %.2f | PIB per capita: %.2f\n\n", densidade1, pib_per_capita1);

    // =============================
    // CARTA 2
    // =============================
    printf("Cadastro da Carta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &turismo2);

    // Cálculos
    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 != 0) ? (pib2 * 1000000000) / populacao2 : 0;

    printf("Densidade: %.2f | PIB per capita: %.2f\n\n", densidade2, pib_per_capita2);

    // =============================
    // MENU
    // =============================
    printf("===== MENU DE COMPARACAO =====\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n==============================\n");

    // =============================
    // COMPARAÇÃO
    // =============================
    switch (opcao) {

        case 1:
            printf("Comparacao (Populacao):\n\n");
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparacao (Area):\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f\n\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparacao (PIB):\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f\n\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparacao (Turismo):\n\n");
            printf("Carta 1 - %s: %d\n", cidade1, turismo1);
            printf("Carta 2 - %s: %d\n\n", cidade2, turismo2);

            if (turismo1 > turismo2)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            else if (turismo2 > turismo1)
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparacao (Densidade):\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparacao (PIB per Capita):\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib_per_capita1);
            printf("Carta 2 - %s: %.2f\n\n", cidade2, pib_per_capita2);

            if (pib_per_capita1 > pib_per_capita2)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}