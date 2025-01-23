#include <stdio.h>

int main() {
    // Matrizes para armazenar as propriedades de cada carta
    int populacao[8][4];
    float area[8][4];
    float pib[8][4];
    int pontos_turisticos[8][4];
    float calcular_poder;

    calcular_poder = (populacao + area + pib + pontos_turisticos);

    float poder_A01, poder_A02, poder_A03, poder_A04;
    float poder_B01, poder_B02, poder_B03, poder_B04;
    float poder_C01, poder_C02, poder_C03, poder_C04;
    float poder_D01, poder_D02, poder_D03, poder_D04;
    float poder_E01, poder_E02, poder_E03, poder_E04;
    float poder_F01, poder_F02, poder_F03, poder_F04;
    float poder_G01, poder_G02, poder_G03, poder_G04;
    float poder_H01, poder_H02, poder_H03, poder_H04;

    
    printf("Bem-vindo ao Super Trunfo - Cadastro de Cartas!\n");

    printf("\nCadastro da carta Estado A (Cidade 1):\n");
    printf("A01\n");
    printf("População: ");
    scanf("%d", &populacao[0][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[0][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][0]);
    

    printf("\nCadastro da carta Estado A (Cidade 2):\n");
    printf("A02\n");
    printf("População: ");
    scanf("%d", &populacao[0][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[0][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][1]);

    printf("\nCadastro da carta Estado A (Cidade 3):\n");
    printf("A03\n");
    printf("População: ");
    scanf("%d", &populacao[0][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[0][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][2]);

    printf("\nCadastro da carta Estado A (Cidade 4):\n");
    printf("A04\n");
    printf("População: ");
    scanf("%d", &populacao[0][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[0][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[0][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[0][3]);

//--------------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado B (Cidade 1):\n");
    printf("B01\n");
    printf("População: ");
    scanf("%d", &populacao[1][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[1][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][0]);

    printf("\nCadastro da carta Estado B (Cidade 2):\n");
    printf("B02\n");
    printf("População: ");
    scanf("%d", &populacao[1][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[1][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][1]);

    printf("\nCadastro da carta Estado B (Cidade 3):\n");
    printf("B03\n");
    printf("População: ");
    scanf("%d", &populacao[1][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[1][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][2]);

    printf("\nCadastro da carta Estado B (Cidade 4):\n");
    printf("B04\n");
    printf("População: ");
    scanf("%d", &populacao[1][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[1][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[1][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][3]);

//---------------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado C (Cidade 1):\n");
    printf("C01\n");
    printf("População: ");
    scanf("%d", &populacao[2][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[2][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[2][0]);

    printf("\nCadastro da carta Estado C (Cidade 2):\n");
    printf("C02\n");
    printf("População: ");
    scanf("%d", &populacao[2][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[2][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[2][1]);

    printf("\nCadastro da carta Estado C (Cidade 3):\n");
    printf("C03\n");
    printf("População: ");
    scanf("%d", &populacao[2][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[2][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[1][2]);

    printf("\nCadastro da carta Estado C (Cidade 4):\n");
    printf("C04\n");
    printf("População: ");
    scanf("%d", &populacao[2][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[2][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[2][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[2][3]);

//-------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado D (Cidade 1):\n");
    printf("D01\n");
    printf("População: ");
    scanf("%d", &populacao[2][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[3][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[3][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[3][0]);

    printf("\nCadastro da carta Estado D (Cidade 2):\n");
    printf("D02\n");
    printf("População: ");
    scanf("%d", &populacao[3][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[3][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[3][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[3][1]);

    printf("\nCadastro da carta Estado D (Cidade 3):\n");
    printf("D03\n");
    printf("População: ");
    scanf("%d", &populacao[3][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[3][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[3][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[3][2]);

    printf("\nCadastro da carta Estado D (Cidade 4):\n");
    printf("D04\n");
    printf("População: ");
    scanf("%d", &populacao[3][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[3][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[3][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[3][3]);

//-------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado E (Cidade 1):\n");
    printf("E01\n");
    printf("População: ");
    scanf("%d", &populacao[4][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[4][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[4][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[4][0]);

    printf("\nCadastro da carta Estado E (Cidade 2):\n");
    printf("E02\n");
    printf("População: ");
    scanf("%d", &populacao[4][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[4][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[4][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[4][1]);

    printf("\nCadastro da carta Estado E (Cidade 3):\n");
    printf("E03\n");
    printf("População: ");
    scanf("%d", &populacao[4][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[4][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[4][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[4][2]);

    printf("\nCadastro da carta Estado E (Cidade 4):\n");
    printf("E04\n");
    printf("População: ");
    scanf("%d", &populacao[4][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[4][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[4][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[4][3]);

//-------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado F (Cidade 1):\n");
    printf("F01\n");
    printf("População: ");
    scanf("%d", &populacao[5][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[5][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[5][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[5][0]);

    printf("\nCadastro da carta Estado F (Cidade 2):\n");
    printf("F02\n");
    printf("População: ");
    scanf("%d", &populacao[5][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[5][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[5][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[5][1]);

    printf("\nCadastro da carta Estado F (Cidade 3):\n");
    printf("F03\n");
    printf("População: ");
    scanf("%d", &populacao[5][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[5][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[5][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[5][2]);

    printf("\nCadastro da carta Estado F (Cidade 4):\n");
    printf("F04\n");
    printf("População: ");
    scanf("%d", &populacao[5][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[5][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[5][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[5][3]);

    //-------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado G (Cidade 1):\n");
    printf("G01\n");
    printf("População: ");
    scanf("%d", &populacao[6][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[6][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[6][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[6][0]);

    printf("\nCadastro da carta Estado G (Cidade 2):\n");
    printf("G02\n");
    printf("População: ");
    scanf("%d", &populacao[6][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[6][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[6][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[6][1]);

    printf("\nCadastro da carta Estado G (Cidade 3):\n");
    printf("G03\n");
    printf("População: ");
    scanf("%d", &populacao[6][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[6][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[6][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[6][2]);

    printf("\nCadastro da carta Estado G (Cidade 4):\n");
    printf("G04\n");
    printf("População: ");
    scanf("%d", &populacao[6][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[6][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[6][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[6][3]);

    //-------------------------------------------------------------------------------
    printf("\nCadastro da carta Estado H (Cidade 1):\n");
    printf("H01\n");
    printf("População: ");
    scanf("%d", &populacao[7][0]);
    printf("Área (em km²): ");
    scanf("%f", &area[7][0]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[7][0]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[7][0]);

    printf("\nCadastro da carta Estado H (Cidade 2):\n");
    printf("H02\n");
    printf("População: ");
    scanf("%d", &populacao[7][1]);
    printf("Área (em km²): ");
    scanf("%f", &area[7][1]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[7][1]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[7][1]);

    printf("\nCadastro da carta Estado H (Cidade 3):\n");
    printf("H03\n");
    printf("População: ");
    scanf("%d", &populacao[7][2]);
    printf("Área (em km²): ");
    scanf("%f", &area[7][2]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[7][2]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[7][2]);

    printf("\nCadastro da carta Estado H (Cidade 4):\n");
    printf("H04\n");
    printf("População: ");
    scanf("%d", &populacao[7][3]);
    printf("Área (em km²): ");
    scanf("%f", &area[7][3]);
    printf("PIB (em milhões): ");
    scanf("%f", &pib[7][3]);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos[7][3]);




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

    printf("Código da Carta: A03\n");
    printf("População: %d\n", populacao[0][2]);
    printf("Área: %.2f km²\n", area[0][2]);
    printf("PIB: %.2f milhões\n", pib[0][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[0][2]);
    printf("-------------------------\n");

    printf("Código da Carta: A04\n");
    printf("População: %d\n", populacao[0][3]);
    printf("Área: %.2f km²\n", area[0][3]);
    printf("PIB: %.2f milhões\n", pib[0][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[0][3]);
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

    printf("Código da Carta: B03\n");
    printf("População: %d\n", populacao[1][2]);
    printf("Área: %.2f km²\n", area[1][2]);
    printf("PIB: %.2f milhões\n", pib[1][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[1][2]);
    printf("-------------------------\n");

    printf("Código da Carta: B04\n");
    printf("População: %d\n", populacao[1][3]);
    printf("Área: %.2f km²\n", area[1][3]);
    printf("PIB: %.2f milhões\n", pib[1][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[1][3]);
    printf("-------------------------\n");

    printf("Código da Carta: C01\n");
    printf("População: %d\n", populacao[2][0]);
    printf("Área: %.2f km²\n", area[2][0]);
    printf("PIB: %.2f milhões\n", pib[2][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[2][0]);
    printf("-------------------------\n");

    printf("Código da Carta: C02\n");
    printf("População: %d\n", populacao[2][1]);
    printf("Área: %.2f km²\n", area[2][1]);
    printf("PIB: %.2f milhões\n", pib[2][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[2][1]);
    printf("-------------------------\n");

    printf("Código da Carta: C03\n");
    printf("População: %d\n", populacao[2][2]);
    printf("Área: %.2f km²\n", area[2][2]);
    printf("PIB: %.2f milhões\n", pib[2][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[2][2]);
    printf("-------------------------\n");

    printf("Código da Carta: C04\n");
    printf("População: %d\n", populacao[2][3]);
    printf("Área: %.2f km²\n", area[2][3]);
    printf("PIB: %.2f milhões\n", pib[2][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[2][3]);
    printf("-------------------------\n");

    printf("Código da Carta: D01\n");
    printf("População: %d\n", populacao[3][0]);
    printf("Área: %.2f km²\n", area[3][0]);
    printf("PIB: %.2f milhões\n", pib[3][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[3][0]);
    printf("-------------------------\n");

    printf("Código da Carta: D02\n");
    printf("População: %d\n", populacao[3][1]);
    printf("Área: %.2f km²\n", area[3][1]);
    printf("PIB: %.2f milhões\n", pib[3][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[3][1]);
    printf("-------------------------\n");

    printf("Código da Carta: D03\n");
    printf("População: %d\n", populacao[3][2]);
    printf("Área: %.2f km²\n", area[3][2]);
    printf("PIB: %.2f milhões\n", pib[3][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[3][2]);
    printf("-------------------------\n");

    printf("Código da Carta: D04\n");
    printf("População: %d\n", populacao[3][3]);
    printf("Área: %.2f km²\n", area[3][3]);
    printf("PIB: %.2f milhões\n", pib[3][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[3][3]);
    printf("-------------------------\n");

    printf("Código da Carta: E01\n");
    printf("População: %d\n", populacao[4][0]);
    printf("Área: %.2f km²\n", area[4][0]);
    printf("PIB: %.2f milhões\n", pib[4][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[4][0]);
    printf("-------------------------\n");

    printf("Código da Carta: E02\n");
    printf("População: %d\n", populacao[4][1]);
    printf("Área: %.2f km²\n", area[4][1]);
    printf("PIB: %.2f milhões\n", pib[4][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[4][1]);
    printf("-------------------------\n");

    printf("Código da Carta: E03\n");
    printf("População: %d\n", populacao[4][2]);
    printf("Área: %.2f km²\n", area[4][2]);
    printf("PIB: %.2f milhões\n", pib[4][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[4][2]);
    printf("-------------------------\n");

    printf("Código da Carta: E04\n");
    printf("População: %d\n", populacao[4][3]);
    printf("Área: %.2f km²\n", area[4][3]);
    printf("PIB: %.2f milhões\n", pib[4][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[4][3]);
    printf("-------------------------\n");

    printf("Código da Carta: F01\n");
    printf("População: %d\n", populacao[5][0]);
    printf("Área: %.2f km²\n", area[5][0]);
    printf("PIB: %.2f milhões\n", pib[5][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[5][0]);
    printf("-------------------------\n");

    printf("Código da Carta: F02\n");
    printf("População: %d\n", populacao[5][1]);
    printf("Área: %.2f km²\n", area[5][1]);
    printf("PIB: %.2f milhões\n", pib[5][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[5][1]);
    printf("-------------------------\n");

    printf("Código da Carta: F03\n");
    printf("População: %d\n", populacao[5][2]);
    printf("Área: %.2f km²\n", area[5][2]);
    printf("PIB: %.2f milhões\n", pib[5][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[5][2]);
    printf("-------------------------\n");

    printf("Código da Carta: F04\n");
    printf("População: %d\n", populacao[5][3]);
    printf("Área: %.2f km²\n", area[5][3]);
    printf("PIB: %.2f milhões\n", pib[5][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[5][3]);
    printf("-------------------------\n");

    printf("Código da Carta: G01\n");
    printf("População: %d\n", populacao[6][0]);
    printf("Área: %.2f km²\n", area[6][0]);
    printf("PIB: %.2f milhões\n", pib[6][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[6][0]);
    printf("-------------------------\n");

    printf("Código da Carta: G02\n");
    printf("População: %d\n", populacao[6][1]);
    printf("Área: %.2f km²\n", area[6][1]);
    printf("PIB: %.2f milhões\n", pib[6][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[6][1]);
    printf("-------------------------\n");

    printf("Código da Carta: G03\n");
    printf("População: %d\n", populacao[6][2]);
    printf("Área: %.2f km²\n", area[6][2]);
    printf("PIB: %.2f milhões\n", pib[6][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[6][2]);
    printf("-------------------------\n");

    printf("Código da Carta: G04\n");
    printf("População: %d\n", populacao[6][3]);
    printf("Área: %.2f km²\n", area[6][3]);
    printf("PIB: %.2f milhões\n", pib[6][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[6][3]);
    printf("-------------------------\n");

    printf("Código da Carta: H01\n");
    printf("População: %d\n", populacao[7][0]);
    printf("Área: %.2f km²\n", area[7][0]);
    printf("PIB: %.2f milhões\n", pib[7][0]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[7][0]);
    printf("-------------------------\n");

    printf("Código da Carta: H02\n");
    printf("População: %d\n", populacao[7][1]);
    printf("Área: %.2f km²\n", area[7][1]);
    printf("PIB: %.2f milhões\n", pib[7][1]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[7][1]);
    printf("-------------------------\n");

    printf("Código da Carta: H03\n");
    printf("População: %d\n", populacao[7][2]);
    printf("Área: %.2f km²\n", area[7][2]);
    printf("PIB: %.2f milhões\n", pib[7][2]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[7][2]);
    printf("-------------------------\n");

    printf("Código da Carta: H04\n");
    printf("População: %d\n", populacao[7][3]);
    printf("Área: %.2f km²\n", area[7][3]);
    printf("PIB: %.2f milhões\n", pib[7][3]);
    printf("Pontos Turísticos: %d\n", pontos_turisticos[7][3]);
    printf("-------------------------\n");

    poder_A01 = calcular_poder + (populacao[0][0], area[0][0], pib[0][0], pontos_turisticos[0][0]);
    poder_A02 = calcular_poder + (populacao[0][1], area[0][1], pib[0][1], pontos_turisticos[0][1]);
    poder_A03 = calcular_poder + (populacao[0][2], area[0][2], pib[0][2], pontos_turisticos[0][2]);
    poder_A04 = calcular_poder + (populacao[0][3], area[0][3], pib[0][3], pontos_turisticos[0][3]);

    poder_B01 = calcular_poder + (populacao[1][0], area[1][0], pib[1][0], pontos_turisticos[1][0]);
    poder_B02 = calcular_poder + (populacao[1][1], area[1][1], pib[1][1], pontos_turisticos[1][1]);
    poder_B03 = calcular_poder + (populacao[1][2], area[1][2], pib[1][2], pontos_turisticos[1][2]);
    poder_B04 = calcular_poder + (populacao[1][3], area[1][3], pib[1][3], pontos_turisticos[1][3]);

    poder_C01 = calcular_poder + (populacao[2][0], area[2][0], pib[2][0], pontos_turisticos[2][0]);
    poder_C02 = calcular_poder + (populacao[2][1], area[2][1], pib[2][1], pontos_turisticos[2][1]);
    poder_C03 = calcular_poder + (populacao[2][2], area[2][2], pib[2][2], pontos_turisticos[2][2]);
    poder_C04 = calcular_poder + (populacao[2][3], area[2][3], pib[2][3], pontos_turisticos[2][3]);

    poder_D01 = calcular_poder + (populacao[3][0], area[3][0], pib[3][0], pontos_turisticos[3][0]);
    poder_D02 = calcular_poder + (populacao[3][1], area[3][1], pib[3][1], pontos_turisticos[3][1]);
    poder_D03 = calcular_poder + (populacao[3][2], area[3][2], pib[3][2], pontos_turisticos[3][2]);
    poder_D04 = calcular_poder + (populacao[3][3], area[3][3], pib[3][3], pontos_turisticos[3][3]);

    poder_E01 = calcular_poder + (populacao[4][0], area[4][0], pib[4][0], pontos_turisticos[4][0]);
    poder_E02 = calcular_poder + (populacao[4][1], area[4][1], pib[4][1], pontos_turisticos[4][1]);
    poder_E03 = calcular_poder + (populacao[4][2], area[4][2], pib[4][2], pontos_turisticos[4][2]);
    poder_E04 = calcular_poder + (populacao[4][3], area[4][3], pib[4][3], pontos_turisticos[4][3]);

    poder_F01 = calcular_poder + (populacao[5][0], area[5][0], pib[5][0], pontos_turisticos[5][0]);
    poder_F02 = calcular_poder + (populacao[5][1], area[5][1], pib[5][1], pontos_turisticos[5][1]);
    poder_F03 = calcular_poder + (populacao[5][2], area[5][2], pib[5][2], pontos_turisticos[5][2]);
    poder_F04 = calcular_poder + (populacao[5][3], area[5][3], pib[5][3], pontos_turisticos[5][3]);

    poder_G01 = calcular_poder + (populacao[6][0], area[6][0], pib[6][0], pontos_turisticos[6][0]);
    poder_G02 = calcular_poder + (populacao[6][1], area[6][1], pib[6][1], pontos_turisticos[6][1]);
    poder_G03 = calcular_poder + (populacao[6][2], area[6][2], pib[6][2], pontos_turisticos[6][2]);
    poder_G04 = calcular_poder + (populacao[6][3], area[6][3], pib[6][3], pontos_turisticos[6][3]);

    poder_H01 = calcular_poder + (populacao[7][0], area[7][0], pib[7][0], pontos_turisticos[7][0]);
    poder_H02 = calcular_poder + (populacao[7][1], area[7][1], pib[7][1], pontos_turisticos[7][1]);
    poder_H03 = calcular_poder + (populacao[7][2], area[7][2], pib[7][2], pontos_turisticos[7][2]);
    poder_H04 = calcular_poder + (populacao[7][3], area[7][3], pib[7][3], pontos_turisticos[7][3]);



    return 0;
};
