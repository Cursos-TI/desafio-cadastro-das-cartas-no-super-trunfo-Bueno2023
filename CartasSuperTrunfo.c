#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo_carta1[10];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    // Dados da Carta 2
    char estado2;
    char codigo_carta2[10];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    // Entrada de Dados para a Carta 1
    printf("Carta 1: \n");

    printf("Qual o estado (A-H): \n");
    scanf(" %c", &estado1); // Note o espaço antes de %c para consumir espaços em branco

    printf("Qual o código da carta (ex: A01): \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", nome_cidade1); // Lê até a nova linha

    printf("Qual a quantidade da população: \n");
    scanf("%d", &populacao1);

    printf("Qual o tamanho da área (em km²): \n");
    scanf("%f", &area1);

    printf("Qual o PIB (em bilhões de reais): \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);
    getchar(); // Limpa o buffer do teclado

    // Entrada de Dados para a Carta 2
    printf("\nCarta 2: \n");

    printf("Qual o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta (ex: B02): \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", nome_cidade2);

    printf("Qual a quantidade da população: \n");
    scanf("%d", &populacao2);

    printf("Qual o tamanho da área (em km²): \n");
    scanf("%f", &area2);

    printf("Qual o PIB (em bilhões de reais): \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Impressão dos Dados das Cartas
    printf("\nDados da Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);

    printf("\nDados da Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

    return 0;
}
