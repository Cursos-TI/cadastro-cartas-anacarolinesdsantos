#include <stdio.h>

int main () {

    // Declaração das variáveis da carta 1
    char estado1;
    char codCarta1 [4];
    char cidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int nTuristico1;
    float densidadePopul1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codCarta2 [4];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int nTuristico2;
    float densidadePopul2;
    float pibPerCapita2;
    float superPoder2;


    // Entrada dos dados da primeira carta 
    printf("\n=== Carta 1 ===\n");
    printf("Digite o nome do estado: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade da população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nTuristico1);


    // Entrada dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade da população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nTuristico2);


    // Calculo da Densidade Populacional primeira carta
    densidadePopul1 = populacao1/area1;

    // Calculo da Densidade Populacional primeira carta
    densidadePopul2 = populacao2/area2;

    // Calculo da PIB Per Capita primeira carta
    pibPerCapita1 = (pib1 * 1000000000)/populacao1;

    // Calculo da PIB Per Capita segunda carta
    pibPerCapita2 = (pib2 * 1000000000)/populacao2;

    //Calculo Super Poder primeira carta
    superPoder1 = (float)populacao1 + area1 + pib1 + nTuristico1 + pibPerCapita1 + (1.0f / densidadePopul1);

    //Calculo Super Poder segunda carta
    superPoder2 = (float)populacao2 + area2 + pib2 + nTuristico2 + pibPerCapita2 + (1.0f / densidadePopul2);

    // Exibição dos dados da primeira carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", nTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopul1);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %f\n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopul2);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %f\n", superPoder2);

    //Comparações
        //População
        if (populacao1 > populacao2){
            printf ("População: Carta 1 venceu (1)\n");
        }
        else {
            printf ("População: Carta 2 venceu (0)\n");
        }

        //Área
        if (area1 > area2){
            printf ("Área: Carta 1 venceu (1)\n");
        }
        else {
            printf ("Área: Carta 2 venceu (0)\n");
        }

        //PIB
        if (pib1 > pib2){
            printf ("PIB: Carta 1 venceu (1)\n");
        }
        else {
            printf ("PIB: Carta 2 venceu (0)\n");
        }

        //Ponto Turisticos
        if (nTuristico1 > nTuristico2){
            printf ("Pontos Turísticos: Carta 1 venceu (1)\n");
        }
        else {
            printf ("Pontos Turísticos: Carta 2 venceu (0)\n");
        }

        //Densidade Populacional
        if (densidadePopul1 < densidadePopul2) {
            printf ("Densidade Populacional: Carta 1 venceu (1)\n");
        }
        else {
            printf ("Densidade Populacional: Carta 2 venceu (0)\n");
        }
        
        //Super Poder
        if (superPoder1 > superPoder2) {
            printf ("Super Poder: Carta 1 venceu (1)\n");
        }
        else {
            printf ("Super Poder: Carta 2 venceu (0)\n");
        }


    return 0;
}