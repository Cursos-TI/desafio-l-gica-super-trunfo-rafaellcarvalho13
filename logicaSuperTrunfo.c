#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Desafio Super Trunfo - Países

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

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

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
    // ===== NÍVEL MESTRE - DOIS ATRIBUTOS
    // ============================================================

    printf("\n===== ESCOLHA DO PRIMEIRO ATRIBUTO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    printf("\n===== ESCOLHA DO SEGUNDO ATRIBUTO =====\n");
    printf("Escolha um atributo diferente do primeiro.\n");
    printf("Escolha: ");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2) {
        printf("Erro: atributos iguais não são permitidos!\n");
        return 0;
    }

    switch(atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = 1 / DensidadePopulacional1; valor1_c2 = 1 / DensidadePopulacional2; break;
        case 6: valor1_c1 = PIB_PC1; valor1_c2 = PIB_PC2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch(atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = 1 / DensidadePopulacional1; valor2_c2 = 1 / DensidadePopulacional2; break;
        case 6: valor2_c1 = PIB_PC1; valor2_c2 = PIB_PC2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s - Soma: %.2f\n", cidade1, soma1);
    printf("%s - Soma: %.2f\n", cidade2, soma2);

    (soma1 > soma2) ?
        printf("Vencedor: %s\n", cidade1) :
        (soma2 > soma1) ?
            printf("Vencedor: %s\n", cidade2) :
            printf("Empate!\n");

    return 0;
}