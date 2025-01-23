#include <stdio.h>

int main() {
    // Matrizes para armazenar as propriedades de cada carta
    int populacao[8][4];
    float area[8][4];
    float pib[8][4];
    int pontos_turisticos[8][4];

    printf("Bem-vindo ao Super Trunfo - Cadastro de Cartas!\n");

    // Cadastro manual para cada estado e cidade
    printf("\nCadastro da carta Estado A Cidade 1:\n");

    printf("População: ");
    scanf("%d", &populacao[0][0]);

    printf("Área (em km²): ");
    scanf("%f", &area[0][0]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][0]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][0]);


    printf("\nCadastro da carta Estado A Cidade 2:\n");

    printf("População: ");
    scanf("%d", &populacao[0][1]);

    printf("Área (em km²): ");
    scanf("%f", &area[0][1]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][1]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][1]);


    printf("\nCadastro da carta Estado A Cidade 3:\n");

    printf("População: ");
    scanf("%d", &populacao[0][2]);

    printf("Área (em km²): ");
    scanf("%f", &area[0][2]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][2]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][2]);

    printf("\nCadastro da carta Estado A Cidade 4:\n");

    printf("População: ");
    scanf("%d", &populacao[0][3]);

    printf("Área (em km²): ");
    scanf("%f", &area[0][3]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][3]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][3]);

    // Repetir manualmente para cada carta...
    // Este padrão continua para todas as combinações de estado e cidade.
    // Para simplificação, apenas 4 cartas de exemplo são exibidas aqui.

    printf("\nCadastro da carta Estado B Cidade 1:\n");

    printf("População: ");
    scanf("%d", &populacao[1][0]);

    printf("Área (em km²): ");
    scanf("%f", &area[1][0]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][0]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][0]);


    printf("\nCadastro da carta Estado B Cidade 2:\n");

    printf("População: ");
    scanf("%d", &populacao[1][1]);

    printf("Área (em km²): ");
    scanf("%f", &area[1][1]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][1]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][1]);

    printf("\nCadastro da carta Estado B Cidade 3:\n");

    printf("População: ");
    scanf("%d", &populacao[1][2]);

    printf("Área (em km²): ");
    scanf("%f", &area[1][2]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][2]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][2]);

    printf("\nCadastro da carta Estado B Cidade 4:\n");

    printf("População: ");
    scanf("%d", &populacao[1][3]);

    printf("Área (em km²): ");
    scanf("%f", &area[1][3]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][3]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][3]);


      printf("\nCadastro da carta Estado C (Cidade 1:\n");

    printf("População: ");
    scanf("%d", &populacao[2][0]);

    printf("Área (em km²): ");
    scanf("%f", &area[2][0]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][0]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[2][0]);


    printf("\nCadastro da carta Estado C (Cidade 2):\n");

    printf("População: ");
    scanf("%d", &populacao[2][1]);

    printf("Área (em km²): ");
    scanf("%f", &area[2][1]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][1]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[2][1]);

    printf("\nCadastro da carta Estado C (Cidade 3):\n");

    printf("População: ");
    scanf("%d", &populacao[2][2]);

    printf("Área (em km²): ");
    scanf("%f", &area[2][2]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][2]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][2]);

    printf("\nCadastro da carta Estado C (Cidade 4):\n");

    printf("População: ");
    scanf("%d", &populacao[2][3]);

    printf("Área (em km²): ");
    scanf("%f", &area[2][3]);

    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][3]);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][3]);




    // Exibição das cartas cadastradas
    printf("\nCartas cadastradas:\n");

    printf("Código da Carta: A01\n");
    printf("População: %d\n", populacao[0][0]);
    printf("Área: %.2f km²\n", area[0][0]);
    printf("PIB: %.2f milhões\n", pib[0][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[0][0]);
    printf("-------------------------\n");

    printf("Código da Carta: A02\n");
    printf("População: %d\n", populacao[0][1]);
    printf("Área: %.2f km²\n", area[0][1]);
    printf("PIB: %.2f milhões\n", pib[0][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[0][1]);
    printf("-------------------------\n");

    printf("Código da Carta: B01\n");
    printf("População: %d\n", populacao[1][0]);
    printf("Área: %.2f km²\n", area[1][0]);
    printf("PIB: %.2f milhões\n", pib[1][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[1][0]);
    printf("-------------------------\n");

    printf("Código da Carta: B02\n");
    printf("População: %d\n", populacao[1][1]);
    printf("Área: %.2f km²\n", area[1][1]);
    printf("PIB: %.2f milhões\n", pib[1][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[1][1]);
    printf("-------------------------\n");

    // Este padrão deve ser seguido para todas as combinações de estados e cidades.

    return 0;
}
