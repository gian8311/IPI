// 4 - Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que a cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro da cartela. O programa deve exibir na tela a cartela gerada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 5, cartela[tam][tam], inseridos[tam * tam], indiceInseridos = 0;

    // Preenche o vetor dos numeros inseridos com -1
    for (int i = 0; i < tam * tam; i++) {
        inseridos[i] = -1;
    }

    // Preenche a matriz da cartela sem nenhum numero repetido
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            int jaFoiInserido = 0, numeroGerado;
            do {
                numeroGerado = rand() % 100;
                for (int x = 0; x < tam * tam; x++) {
                    if (numeroGerado == inseridos[x]) {
                        jaFoiInserido = 1;
                        break;
                    } else {
                        jaFoiInserido = 0;
                    }
                }
            } while (jaFoiInserido != 0);

            if (jaFoiInserido == 0) {
                cartela[i][j] = numeroGerado;
                inseridos[indiceInseridos] = numeroGerado;
                indiceInseridos++;
            }
        }
    }

    // Imprime a cartela
    printf("Cartela de bingo:\n\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%i ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}