// Exercício 2: Escreva um programa que define e inicializa uma matriz de tamanho 6x6, de forma que seja a matriz identidade. Em seguida, imprimir a matriz na tela.

#include <stdio.h>

int main(void) {
    int linhas = 6, colunas = 6, matriz[linhas][colunas];

    // Preencher e imprimir a matriz
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            if (linha == coluna) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}