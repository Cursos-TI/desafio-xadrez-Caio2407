#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int main() {
    #define MOVIMENTO_BISPO 5    // O Bispo se move 5 casas na diagonal
    #define MOVIMENTO_TORRE 5    // A Torre se move 5 casas para a direita
    #define MOVIMENTO_RAINHA 8   // A Rainha se move 8 casas para a esquerda


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
 
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Cima Direita\n");  // O Bispo se move na diagonal superior direita
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");  // A Torre se move para a direita
    }

   // Implementação de Movimentação da Rainha
    // Utilizando um loop para simular o movimento para a esquerda
    printf("\nMovimento da Rainha:\n");
    for (int i = 1; i <= MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");  // A Rainha se move para a esquerda
    }

    return 0;
}
