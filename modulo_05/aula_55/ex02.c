// Exercício 2: Um jogo possui 4 tipos de pedra: azul, vermelha, verde e amarela. Preencha aleatóriamente um tabuleiro 10x10 come stas pedras. Ao final do programa informe quantas pedras de cada cor foram colocadas no tabuleiro.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // 0 = AZUL
    // 1 = VERMELHO
    // 2 = VERDE
    // 3 = AMARELO

    srand(time(NULL));

    int linhas = 10, colunas = 10;
    int tabuleiro[linhas][colunas];
    int azuis = 0, vermelhas = 0, verdes = 0, amarelas = 0;

    // Cria e imprime a matriz
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            tabuleiro[linha][coluna] = rand() % 4;

            printf("%i ", tabuleiro[linha][coluna]);

            switch (tabuleiro[linha][coluna]) {
                case 0:
                    azuis += 1;
                    break;
                case 1:
                    vermelhas += 1;
                    break;
                case 2:
                    verdes += 1;
                    break;
                case 3:
                    amarelas += 1;
                    break;
            }
        }
        printf("\n");
    }
    printf("\n\n");

    // Imprime a quantidade de pedras de cada cor no tabuleiro
    printf("Existem %i pedras azuis no tabuleiro!\n", azuis);
    printf("Existem %i pedras vermelhas no tabuleiro!\n", vermelhas);
    printf("Existem %i pedras verdes no tabuleiro!\n", verdes);
    printf("Existem %i pedras amarelas no tabuleiro!\n", amarelas);

    return 0;
}