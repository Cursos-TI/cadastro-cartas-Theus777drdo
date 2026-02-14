#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[50];
  char codigoDaCarta1[50];
  char nomeDaCidade1[50];
  int populacao1;
  float area1;
  float PIB1;
  int NumeroDePontosTuristicos1;

  char estado2[50];
  char codigoDaCarta2[50];
  char nomeDaCidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int NumeroDePontosTuristicos2;

  // Área para entrada de dados

  printf("Agora veremos a primeira carta a ser jogada!!! \n");

  printf("Qual o estado? \n");
  scanf("%49s", estado1);

  printf("Qual o código dela? \n");
  scanf("%49s", codigoDaCarta1);

  printf("Qual o nome da cidade? \n");
  scanf("%49s", nomeDaCidade1);
  fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin); // Limpa o buffer do teclado

  printf("Quantas pessoas moram lá? \n");
  scanf("%d", &populacao1);

  printf("Qual o tamanho dela em metros quadrados? \n");
  scanf("%f", &area1);

  printf("Qual o seu PIB? \n");
  scanf("%f", &PIB1);

  printf("Quantos pontos turisticos tem nela? \n");
  scanf("%d", &NumeroDePontosTuristicos1);

  // Segunda carta agora

  printf("Agora veremos a segunda carta a ser jogada!!! \n");

  printf("Qual o estado? \n");
  scanf("%49s", estado2);

  printf("Qual o código dela? \n");
  scanf("%49s", codigoDaCarta2);

  printf("Qual o nome da cidade? \n");
  scanf("%49s", nomeDaCidade2);
  fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin); // Limpa o buffer do teclado

  printf("Quantas pessoas moram lá? \n");
  scanf("%d", &populacao2);

  printf("Qual o tamanho dela em metros quadrados? \n");
  scanf("%f", &area2);

  printf("Qual o seu PIB? \n");
  scanf("%f", &PIB2);

  printf("Quantos pontos turisticos tem nela? \n");
  scanf("%d", &NumeroDePontosTuristicos2);

  // Área para exibição dos dados da cidade

  printf("--- Dados da Carta 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Cidade: %s\n", nomeDaCidade1);
  printf("População: %d\n", populacao1);
  printf("Tamanho: %.2f m²\n", area1);
  printf("PIB: %.2f\n", PIB1);
  printf("Pontos Turísticos: %d\n\n", NumeroDePontosTuristicos1);
  
  printf("--- Dados da Carta 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Cidade: %s\n", nomeDaCidade2);
  printf("População: %d\n", populacao2);
  printf("Tamanho: %.2f m²\n", area2);
  printf("PIB: %.2f\n", PIB2);
  printf("Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);
  


  return 0;
}
