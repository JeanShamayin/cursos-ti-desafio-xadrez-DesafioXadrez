// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

/*
    Movimento recursivo da TORRE
    Move "casas" vezes para a Direita
*/
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

/*
    Movimento recursivo da RAINHA
    Move "casas" vezes para a Esquerda
*/
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/*
    Movimento do BISPO
    Recursivo no vertical (Cima)
    Loop aninhado no horizontal (Direita)
*/
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return;

    // Loop interno: movimento horizontal
    for (int j = 1; j <= casasHorizontais; j++) {
        printf("Direita\n");
    }

    // Movimento vertical
    printf("Cima\n");

    // Chamada recursiva para a próxima linha
    moverBispo(casasVerticais - 1, casasHorizontais);
}

/*
    Movimento do CAVALO em "L"
    2 casas para Cima e 1 para Direita
    Usando loops aninhados complexos
*/
void moverCavalo(int maxVertical, int maxHorizontal) {
    printf("Movimento do CAVALO:\n");

    for (int v = 1; v <= maxVertical; v++) {
        if (v > 2) break;  // só permite duas casas para cima
        printf("Cima\n");

        for (int h = 1; h <= maxHorizontal; h++) {
            if (h == 1 && v == 2) {
                printf("Direita\n");
            } else {
                continue;
            }
        }
    }
}

int main() {

    int casasTorre = 5;
    int casasRainha = 8;
    int bispoVertical = 5;
    int bispoHorizontal = 1;
    int cavaloVertical = 3;
    int cavaloHorizontal = 2;

    printf("===== MOVIMENTACAO DAS PECAS DE XADREZ - NIVEL MESTRE =====\n\n");

    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do BISPO:\n");
    moverBispo(bispoVertical, bispoHorizontal);

    printf("\nMovimento da RAINHA:\n");
    moverRainha(casasRainha);

    printf("\n");
    moverCavalo(cavaloVertical, cavaloHorizontal);

    return 0;
}
