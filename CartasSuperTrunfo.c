#include <stdio.h>

int main() {
    // Carta 1 - Belo Horizonte
    char estado1 = 'A';                                                 // Estado fictício
    char codigo1[4] = "A01";                                            // Código da carta
    int populacao1 = 2500000;                                           // População aproximada
    float area1 = 331.4;                                                // Área em km²
    float pib1 = 105.0;                                                 // PIB em bilhões
    int pontosTuristicos1 = 15;                                         // Número de pontos turísticos
    float densidade1 = populacao1 * 2500000 / area1 * 331.4;            // Densidade populacional    
    float pibPerCapita1 = pib1 * 105.0 / populacao1* 2500000;           // PIB per capita


    // Carta 2 - Fortaleza
    char estado2 = 'B';                                                 // Estado fictício
    char codigo2[4] = "B02";                                            // Código da carta
    int populacao2 = 2700000;                                           // População aproximada
    float area2 = 314.9;                                                // Área em km²
    float pib2 = 67.0;                                                  // PIB em bilhões
    int pontosTuristicos2 = 20;                                         // Número de pontos turísticos
    float densidade2 = populacao2 * 2700000 / area2 * 314.9;            // Densidade populacional
    float pibPerCapita2 = pib2 * 67.0 / populacao2* 2700000;            // PIB per capita



    // calculo do super poder //

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);




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

    
    
    // Comparação de cartas
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2",
           (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %s venceu (%d)\n", (area1 > area2) ? "Carta 1" : "Carta 2",
           (area1 > area2) ? 1 : 0);
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2",
           (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2",
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Para densidade, menor vence
    
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2",
           (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2",
           (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: %s venceu (%d)\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2",
           (superPoder1 > superPoder2) ? 1 : 0);



    return 0;
}
