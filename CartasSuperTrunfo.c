#include <stdio.h>

int main() {

    char estado1[20];
    char CodigoA1[20];
    char Cidade1[20];
    unsigned long População1;
    float area1;
    float pib1;
    int Turismo1;
    double Densidade_Populacional1;
    double Pib_per_capita1;

    char estado2[20];
    char CodigoB2[20];
    char Cidade2[50];
    unsigned long População2;
    float area2;
    float pib2;
    int Turismo2;
    double Densidade_Populacional2;
    double Pib_per_capita2;

    printf("cadastre a primeira carta:\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%s", CodigoA1);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("Digite a População: ");
    scanf("%lu", &População1);

    printf("Digite a área (Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Turismo1);

    Densidade_Populacional1 = População1 / area1;
    printf("A densidade populacional da cidade é: %.2lf hab/km²\n\n", Densidade_Populacional1);

    Pib_per_capita1 = (pib1 * 1000000000.0) / População1;
    printf("O PIB per capita da cidade é: %.2lf reais\n\n", Pib_per_capita1);

    printf("cadastro da segunda carta:\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", CodigoB2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a População: ");
    scanf("%lu", &População2);

    printf("Digite a área (Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Turismo2);

    Densidade_Populacional2 = População2 / area2;
    printf("A densidade populacional da cidade é: %.2lf hab/km²\n\n", Densidade_Populacional2);

    Pib_per_capita2 = (pib2 * 1000000000.0) / População2;
    printf("O PIB per capita da cidade é: %.2lf reais\n\n", Pib_per_capita2);

    // -------- SUPER PODER --------
float SuperPoder1, SuperPoder2;

float inverso1 = (Densidade_Populacional1 != 0) ? (1.0 / Densidade_Populacional1) : 0;
float inverso2 = (Densidade_Populacional2 != 0) ? (1.0 / Densidade_Populacional2) : 0;

SuperPoder1 = População1 + area1 + pib1 + Turismo1 + Pib_per_capita1 + inverso1;
SuperPoder2 = População2 + area2 + pib2 + Turismo2 + Pib_per_capita2 + inverso2;


// -------- COMPARAÇÃO --------
printf("Comparação de Cartas:\n\n");

printf("População: Carta %d venceu (%d)\n\n",
       (População1 > População2) ? 1 : 2,
       População1 > População2);

printf("Área: Carta %d venceu (%d)\n\n",
       (area1 > area2) ? 1 : 2,
       area1 > area2);

printf("PIB: Carta %d venceu (%d)\n\n",
       (pib1 > pib2) ? 1 : 2,
       pib1 > pib2);

printf("Pontos Turísticos: Carta %d venceu (%d)\n\n",
       (Turismo1 > Turismo2) ? 1 : 2,
       Turismo1 > Turismo2);

printf("Densidade Populacional: Carta %d venceu (%d)\n\n",
       (Densidade_Populacional1 < Densidade_Populacional2) ? 1 : 2,
       Densidade_Populacional1 < Densidade_Populacional2);

printf("PIB per Capita: Carta %d venceu (%d)\n\n",
       (Pib_per_capita1 > Pib_per_capita2) ? 1 : 2,
       Pib_per_capita1 > Pib_per_capita2);

printf("Super Poder: Carta %d venceu (%d)\n\n",
       (SuperPoder1 > SuperPoder2) ? 1 : 2,
       SuperPoder1 > SuperPoder2);

    return 0;
}