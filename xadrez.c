#include <stdio.h>

// ========================================= 
// Programa: Desafio de Xadrez - MateCheck
// Descrição: O programa simula um jogo de Xadrez, onde são exibidas
// as movimentações de cada peça do tabuleiro.
//
// Autor: Rebeca Vieira Maia
// ========================================= 

// Implementação de Movimentação do Bispo
void moverBispo(int passos) {
    if (passos == 0) return; // Sai da recursão quando a peça já tiver percorrido todas as casas da jogada
    printf("Cima, Direita\n"); // Exibe a movimentação
    moverBispo(passos - 1); // Decrementa a variável para que se torne 0 e saia da recursão após percorrer as casas
} 

// Implementação de Movimentação da Torre
void moverTorre(int passos) {
    if (passos == 0) return;   
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Implementação de Movimentação da Rainha
void moverRainha(int passos) {
    if (passos == 0) return;    
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Implementação de Movimentação do Cavalo (L)
void moverCavalo(int passos) {
    // Variáveis para controlar as direções 
    char *direcaoHorizontal[] = {"Direita"}; // Movimento horizontal
    char *direcaoVertical[] = {"Cima"};   // Movimento vertical

    // Loop para controlar o número de movimentos do cavalo
    for (int i = 0; i < passos; i++) {
        int j = 0; // Variável para controlar os movimentos em L
        while (j < 2) { // 2 movimentos para cada ciclo
            // Movimento horizontal
            printf("Movendo à %s\n", direcaoVertical[0]);
            j++;
            
            // Verifica se devemos continuar e pular a parte do movimento vertical
            if (j == 1) {
                continue; // Pula a parte do movimento vertical se já fez o movimento horizontal
            }

            // Movimento vertical
            printf("Movendo para %s\n", direcaoHorizontal[0]);
            j++;

            // Usando o break para terminar o loop quando o movimento for completo
            if (j == 2) {
                break;
            }
        }
    }
}

int main() {

    // Declaração de variáveis do número de casas que cada peça pode se mover
    int bispo = 5; 
    int torre = 5; 
    int rainha = 8;

    int cavalo = 1; // Variável do número de ciclos que o cavalo irá mover

    // Chamada das funções de movimento das peças

    printf("---Movimentação do Bispo---\n");
    moverBispo(bispo);

    printf("---Movimentação da Torre---\n");
    moverTorre(torre);

    printf("---Movimentação da Rainha---\n");
    moverRainha(rainha);

    printf("---Movimentação do Cavalo---\n");
    moverCavalo(cavalo);

    return 0;
}
