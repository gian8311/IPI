// Exercício 1: Escreva um programa que leia um número inteiro X. Imprima os 5 primeiros múltiplos de 3 e 7. Considerando números maiores que 0 e menores que X.

#include <stdio.h>

int main(void) {
    int x, divisores;
    printf("Digite o valor limite: ");
    scanf("%i", &x);

    for (int i = 0; i <= x; i++) {
        if (i % 3 == 0 & i % 7 == 0) {
            divisores++;
            if (divisores <= 5) {
                printf("%i ", i);
            } else {
                break;
            }
        }
    }

    return 0;
}