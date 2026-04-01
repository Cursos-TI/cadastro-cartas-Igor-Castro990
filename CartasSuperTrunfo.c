#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
// Nomeando as variaveis das Carta A
char estado1[20];
char CodigoA1[20];
char Cidade1[20];
int População1;
float area1;
float pib1;
int Turismo1;

// Nomeando as variasveis da Carta B
char estado2[20];
char CodigoB2[20];
char Cidade2[50];
int População2;
float area2;
float pib2;
int Turismo2;

// Entrada de dados da Carta A

printf("cadastre a primeira carta:\n");

printf("Digite o estado1:\n");
scanf("%s", estado1);

printf("Digite o CodigoA1:\n");
scanf("%s", CodigoA1);

printf("Digite o Cidade1:\n");
scanf("%s", Cidade1);

printf("Digite o População1:\n");
scanf("%d", &População1);

printf("Digite o area1:\n");
scanf("%f", &area1);

printf("Digite o pib1:\n");
scanf("%f", &pib1);

printf("Digite o Turismo1:\n");
scanf("%d", &Turismo1);

printf("estado1:, %s\n", estado1);
printf("CodigoA1:, %s\n", CodigoA1);
printf("Cidade1:, %s\n", Cidade1);
printf("População1:, %d\n", População1);
printf("area1:, %.2f\n", area1);
printf("pib1:, %.2f\n", pib1);
printf("Turismo1:, %d\n", Turismo1);

// Entrada de dados da Carta 

printf("cadastre a segunda carta:\n");

printf("Digite o estado2:\n");
scanf("%s", estado2);

printf("Digite o CodigoB2:\n");
scanf("%s", CodigoB2);

printf("Digite o Cidade2:\n");
scanf("%s", Cidade2);

printf("Digite o População2:\n");
scanf("%d", &População2);

printf("Digite o area2:\n");
scanf("%f", &area2);

printf("Digite o pib2:\n");
scanf("%f", &pib2);

printf("Digite o Turismo2:\n");
scanf("%d", &Turismo2);

printf("estado2:, %s\n", estado2);
printf("CodigoB2:, %s\n", CodigoB2);
printf("Cidade2:, %s\n", Cidade2);
printf("População2:, %d\n", População2);
printf("area2:, %.2f\n", area2);
printf("pib2:, %.2f\n", pib2);
printf("Turismo2:, %d\n", Turismo2);






return 0;



} 