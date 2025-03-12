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

    printf("Cadastro de Cartas.");

    printf("Código da Cidade: ");
    scanf("%s", cdd_cod2);

    printf("Cidade: ");
    scanf("%s", cdd2);

    printf("População: ");
    scanf("%d", &pop2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("Pontos Turisticos: ");
    scanf("%d", &turis2);


    printf("Carta %c.\nCódigo da Cidade: %s\nCidade: %s\nPopulação: %d\nPIB: %.2f\nÁrea: %.2f km²\nPontos Turisticos: %d\n", cdd_cod1, cdd1, pop1, pib1, area1, turis1);
    printf("\nCarta %c.\nCódigo da Cidade: %s\nCidade: %s\nPopulação: %d\nPIB: %.2f\nÁrea: %.2f km²\nPontos Turisticos: %d\n", cdd_cod2, cdd2, pop2, pib2, area2, turis2);

    return 0;
}
