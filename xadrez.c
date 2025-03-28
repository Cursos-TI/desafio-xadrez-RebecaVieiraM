#include <stdio.h>

// ========================================= 
// Programa: Desafio de Xadrez - MateCheck
// Descrição: Simula a movimentação de peças de xadrez utilizando 
// loops aninhados e recursão, conforme os requisitos do desafio.
//
// Autor: Rebeca Vieira Maia
// ========================================= 

// Movimentação do Bispo (diagonal superior direita, usando loops aninhados)
void moverBispo(int passos) {
    for (int i = 0; i < passos; i++) { 
        for (int j = 0; j < 1; j++) {  
            printf("Cima, Direita\n");
        }
    }
}

// Movimentação da Torre (recursiva)
void moverTorre(int passos) {
    if (passos == 0) return;   // Condição de parada
    printf("Direita\n");       // Movimento da torre
    moverTorre(passos - 1);    // Chamada recursiva para o próximo movimento
}

// Movimentação da Rainha (recursiva)
void moverRainha(int passos) {
    if (passos == 0) return;    // Condição de parada
    printf("Esquerda\n");       // Movimento da rainha
    moverRainha(passos - 1);    // Chamada recursiva para o próximo movimento
}

// Movimentação do Cavalo (L, usando variáveis múltiplas e loops aninhados)
void moverCavalo(int ciclos) {
    for (int i = 0; i < ciclos; i++) {  // Repetir o movimento de cavalo conforme o número de ciclos
        int direcao = 0, deslocamento = 0;  // Variáveis para controlar os movimentos (direção e posição)
        while (direcao < 2 && deslocamento < 3) {  // Loops para garantir a execução dos 3 movimentos
            if (deslocamento < 2) {
                printf("Cima\n");  // Os dois primeiros movimentos são para cima
                deslocamento++;    // Incrementa o contador de movimentos
                continue;  // Continua para o próximo ciclo do while sem avançar
            }
            printf("Direita\n");  // O terceiro movimento é para a direita
            direcao++;  // Finaliza a direção após o movimento
            break;  // Sai do loop while após o movimento em L
        }
    }
}

int main() {
    // Definição dos passos de cada peça
    int bispo = 5, torre = 5, rainha = 8;
    int cavalo = 1; // Variável do número de ciclos que o cavalo irá mover

    // Execução dos movimentos
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
