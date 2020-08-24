// Exercício 1: Escreva um programa que pede ao usuário que digite sua idade e que a imprima na tela.

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Sua idade eh %i", idade);

    return 0;
}