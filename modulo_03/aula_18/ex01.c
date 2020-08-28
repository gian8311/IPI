// Escreva um programa que gere um número aleatório inteiro entre 0 e 100. Imprima na tela `(numero) eh maior que 50`, se o número gerado for maior que 50, e imprima `(numero) eh menor ou igual a 50` caso contrário.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int numero = rand() % 101;

    if (numero > 50) {
        printf("%i eh maior que 50", numero);
    } else {
        printf("%i eh menor ou igual a 50", numero);
    }

    return 0;
}
