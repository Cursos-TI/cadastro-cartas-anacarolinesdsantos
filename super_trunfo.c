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

    //Declaração da variavel para switch/case
    int atributo1;
    int atributo2;

    // Declaração para demais validações
    float valorCarta1_Attr1 = 0, valorCarta1_Attr2 = 0;
    float valorCarta2_Attr1 = 0, valorCarta2_Attr2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;
    char *nomeAttr1, *nomeAttr2; 

    // ------------------------------------------------

    // Entrada dos dados da primeira carta 
    printf("\n=== Carta 1 ===\n");
    printf("Digite o nome do estado (ex: S): \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta (ex: A1): \n");
    scanf("%s", &codCarta1);

    printf("Digite o nome da cidade (use _ para espaços, ex: Sao_Paulo): \n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade da população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o pib (em bilhões, ex: 1500.5): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nTuristico1);


    // Entrada dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Digite o nome do estado (ex: R): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B2): \n");
    scanf("%s", &codCarta2);

    printf("Digite o nome da cidade (use _ para espaços, ex: Rio_Janeiro): \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade da população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o pib (em bilhões, ex: 800.2): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nTuristico2);

    // Calculos para validações e comparações
    densidadePopul1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidadePopul2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;
    superPoder1 = (float)populacao1 + area1 + pib1 + nTuristico1 + pibPerCapita1 + ((densidadePopul1 > 0) ? (1.0f / densidadePopul1) : 0);
    superPoder2 = (float)populacao2 + area2 + pib2 + nTuristico2 + pibPerCapita2 + ((densidadePopul2 > 0) ? (1.0f / densidadePopul2) : 0);

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
    printf("Super Poder: %.2f\n", superPoder1);

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
    printf("Super Poder: %.2f\n", superPoder2);


    //Requisitos solicitados no trabalho

    // --- REQUISITO 1 e 5: ESCOLHA DO PRIMEIRO ATRIBUTO
    printf("\n\n=== DESAFIO SUPER TRUNFO ===\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. Nome da Cidade (Não pode ser somado)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turisticos\n");
    printf("6. Densidade Demográfica (Menor ganha)\n");
    printf("Digite sua opção (2-6): ");
    scanf(" %d", &atributo1); // Espaço para limpar buffer

    //Caso selecionado atributo inexistente OU o atributo 1
    while (atributo1 < 2 || atributo1 > 6) {
        if (atributo1 == 1) {
            printf("'Nome da Cidade' não é numérico e não pode ser somado. Escolha outro.\n");
        } else {
            printf("Opção inválida! Digite um número entre 2 e 6: ");
        }
        scanf(" %d", &atributo1);
    }

    // --- REQUISITO 1 e 5: MENU DINÂMICO PARA O SEGUNDO ATRIBUTO
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 6; i++) {
        // Pula o atributo já escolhido (atributo1) E o atributo 1
        if (i == atributo1 || i == 1) { 
            continue;
        }

        // Usa o switch (como pedido) para exibir as opções restantes
        switch (i) {
            // case 1 não será exibido
            case 2: printf("2. População\n"); break;
            case 3: printf("3. Área\n"); break;
            case 4: printf("4. PIB\n"); break;
            case 5: printf("5. Número de Pontos Turisticos\n"); break;
            case 6: printf("6. Densidade Demográfica (Menor ganha)\n"); break;
        }
    }

    printf("Digite sua opção: ");
    scanf(" %d", &atributo2);

    // Validação da entrada (deve ser 2-6 E diferente do atributo1)
    while (atributo2 < 2 || atributo2 > 6 || atributo2 == atributo1) {
        if (atributo2 == atributo1) {
            printf("Você não pode escolher o mesmo atributo! Tente novamente: ");
        } else if (atributo2 == 1) {
             printf("'Nome da Cidade' não é numérico. Escolha da lista acima: ");
        } else {
            printf("Opção inválida! Escolha da lista acima: ");
        }
        scanf(" %d", &atributo2);
    }

    // --- REQUISITO 2 e 4: BUSCAR VALORES E TRATAR EXCEÇÃO (SEM STRCMP) ---
    
    // Bloco 1 - Processa o ATRIBUTO 1 (cases 2 a 6)
    switch (atributo1) {
        // case 1 foi impedido pelo 'while'
        case 2: // População
            nomeAttr1 = "População";
            valorCarta1_Attr1 = (float)populacao1;
            valorCarta2_Attr1 = (float)populacao2;
            break;
        case 3: // Área
            nomeAttr1 = "Área (km²)";
            valorCarta1_Attr1 = area1;
            valorCarta2_Attr1 = area2;
            break;
        case 4: // PIB
            nomeAttr1 = "PIB (bilhões)";
            valorCarta1_Attr1 = pib1;
            valorCarta2_Attr1 = pib2;
            break;
        case 5: // Pontos Turísticos
            nomeAttr1 = "Pontos Turísticos";
            valorCarta1_Attr1 = (float)nTuristico1;
            valorCarta2_Attr1 = (float)nTuristico2;
            break;
        case 6: // Densidade Demográfica (REQUISITO 4: EXCEÇÃO)
            nomeAttr1 = "Densidade (Normalizada)";
            valorCarta1_Attr1 = (densidadePopul1 > 0) ? (1.0f / densidadePopul1) : 0;
            valorCarta2_Attr1 = (densidadePopul2 > 0) ? (1.0f / densidadePopul2) : 0;
            break;
    }

    // Bloco 2 - Processa o ATRIBUTO 2 (cases 2 a 6)
    switch (atributo2) {
        // case 1 foi impedido pelo 'while'
        case 2: // População
            nomeAttr2 = "População";
            valorCarta1_Attr2 = (float)populacao1;
            valorCarta2_Attr2 = (float)populacao2;
            break;
        case 3: // Área
            nomeAttr2 = "Área (km²)";
            valorCarta1_Attr2 = area1;
            valorCarta2_Attr2 = area2;
            break;
        case 4: // PIB
            nomeAttr2 = "PIB (bilhões)";
            valorCarta1_Attr2 = pib1;
            valorCarta2_Attr2 = pib2;
            break;
        case 5: // Pontos Turísticos
            nomeAttr2 = "Pontos Turísticos";
            valorCarta1_Attr2 = (float)nTuristico1;
            valorCarta2_Attr2 = (float)nTuristico2;
            break;
        case 6: // Densidade Demográfica (REQUISITO 4: EXCEÇÃO)
            nomeAttr2 = "Densidade (Normalizada)";
            valorCarta1_Attr2 = (densidadePopul1 > 0) ? (1.0f / densidadePopul1) : 0;
            valorCarta2_Attr2 = (densidadePopul2 > 0) ? (1.0f / densidadePopul2) : 0;
            break;
    }
    
    // --- REQUISITO 3: SOMA DOS ATRIBUTOS ---
    somaCarta1 = valorCarta1_Attr1 + valorCarta1_Attr2;
    somaCarta2 = valorCarta2_Attr1 + valorCarta2_Attr2;


    // --- REQUISITO 7: EXIBIÇÃO CLARA DO RESULTADO ---
    printf("\n\n--------------------------------------\n");
    printf("--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("--------------------------------------\n");
    printf("Cartas: %s (Carta 1) vs %s (Carta 2)\n", cidade1, cidade2);
    printf("Atributos: %s e %s\n", nomeAttr1, nomeAttr2); 

    printf("\n--- %s (Carta 1) ---\n", cidade1);
    printf("%s: %.2f\n", nomeAttr1, valorCarta1_Attr1);
    printf("%s: %.2f\n", nomeAttr2, valorCarta1_Attr2);
    printf("SOMA TOTAL: %.2f\n", somaCarta1);

    printf("\n--- %s (Carta 2) ---\n", cidade2);
    printf("%s: %.2f\n", nomeAttr1, valorCarta2_Attr1);
    printf("%s: %.2f\n", nomeAttr2, valorCarta2_Attr2);
    printf("SOMA TOTAL: %.2f\n", somaCarta2);

    // --- REQUISITO 3 e 5: TRATAMENTO DE EMPATES E VENCEDOR (COM OPERADOR TERNÁRIO) ---
    printf("\n--------------------------------------\n");
    printf("--- VEREDITO FINAL ---\n");
    
    if (somaCarta1 == somaCarta2) {
        printf("Resultado: EMPATE!\n");
    } else {
        // Uso do operador ternário para definir o vencedor
        char* vencedor = (somaCarta1 > somaCarta2) ? cidade1 : cidade2;
        printf("O VENCEDOR É: %s!\n", vencedor);
    }
    printf("--------------------------------------\n");
    
    return 0;
}