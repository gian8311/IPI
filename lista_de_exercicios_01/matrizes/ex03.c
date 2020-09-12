// 3 - Preencha duas matrizes 4 x 4 de forma aleatória com valores entre 0 e 20, e escreva uma terceira com os maiores valores de cada posição das matrizes preenchidas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 4, matriz1[tam][tam], matriz2[tam][tam], matriz3[tam][tam];

    // Preencher as matrizes
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz1[i][j] = rand() % 21;
            matriz2[i][j] = rand() % 21;

            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    // Imprimir a matriz 1
    printf("MATRIZ 1:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%i ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Imprimir a matriz 2
    printf("MATRIZ 2:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%i ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Imprimir a matriz 3
    printf("MATRIZ 3:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%i ", matriz3[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}