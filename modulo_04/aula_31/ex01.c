// Exercício 1: Escreva um programa que exiba na tela a tabuada de multiplicação dos números de 1 a 9.

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++) {
        printf("Tabuada de %i:\n\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%i * %i = %i\n", i, j, i * j);
        }
        printf("\n");
    }
}