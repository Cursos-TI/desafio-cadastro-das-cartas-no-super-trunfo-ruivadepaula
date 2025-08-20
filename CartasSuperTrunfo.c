#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];         // 3 chars + '\0'  (ex: A01)
    char nomeCidade1[100];   // espaço suficiente
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ----- Entrada Carta 1 -----
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);                 // <--- espaço antes de %c (ignora ENTERs)
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);                 // <--- limita a 3 chars
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade1);        // <--- lê até a quebra de linha, com limite
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ----- Entrada Carta 2 -----
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);                 // idem: espaço antes do %c
    printf("Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ----- Saída -----
printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %d habitantes\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

printf("=== Carta 2 ===\n");
printf("estado: %c\n", estado2);
printf("codigo: %s\n", codigo2);
printf("nome da cidade: %s\n", nomeCidade2);
printf("populacao: %d habitantes\n", populacao2);
printf("area: %.2f km²\n", area2);
printf("pib: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    
    return 0;

}
