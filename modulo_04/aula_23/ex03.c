// Exercício 3: Escreva um programa que imprime em ordem decrescente todos os números inteiros maiores que zero a partir de um número fornecido pelo usuário.

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = numero; i > 0; i--) {
        printf("%i\n", i);
    }

    return 0;
}