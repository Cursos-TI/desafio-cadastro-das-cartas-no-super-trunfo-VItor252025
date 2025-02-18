#include <stdio.h>

#define MAX_CARTAS 1

typedef struct {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;
void cadastrarCartas(Carta cartas[1], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);
        printf("Estado:São Paulo ");
        scanf(" %[^\n]", cartas[i].estado);
        printf("Código da carta:SP01 ");
        scanf(" %[^\n]", cartas[i].codigo);
        printf("Nome da cidade:São Paulo ");
        scanf(" %[^\n]", cartas[i].nomeCidade);
        printf("População:12300000 ");
        scanf("%d", &cartas[i].populacao);
        printf("Área (em km²):1521.11 ");
        scanf("%f", &cartas[i].area);
        printf("PIB:699000.00 ");
        scanf("%f", &cartas[i].pib);
        printf("Número de pontos turísticos:10 ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }
}

void exibirCartas(Carta cartas[], int qtd) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < qtd; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }
}

int main() {
    Carta cartas[MAX_CARTAS] = {
        {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699000.00, 10} 
    };

    int qtdCartas = 1; 
    int opcao;

    printf("Deseja cadastrar mais cartas? (1 - Sim / 0 - Não): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int novasCartas;
        printf("Quantas novas cartas deseja cadastrar (máximo %d)? ", MAX_CARTAS - qtdCartas);
        scanf("%d", &novasCartas);

        if (novasCartas > 0 && (qtdCartas + novasCartas) <= MAX_CARTAS) {
            cadastrarCartas(&cartas[qtdCartas], novasCartas);
            qtdCartas += novasCartas;
        } else {
            printf("Quantidade inválida!\n");
        }
    }
    exibirCartas(cartas, qtdCartas);

    return 0;
       
    } 
    
    
    

