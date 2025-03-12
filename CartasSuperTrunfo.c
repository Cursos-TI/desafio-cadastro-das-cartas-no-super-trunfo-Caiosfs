#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char codcard = 'A';
    char cdd_cod1[6];
    char cdd1[50];
    int pop1;
    int turis1;
    float area1;
    float pib1; 
    
    char codcard = 'B';
    char cdd_cod2[6];
    char cdd2[50];
    int pop2;
    int turis2;
    float area2;
    float pib2;
    
    printf("Cadastro de Cartas.");

    printf("Código da Cidade: ");
    scanf("%s", cdd_cod1);

    printf("Cidade: ");
    scanf("%s", cdd1);

    printf("População: ");
    scanf("%d", &pop1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("Pontos Turisticos: ");
    scanf("%d", &turis1);

    printf("")
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
