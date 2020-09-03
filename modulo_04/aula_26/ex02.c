// Exercício 2: Escreva um programa que leia 10 números reais e imprima o menor valor lido e o maior valor lido.

#include <stdio.h>

int main(void) {
    float maior = -9999, menor = 9999;

    for (int i = 1; i <= 3; i++) {
        float numero;

        printf("Digite o %iº numero: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    printf("O maior numero digitado foi %.2f\n", maior);
    printf("O menor numero digitado foi %.2f", menor);

    return 0;
}