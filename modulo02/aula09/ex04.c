// Exercício 4: Escreva um programa que pede ao usuário que digite a primeira letra do seu nome e que a imprima na tela.

#include <stdio.h>

int main(void) {
    char primeiraLetra;

    printf("Escreva a primeira letra do seu nome: ");
    scanf("%c", &primeiraLetra);

    printf("A primeira letra do seu nome eh %c", primeiraLetra);
    return 0;
}