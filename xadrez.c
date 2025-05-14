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
    
    #include <stdio.h>

int main(){
    int torre;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;
    
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

 while (cavalo <= 1)
{
    int i = 1;
    while (i <= 1)
    {
        printf("Baixo\n");
        i++;
    }
    printf("Baixo\n");
    cavalo++;
}
    for (int cavalo = 1; cavalo <= 1; cavalo++)
{
    for (int i = 1; i <= 1; i++)
    {
        printf("Esquerda\n");
    }
    
}
    printf("O cavalo acaba me fazer o movimento de L para 2 casas para baixo e uma para esquerda");
    
    return 0;
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    
    #include <stdio.h>

void MoverTorre(int torre){
    if (torre > 0)
    {
        printf("Direita \n");
        MoverTorre(torre - 1);
    }
    
}

void MoverBispo(int passoAtual, int totalPassos) {
    if (passoAtual < totalPassos) {
        printf("Cima Direita\n");
        MoverBispo(passoAtual + 1, totalPassos);
    }
}

void MoverRainha(int rainha){
    if (rainha)
    {
        printf("Esquerda\n");
        MoverRainha(rainha - 1);
    }
    

}

int main(){
    int casas = 5;
    int torre = 5;
    int bispo = 1;
    int rainha = 8;
    int cavalo = 1;
    
    MoverTorre(torre);
    printf("A torre acaba de se movimentar 5 casas para a direita\n");

    for (int linha = 0; linha < 1; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            MoverBispo(0, casas);
        }
    }

    printf("O bispo se moveu 5 casas na diagonal (Para cima e para direita)!\n");

    while (rainha <= 8)
    {
        MoverRainha(rainha);
        rainha++;
        printf("Esquerda\n");
    }

    printf("A rainha acaba de se movimentar 8 casas para a esquerda\n");

    for (int i = 1, j = 0; i <=2, j <=1; i++, j++)
    {
        printf("Cavalo se movimentou %d para cima e %d para a direita\n", i, j);
    }

    printf("O cavalo acaba me fazer o movimento de L para 2 casas para cima e uma para Direita");
    
    return 0;
}
