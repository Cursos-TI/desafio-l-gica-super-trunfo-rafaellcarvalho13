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

    // ----- Exibição dos dados cadastrados -----
    printf("\nCarta 1: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea da Cidade: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n",
           Carta1, pais, codigo1, estado1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

     // ----- Cálculos derivados -----
    DensidadePopulacional1 = (float)populacao1 / area1;
    PIB_PC1 = pib1 / populacao1;

    // Super Poder = soma dos atributos + bônus por menor densidade
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

    // ----- Exibição dos dados cadastrados -----
    printf("\nCarta 2: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea da Cidade: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n",
           Carta2, pais, codigo2, estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);


    // ----- Cálculos derivados -----
    DensidadePopulacional2 = (float)populacao2 / area2;
    PIB_PC2 = pib2 / populacao2;

    SuperPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + PIB_PC2 + (1 / DensidadePopulacional2);

    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIB_PC2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // ============================================================
    // ===== COMPARAÇÃO DAS CATRTAS
    // ============================================================

    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }

    if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    if (PIB_PC1 > PIB_PC2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    if (SuperPoder1 > SuperPoder2) {
        printf("Super Poder: Carta 1 venceu\n");
        printf("Carta 1 é a vencedora!!\n");
        printf("Poder: %.2f\n", SuperPoder1);
    } else {
        printf("Super Poder: Carta 2 venceu\n");
        printf("Carta 2 é a vencedora!! \n");
        printf("Poder: %.2f\n", SuperPoder2);
        
    }

    return 0;
}