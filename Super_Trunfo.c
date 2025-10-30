#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação de Cartas com Estruturas de Decisão

int main() {
    // Variáveis para a Carta 1
    char estado1[2];     // uma letra de A a H
    char codigo1[3];     // uma letra representando o estado + 2 numeros (A01, A02...)
    char cidade1[11];    // até 10 letras  
    int populacao1;      // digitar sem pontos ou virgulas
    float area1;         // digitar sem pontos ou virgulas   
    float pib1;          // digitar sem pontos ou virgulas
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2[2];     // uma letra de A a H
    char codigo2[3];     // uma letra representando o estado + 2 numeros (B01, B02...)
    char cidade2[11];    // até 10 letras  
    int populacao2;      // digitar sem pontos ou virgulas
    float area2;         // digitar sem pontos ou virgulas   
    float pib2;          // digitar sem pontos ou virgulas
    int pontos_turisticos2;
  
    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1: \n");
    printf("Estado (uma letra de A a H representando o estado): ");
    scanf(" %c", estado1);   
    printf("Código da Carta (letra que representa o estado + 2 numeros): ");
    scanf(" %3s", codigo1);   
    printf("Nome da Cidade (sem espaços): ");
    scanf(" %10s", cidade1); 
    printf("População (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %d", &populacao1);
    printf("Área em km² (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %f", &area1);
    printf("PIB em bilhões de reais (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2: \n");
    printf("Estado (uma letra de A a H representando o estado): ");
    scanf(" %c", estado2);
    printf("Código da Carta (letra que representa o estado + 2 numeros): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade (sem espaços): ");
    scanf(" %10s", cidade2);
    printf("População (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %d", &populacao2);
    printf("Área em km² (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %f", &area2);
    printf("PIB em bilhões de reais (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);  

    // COMPARAÇÃO ENTRE AS DUAS CARTAS (Atributo: População)
    printf("\n--- COMPARAÇÃO DE CARTAS (Atributo: População) ---\n");

    if (populacao1 > populacao2) {
        printf("\nCarta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("\nCarta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("\nCarta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
        printf("Resultado: Empate!\n");
    }

    return 0;
}