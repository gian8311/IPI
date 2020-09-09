// 10 - Inicialize um vetor com 20 números inteiros aleatórios entre 0 e 10. Escreva os elementos do vetor eliminando os elementos repetidos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 20, numeros[tam];

    // Preenchendo o vetor com numeros aleatórios
    for (int i = 0; i < tam; i++) {
        numeros[i] = rand() % 11;
    }

    int imprimidos[tam], nImprimidos = 0;

    printf("Os numeros gerados foram: ");

    // Imprimindo o vetor, excluindo os repetidos
    for (int i = 0; i < tam; i++) {
        int jaFoiImprimido = 0, numeroAtual = numeros[i];

        for (int j = 0; j < tam; j++) {
            if (numeroAtual == imprimidos[j]) {
                jaFoiImprimido = 1;
                break;
            }
        }

        if (jaFoiImprimido == 0) {
            printf("%i ", numeroAtual);
            imprimidos[nImprimidos] = numeroAtual;
            nImprimidos++;
        }
    }

    return 0;
}