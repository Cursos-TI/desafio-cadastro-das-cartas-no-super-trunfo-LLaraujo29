#include <stdio.h>

int main() {
    // Carta 1 - Belo Horizonte
    char estado1 = 'A';                                                 // Estado fictício
    char codigo1[4] = "A01";                                            // Código da carta
    int populacao1 = 2500000;                                           // População aproximada
    double area1 = 331.4;                                                // Área em km²
    double pib1 = 105.0;                                                 // PIB em bilhões
    int pontosTuristicos1 = 15;                                         // Número de pontos turísticos
    double densidade1 = populacao1 / area1;                             // Densidade populacional    
    double pibPerCapita1 = (pib1 * 1000000000) / populacao1;            // PIB per capita em reais


    // Carta 2 - Fortaleza
    char estado2 = 'B';                                                 // Estado fictício
    char codigo2[4] = "B02";                                            // Código da carta
    int populacao2 = 2700000;                                           // População aproximada
    double area2 = 314.9;                                                // Área em km²
    double pib2 = 67.0;                                                  // PIB em bilhões
    int pontosTuristicos2 = 20;                                         // Número de pontos turísticos
    double densidade2 = populacao2 / area2;                             // Densidade populacional
    double pibPerCapita2 = (pib2 * 1000000000) / populacao2;            // PIB per capita em reais



    // Exibição da Carta 1
    printf("=== Dados da Carta 1 ===\n");
    printf("Cidade: Belo Horizonte\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);



    // Exibição da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Cidade: Fortaleza\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    


    return 0;
}
