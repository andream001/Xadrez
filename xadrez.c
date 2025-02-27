#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre:\n");
    int i = 0;
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);

    return 0;
}
