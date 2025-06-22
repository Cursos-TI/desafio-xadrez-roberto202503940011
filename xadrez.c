#include <stdio.h>

// Desafio de Xadrez - MateCheck (Nível Avançado)
// Este código simula o movimento de quatro peças de xadrez usando recursividade e loops complexos
// Torre, Bispo e Rainha: Implementados com funções recursivas
// Cavalo: Implementado com loops aninhados complexos (continue/break)
// Bispo: Implementado também com loops aninhados além da recursividade

// ========== FUNÇÕES RECURSIVAS ==========

/**
 * Função recursiva para movimento da Torre
 * Parâmetros: casas_restantes - número de casas restantes para mover
 * Movimento: Horizontal para a direita
 */
void mover_torre_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("Direita\n");
    
    // Chamada recursiva: decrementa o número de casas restantes
    mover_torre_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para movimento do Bispo
 * Parâmetros: casas_restantes - número de casas restantes para mover
 * Movimento: Diagonal (cima e direita)
 */
void mover_bispo_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento diagonal atual
    printf("Cima, Direita\n");
    
    // Chamada recursiva: decrementa o número de casas restantes
    mover_bispo_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para movimento da Rainha
 * Parâmetros: casas_restantes - número de casas restantes para mover
 * Movimento: Horizontal para a esquerda
 */
void mover_rainha_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("Esquerda\n");
    
    // Chamada recursiva: decrementa o número de casas restantes
    mover_rainha_recursivo(casas_restantes - 1);
}

/**
 * Função com loops aninhados para movimento do Bispo
 * Parâmetros: casas_verticais, casas_horizontais - casas para mover em cada direção
 * Implementa loops aninhados: externo (vertical), interno (horizontal)
 */
void mover_bispo_loops_aninhados(int casas_verticais, int casas_horizontais) {
    printf("=== MOVIMENTO DO BISPO (LOOPS ANINHADOS) ===\n");
    printf("Bispo se movendo com loops aninhados (%d movimentos na diagonal):\n", casas_verticais);
    
    // Loop externo: controla movimento vertical
    for (int vertical = 1; vertical <= casas_verticais; vertical++) {
        // Loop interno: controla movimento horizontal (1 casa por movimento diagonal)
        for (int horizontal = 1; horizontal <= casas_horizontais; horizontal++) {
            printf("Cima, Direita\n");
            break; // Sai do loop interno após 1 movimento horizontal por movimento vertical
        }
    }
}

// ========== FUNÇÃO PRINCIPAL ==========

int main() {
    // Declaração de variáveis para controle dos movimentos
    int casas_torre = 5;        // Torre move 5 casas para a direita
    int casas_bispo = 5;        // Bispo move 5 casas na diagonal
    int casas_rainha = 8;       // Rainha move 8 casas para a esquerda
    
    // Variáveis para movimento do Cavalo em "L" (2 cima, 1 direita)
    int casas_cavalo_vertical = 2;    // Cavalo move 2 casas para cima
    int casas_cavalo_horizontal = 1;  // Cavalo move 1 casa para a direita
    
    // ========== MOVIMENTO DA TORRE (RECURSIVO) ==========
    printf("=== MOVIMENTO DA TORRE (RECURSIVO) ===\n");
    printf("A Torre vai se mover %d casas para a direita:\n", casas_torre);
    mover_torre_recursivo(casas_torre);
    
    // ========== MOVIMENTO DO BISPO (RECURSIVO) ==========
    printf("\n=== MOVIMENTO DO BISPO (RECURSIVO) ===\n");
    printf("O Bispo vai se mover %d casas na diagonal (cima e direita):\n", casas_bispo);
    mover_bispo_recursivo(casas_bispo);
    
    // ========== MOVIMENTO DA RAINHA (RECURSIVO) ==========
    printf("\n=== MOVIMENTO DA RAINHA (RECURSIVO) ===\n");
    printf("A Rainha vai se mover %d casas para a esquerda:\n", casas_rainha);
    mover_rainha_recursivo(casas_rainha);
    
    // ========== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ==========
    // O Cavalo move-se em formato "L": 2 casas para cima + 1 casa para a direita
    // Utilizando loops aninhados complexos com múltiplas variáveis e condições
    printf("\n=== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ===\n");
    printf("O Cavalo vai se mover em L (%d casas para cima, %d casa para a direita):\n", 
           casas_cavalo_vertical, casas_cavalo_horizontal);
    
    // Variáveis de controle para loops complexos
    int etapa_atual = 1;
    int total_etapas = 2;
    int movimentos_realizados = 0;
    int movimento_vertical_completo = 0;
    
    // Loop externo: controla as etapas do movimento em "L"
    for (int etapa = 1; etapa <= total_etapas; etapa++) {
        
        // Loop interno com múltiplas condições e variáveis
        int contador = 1;
        while (contador <= 3) { // Máximo 3 movimentos possíveis
            
            // Primeira etapa: movimento vertical (2 casas para cima)
            if (etapa == 1 && movimentos_realizados < casas_cavalo_vertical) {
                printf("Cima\n");
                movimentos_realizados++;
                contador++;
                
                // Controle de fluxo: se completou movimento vertical, marca flag
                if (movimentos_realizados == casas_cavalo_vertical) {
                    movimento_vertical_completo = 1;
                    break; // Sai do loop interno quando completa movimento vertical
                }
                continue; // Continua para próximo movimento vertical
            }
            
            // Segunda etapa: movimento horizontal (1 casa para a direita)
            if (etapa == 2 && movimento_vertical_completo == 1) {
                printf("Direita\n");
                contador++;
                break; // Sai após movimento horizontal
            }
            
            // Proteção contra loop infinito
            contador++;
        }
    }
    
    // ========== MOVIMENTO DO BISPO (LOOPS ANINHADOS) ==========
    printf("\n");
    mover_bispo_loops_aninhados(casas_bispo, 1);
    
    printf("\n=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}
