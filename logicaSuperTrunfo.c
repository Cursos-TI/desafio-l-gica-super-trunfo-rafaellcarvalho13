#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

    // ==============================
    // DECLARAÇÃO DE VARIÁVEIS
    // ==============================
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, Carta1, Carta2;

    float pib1, pib2, area1, area2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIB_PC1, PIB_PC2;
    float SuperPoder1, SuperPoder2;

    char pais[50] = "Brasil";
    char codigo1[20], codigo2[20];
    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];

    int opcao;

    // ===== CARTA 1 =====
    printf("Escolha sua Carta: \n");
    scanf("%d", &Carta1);

    printf("Codigo: \n");
    scanf("%s", codigo1);

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área da Cidade: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 1: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea da Cidade: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n",
           Carta1, pais, codigo1, estado1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

    DensidadePopulacional1 = (float)populacao1 / area1;
    PIB_PC1 = pib1 / populacao1;

    SuperPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + PIB_PC1 + (1 / DensidadePopulacional1);

    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIB_PC1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // ===== CARTA 2 =====
    printf("\nEscolha sua Carta: \n");
    scanf("%d", &Carta2);

    printf("Codigo: \n");
    scanf("%s", codigo2);

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área da Cidade: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea da Cidade: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n",
           Carta2, pais, codigo2, estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    DensidadePopulacional2 = (float)populacao2 / area2;
    PIB_PC2 = pib2 / populacao2;

    SuperPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + PIB_PC2 + (1 / DensidadePopulacional2);

    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIB_PC2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // ============================================================
    // ===== MENU INTERATIVO DE COMPARAÇÃO
    // ============================================================

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch(opcao) {

        case 1:
            printf("Comparando População:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Populacional:\n");
            printf("%s: %.2f\n", cidade1, DensidadePopulacional1);
            printf("%s: %.2f\n", cidade2, DensidadePopulacional2);

            // REGRA INVERTIDA: menor vence
            if (DensidadePopulacional1 < DensidadePopulacional2)
                printf("Vencedor: %s\n", cidade1);
            else if (DensidadePopulacional2 < DensidadePopulacional1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f\n", cidade1, PIB_PC1);
            printf("%s: %.2f\n", cidade2, PIB_PC2);

            if (PIB_PC1 > PIB_PC2)
                printf("Vencedor: %s\n", cidade1);
            else if (PIB_PC2 > PIB_PC1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Comparando Super Poder:\n");
            printf("%s: %.2f\n", cidade1, SuperPoder1);
            printf("%s: %.2f\n", cidade2, SuperPoder2);

            if (SuperPoder1 > SuperPoder2)
                printf("Vencedor: %s\n", cidade1);
            else if (SuperPoder2 > SuperPoder1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}