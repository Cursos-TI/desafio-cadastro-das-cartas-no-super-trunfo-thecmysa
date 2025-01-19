#include <stdio.h>
#include <string.h>
// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta *carta) {
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", carta->nome);

    printf("Digite a população: ");
    scanf(" %d", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf(" %f", &carta->area);

    printf("Digite o PIB: ");
    scanf(" %f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta->pontos_turisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta) {
    printf("\n===== Dados da Carta =====\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da cidade: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    int numCartas = 32; // Total de cartas: 8 estados * 4 cidades cada
    Carta cartas[numCartas];

    printf("==== Cadastro de Cartas do Super Trunfo ====\n");
    for (int i = 0; i < numCartas; i++) {
        printf("\nCadastro da carta %d de %d\n", i + 1, numCartas);
        cadastrarCarta(&cartas[i]);
        exibirCarta(cartas[i]);
    }

    printf("\nCadastro concluído!\n");
    
    return 0;
};
