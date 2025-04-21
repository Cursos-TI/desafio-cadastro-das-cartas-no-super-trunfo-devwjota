#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");  // Define a localidade para UTF-8

    int codigo;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Cadastro de Cidade ===\n");

    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);  // Lê a string com espaços

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n=== Carta da Cidade Cadastrada ===\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
