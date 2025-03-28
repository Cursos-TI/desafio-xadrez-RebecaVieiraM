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
    for (int i = 0; i < passos; i++) { // Controla a quantidade de passos
        for (int j = 0; j < 1; j++) { // Estrutura aninhada
            printf("Cima, Direita\n");
        }
    }
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
void moverCavalo(int ciclos) {
    for (int i = 0; i < ciclos; i++) {
        int movimentos = 0;
        while (movimentos <= 2) {
            if (movimentos != 2) {
                printf("Cima\n");
                movimentos++;
                continue; // Pula para a próxima iteração sem executar o código abaixo
            }
            printf("Direita\n");
            movimentos++;
            break; // Termina o loop ao completar o movimento em L
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
