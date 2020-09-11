// Exercício 1: Escreva um programa que define e inicializa aleatóriamente 2 matrizes de tamanho 6x6 de inteiros positivos estritamente menores que 10. Fazer a computação da soma em uma terceira matriz. Imprimir na tela as 3 matrizes.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int linhas = 6, colunas = 6;
    int matriz1[linhas][colunas], matriz2[linhas][colunas], matrizSoma[linhas][colunas];

    // Preenchimento das matrizes
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            matriz1[linha][coluna] = rand() % 10;
            matriz2[linha][coluna] = rand() % 10;
            matrizSoma[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
        }
    }

    // Imprimir a primeira matriz
    printf("MATRIZ 1:\n\n");
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("%i ", matriz1[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");

    // Imprimir a segunda matriz
    printf("MATRIZ 2:\n\n");
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("%i ", matriz2[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");

    // Imprimir a soma das matriz
    printf("SOMA DAS MATRIZES:\n\n");
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("%i ", matrizSoma[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}