// Exercício 2: Escreva um programa que lê um número inteiro N. Imprima na tela a matriz identidade de tamanho NxN. A matriz identidade é aquela que os elementos na diagonal principal são iguais a 1.
// 1 0 0
// 0 1 0
// 0 0 1

#include <stdio.h>

int main(void) {
    int linhasEColunas;

    printf("Digite o valor de N: ");
    scanf("%i", &linhasEColunas);

    for (int i = 1; i <= linhasEColunas; i++) {      // Linhas
        for (int j = 1; j <= linhasEColunas; j++) {  // Colunas
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}