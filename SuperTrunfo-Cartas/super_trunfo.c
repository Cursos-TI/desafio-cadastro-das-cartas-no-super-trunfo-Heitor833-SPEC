#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeDaCidade1[20] = "Sao Paulo";
    int habitantes1 = 2000000;
    float areaKm2_1 = 1500.50;  // Ajuste a área para um valor mais realista
    float pib1 = 699.28;
    int pontosTuristicos1 = 105;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeDaCidade2[20] = "Rio de Janeiro";
    int habitantes2 = 1500000;
    float areaKm2_2 = 1200.75;  // Ajuste a área para um valor mais realista
    float pib2 = 350.75;
    int pontosTuristicos2 = 80;

    // Exibir Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f km²\n", areaKm2_1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibir Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", areaKm2_2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
