#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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

    int i;

    //TORRE - Movimento vertical com FOR

    printf("Movimento da TORRE (FOR):\n");
    for (i = 1; i <= 8; i++) {
        printf("Torre move para cima: casa %d\n", i);
    }
    for (i = 1; i <= 8; i++) {
        printf("Torre move para direita: casa %d\n", i);
    }

    //BISPO - Movimento diagonal com WHILE
    int linha = 1, coluna = 1;
    printf("\nMovimento do BISPO (WHILE):\n");
    while (linha <= 8 && coluna <= 8) {
        printf("Bispo move para diagonal ↘: linha %d, coluna %d\n", linha, coluna);
        linha++;
        coluna++;
    }


    //Rainha - Movimento completo com DO-WHILE
    int pos;

    printf("\nMovimento da RAINHA (DO-WHILE):\n");

    // Vertical ↑
    pos = 1;
    do {
        printf("Rainha move para cima: linha %d\n", pos);
        pos++;
    } while (pos <= 8);

    // Vertical ↓
    pos = 8;
    do {
        printf("Rainha move para baixo: linha %d\n", pos);
        pos--;
    } while (pos >= 1);

    // Horizontal →
    pos = 1;
    do {
        printf("Rainha move para direita: coluna %d\n", pos);
        pos++;
    } while (pos <= 8);

    // Horizontal ←
    pos = 8;
    do {
        printf("Rainha move para esquerda: coluna %d\n", pos);
        pos--;
    } while (pos >= 1);

    // Diagonal ↗
    int lin = 1, col = 1;
    do {
        printf("Rainha move na diagonal ↗: linha %d, coluna %d\n", lin, col);
        lin++;
        col++;
    } while (lin <= 8 && col <= 8);

    // Diagonal ↙
    lin = 8; col = 8;
    do {
        printf("Rainha move na diagonal ↙: linha %d, coluna %d\n", lin, col);
        lin--;
        col--;
    } while (lin >= 1 && col >= 1);


    return 0;
}
