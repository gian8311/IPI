// Exercício 1: Escreva um programa que define e inicializa com 0 todos os elementos de uma matriz de 50x30, e a imprima na tela.

#include <stdio.h>

int main(void) {
    int linhas = 50, colunas = 30, matriz[linhas][colunas];

    // Preenchendo a matriz e a imprimindo
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            matriz[linha][coluna] = 0;

            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}