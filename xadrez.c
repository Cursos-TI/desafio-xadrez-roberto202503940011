#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula o movimento de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo
// Cada peça utiliza uma estrutura de repetição diferente para simular seu movimento

int main() {
    // Declaração de variáveis para controle dos movimentos
    int casas_torre = 5;        // Torre move 5 casas para a direita
    int casas_bispo = 5;        // Bispo move 5 casas na diagonal
    int casas_rainha = 8;       // Rainha move 8 casas para a esquerda
    
    // Variáveis para movimento do Cavalo em "L"
    int casas_cavalo_vertical = 2;    // Cavalo move 2 casas para baixo
    int casas_cavalo_horizontal = 1;  // Cavalo move 1 casa para a esquerda
    
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
    
    // ========== MOVIMENTO DO CAVALO ==========
    // O Cavalo move-se em formato "L": 2 casas em uma direção + 1 casa perpendicular
    // Utilizando loops aninhados: FOR (externo) e WHILE (interno)
    printf("\n=== MOVIMENTO DO CAVALO ===\n");
    printf("O Cavalo vai se mover em L (%d casas para baixo, %d casa para a esquerda):\n", 
           casas_cavalo_vertical, casas_cavalo_horizontal);
    
    // Loop externo FOR: controla as etapas do movimento em "L"
    for (int etapa = 1; etapa <= 2; etapa++) {
        
        if (etapa == 1) {
            // Primeira etapa: movimento vertical (2 casas para baixo)
            int contador_vertical = 1;
            while (contador_vertical <= casas_cavalo_vertical) {
                printf("Baixo\n");
                contador_vertical++;
            }
        } else {
            // Segunda etapa: movimento horizontal (1 casa para a esquerda)
            int contador_horizontal = 1;
            while (contador_horizontal <= casas_cavalo_horizontal) {
                printf("Esquerda\n");
                contador_horizontal++;
            }
        }
    }
    
    printf("\n=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}
