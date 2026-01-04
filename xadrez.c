#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

int main() {

    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int contador;

    printf("===== MOVIMENTACAO DAS PECAS DE XADREZ =====\n\n");

    /*
        -----------------------------
        TORRE - 5 casas para a direita (FOR)
        -----------------------------
    */
    printf("Movimento da TORRE (5 casas para a direita):\n");

    for (contador = 1; contador <= casasTorre; contador++) {
        printf("Direita\n");
    }

    printf("\n");

    /*
        -----------------------------
        BISPO - 5 casas na diagonal (Cima e Direita) (WHILE)
        -----------------------------
    */
    printf("Movimento do BISPO (5 casas na diagonal para cima e direita):\n");

    contador = 1;
    while (contador <= casasBispo) {
        printf("Cima, Direita\n");
        contador++;
    }

    printf("\n");

    /*
        -----------------------------
        RAINHA - 8 casas para a esquerda (DO-WHILE)
        -----------------------------
    */
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");

    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasRainha);

    return 0;
}

