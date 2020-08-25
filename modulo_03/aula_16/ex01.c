// Escreva um programa que gere um número aleatório inteiro entre 0 e 100. Imprima na tela "eh maior que 50", se o número gerado for maior que 50.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int x = rand() % 101;

    if (x > 50) {
        printf("%i eh maior que 50", x);
    }

    return 0;
}