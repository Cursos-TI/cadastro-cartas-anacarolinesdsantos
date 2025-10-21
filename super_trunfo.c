#include <stdio.h>

int main () {

    // Declaração das variáveis da carta 1
    char estado1;
    char codCarta1 [4];
    char cidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int nTuristico1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codCarta2 [4];
    char cidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int nTuristico2;


    // Entrada dos dados da primeira carta  
    printf("Digite o nome do estado: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Diogite a quantidade da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nTuristico1);


    // Entrada dos dados da segunda carta  
    printf("Digite o nome do estado: \n");
    scanf("%c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Diogite a quantidade da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nTuristico2);


    // Exibição dos dados da primeira carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", nTuristico1);

    // Exibição dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nTuristico2);

    return 0;
}