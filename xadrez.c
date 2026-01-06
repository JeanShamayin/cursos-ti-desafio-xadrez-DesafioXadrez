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

#include <stdio.h>

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo
    int passosVerticais = 2;   // duas casas para baixo
    int passosHorizontais = 1; // uma casa para a esquerda

    int contador;

    printf("===== MOVIMENTACAO DAS PECAS DE XADREZ =====\n\n");

    /*
        -----------------------------
        TORRE - 5 casas para a direita (FOR)
        -----------------------------
    */
    printf("Movimento da TORRE:\n");
    for (contador = 1; contador <= casasTorre; contador++) {
        printf("Direita\n");
    }

    printf("\n");

    /*
        -----------------------------
        BISPO - 5 casas na diagonal (Cima + Direita) (WHILE)
        -----------------------------
    */
    printf("Movimento do BISPO:\n");
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
    printf("Movimento da RAINHA:\n");
    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasRainha);

    printf("\n");

    /*
        -----------------------------
        CAVALO - Movimento em "L"
        2 casas para baixo e 1 casa para a esquerda
        Usando loops aninhados:
        - for (externo)
        - while (interno)
        -----------------------------
    */
    printf("Movimento do CAVALO:\n");

    // Loop externo controla as duas casas para baixo
    for (contador = 1; contador <= passosVerticais; contador++) {
        printf("Baixo\n");

        // Quando terminar os dois passos para baixo,
        // entra no loop interno para andar uma casa para a esquerda
        if (contador == passosVerticais) {
            int contadorInterno = 1;

            while (contadorInterno <= passosHorizontais) {
                printf("Esquerda\n");
                contadorInterno++;
            }
        }
    }

    return 0;
}
