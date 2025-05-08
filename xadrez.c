#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torre;
    int bispo = 1;
    int rainha = 1;
    
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }
    printf("A torre acaba de se movimentar 5 casas para a direita\n");

    do
    {
        printf("Cima, direita\n");
        bispo++;
    } while (bispo <= 5 );
    
    printf("O bispo acaba de se movimentar 5 casas para a diagonal!\n");
    
    while (rainha <= 8)
    {
        printf("Esquerda\n");
        rainha++;
    }

    printf("A rainha acaba de se movimentar 8 casas para a esquerda\n");
    return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
