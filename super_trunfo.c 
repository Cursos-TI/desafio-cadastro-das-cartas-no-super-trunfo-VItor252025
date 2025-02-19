#include <stdio.h>

#define MAX_CARTAS 2

typedef struct {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;
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
        {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699000.00, 10},
        {"Rio de Janeiro", "RJ02", "Rio de Janeiro", 6775561, 1200.27, 364000.50, 15}
    };

    exibirCartas(cartas, MAX_CARTAS);



    return 0;
       
    } 
    
    
    

