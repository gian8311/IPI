// 1 - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

#include <stdio.h>

int main(void) {
    int tam = 4, matriz[tam][tam], maioresQueDez = 0;

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Digite o numero da matriz na posição [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
            getchar();

            if (matriz[i][j] > 10) {
                maioresQueDez++;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    if (maioresQueDez == 0) {
        printf("Nenhum numero eh maior que 10!");
    } else if (maioresQueDez == 1) {
        printf("Apenas 1 numero eh maior do que 10!");
    } else {
        printf("%i numeros são maiores que 10!", maioresQueDez);
    }

    return 0;
}