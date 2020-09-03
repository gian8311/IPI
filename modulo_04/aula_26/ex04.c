// Exercício 4: Escreva um programa que simula o lançamento de dois dados, d1 e d2 (d1 e d2 assumem valores aleatórios entre 1 e 6) N vezes (fornecido pelo usuário), e tem como saída o número de cada dado e a relação entre eles(<, >, =) de cada lançamento.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numLancamentos;
    srand(time(NULL));

    printf("Digite quantas vezes os dados devem ser jogados: ");
    scanf("%i", &numLancamentos);

    for (int i = 1; i <= numLancamentos; i++) {
        int d1, d2;
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        if (d1 > d2) {
            printf("Lancamento %i: %i > %i\n", i, d1, d2);
        } else if (d1 < d2) {
            printf("Lancamento %i: %i < %i\n", i, d1, d2);
        } else {
            printf("Lancamento %i: %i = %i\n", i, d1, d2);
        }
    }

    return 0;
}