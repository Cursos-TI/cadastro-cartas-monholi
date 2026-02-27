#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigo [5];
    char codigo2 [5];
    char cidade [50];
    char cidade2 [50];
    int populacao, populacao2, pontoturistico, pontoturistico2;
    float area, area2, pib, pib2;

// Área para entrada de dados


//Entrada de dados para a carta de número 1
    printf("Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  \n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04:  \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade:  \n");
    scanf(" %s", cidade);

    printf("Digite o número de habitantes da cidade:  \n");
    scanf(" %i", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados:  \n");
    scanf(" %f", &area);

    printf("Digite o Produto Interno Bruto da cidade:  \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %i", &pontoturistico);


//Entrada de dados para a carta de número 2
    printf("Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04:  \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:  \n");
    scanf(" %s", cidade2);

    printf("Digite o número de habitantes da cidade:  \n");
    scanf(" %i", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:  \n");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto da cidade:  \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade:  \n");
    scanf(" %i", &pontoturistico2);


//Exibição da carta número 1
    printf("Carta 1\n"); 
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %i \n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais.\n", pib);
    printf("Número de Pontos Turísticos: %i\n\n", pontoturistico);

//Exibição da carta número 2
    printf("Carta 2\n"); 
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais.\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontoturistico2);


    return 0;

} 
