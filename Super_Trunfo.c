#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Variáveis para a Carta 1
    char estado1[11];    // até 10 letras
    char codigo1[3];     // uma letra + 2 numeros (A01, A02...)
    char cidade1[11];    // até 10 letras  
    int populacao1;      // digitar sem pontos ou virgulas
    float area1;         // digitar sem pontos ou virgulas   
    float pib1;          // digitar sem pontos ou virgulas
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2[11];    // até 10 letras
    char codigo2[3];     // uma letra + 2 numeros (B01, B02...)
    char cidade2[11];    // até 10 letras  
    int populacao2;      // digitar sem pontos ou virgulas
    float area2;         // digitar sem pontos ou virgulas   
    float pib2;          // digitar sem pontos ou virgulas
    int pontos_turisticos2;
  
    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1: \n");
    printf("Estado (até 10 letras, sem espaços): ");
    scanf(" %10s", estado1);   
    printf("Código da Carta (uma letra + 2 numeros): ");
    scanf(" %4s", codigo1);   
    printf("Nome da Cidade (sem espaços): ");
    scanf(" %29s", cidade1); 
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
    printf("Estado (até 10 letras, sem espaços): ");
    scanf(" %20s", estado2);
    printf("Código da Carta (uma letra + 2 numeros): ");
    scanf(" %4s", codigo2);
    printf("Nome da Cidade (sem espaços): ");
    scanf(" %29s", cidade2);
    printf("População (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %d", &populacao2);
    printf("Área em km² (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %f", &area2);
    printf("PIB em bilhões de reais (apenas numeros, sem pontos ou virgulas): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Exibição dos dados das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);  

    return 0;
}