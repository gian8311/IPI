// Exercício 1: Escreva um programa que lê um número inteiro, e imprime na tela todos os números ímpares menores ou iguais ao número lido. Considere 0 como o mínimo valor possível.

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = 0; i <= numero; i++) {
        if (i % 2 != 0) {
            printf("%i\n", i);
        }
    }

    return 0;
}