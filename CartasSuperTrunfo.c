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

// Entrada e Saida da Carta 1

printf("cadastre a primeira carta:\n");

printf("Digite o estado:");
scanf("%s", estado1);
printf("O estado digitado foi: %s\n\n", estado1);

printf("Digite o Codigo da carta:");
scanf("%s", CodigoA1);
printf("O CodigoA1 digitado foi: %s\n\n", CodigoA1);

printf("Digite a Cidade:");
scanf(" %[^\n]", Cidade1); //Lê a linha inteira, incluindo espaços
printf("A cidade digitada foi: %s\n\n", Cidade1);

printf("Digite o População:");
scanf("%d", &População1);
printf("A população digitada foi: %d\n\n", População1);

printf("Digite o área (Km²): ");
scanf("%f", &area1);
printf("A área digitada foi: %.2fkm²\n\n", area1);

printf("Digite o pib:\n");
scanf("%f", &pib1);
printf("O PIB digitado foi: %.2f\n\n", pib1);


printf("Digite o número de pontos turísticos:");
scanf("%d", &Turismo1);
printf("O número de pontos turísticos digitado foi: %d\n\n", Turismo1);

// Entrada e saida da Carta 2
printf("cadastro da segunda carta:\n");

printf("Digite o estado:");
scanf("%s", &estado2); //adiciona um espaço antes do %s para consumir o caractere de nova linha
printf("O estado digitado foi: %s\n\n", estado2);

printf("Digite o Codigo da carta:");
scanf("%s", CodigoB2);
printf("O CodigoB2 digitado foi: %s\n\n", CodigoB2);

printf("Digite o nome da Cidade:");
scanf(" %[^\n]", Cidade2); //Lê a linha inteira, incluindo espaços
printf("A cidade digitada foi: %s\n\n", Cidade2);

printf("Digite o População:");
scanf("%d", &População2);
printf("A população digitada foi: %d\n\n", População2);

printf("Digite o área (Km²): ");
scanf("%f", &area2);
printf("A área digitada foi: %.2fkm²\n\n", area2);

printf("Digite o PIB:");
scanf("%f", &pib2);
printf("O PIB digitado foi: %.2f\n\n", pib2);

printf("Digite o número de pontos turísticos:");
scanf("%d", &Turismo2);
printf("O número de pontos turísticos digitado foi: %d\n\n", Turismo2);

printf("---Comparação entre as cartas---\n");

return 0;





} 