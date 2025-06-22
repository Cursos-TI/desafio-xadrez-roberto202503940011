#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula o movimento de três peças de xadrez: Torre, Bispo e Rainha
// Cada peça utiliza uma estrutura de repetição diferente para simular seu movimento

int main() {
    // Declaração de variáveis para controle dos movimentos
    int casas_torre = 5;        // Torre move 5 casas para a direita
    int casas_bispo = 5;        // Bispo move 5 casas na diagonal
    int casas_rainha = 8;       // Rainha move 8 casas para a esquerda
    
    // ========== MOVIMENTO DA TORRE ==========
    // A Torre move-se em linha reta (horizontal ou vertical)
    // Utilizando estrutura de repetição FOR
    printf("=== MOVIMENTO DA TORRE ===\n");
    printf("A Torre vai se mover %d casas para a direita:\n", casas_torre);
    
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    
    // ========== MOVIMENTO DO BISPO ==========
    // O Bispo move-se na diagonal
    // Utilizando estrutura de repetição WHILE
    printf("\n=== MOVIMENTO DO BISPO ===\n");
    printf("O Bispo vai se mover %d casas na diagonal (cima e direita):\n", casas_bispo);
    
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    // ========== MOVIMENTO DA RAINHA ==========
    // A Rainha move-se em qualquer direção
    // Utilizando estrutura de repetição DO-WHILE
    printf("\n=== MOVIMENTO DA RAINHA ===\n");
    printf("A Rainha vai se mover %d casas para a esquerda:\n", casas_rainha);
    
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);
    
    printf("\n=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}
