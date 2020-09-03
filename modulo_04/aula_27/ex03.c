// Exercício 3: Escreva um programa que leia um número inteiro positivo N e imprima todos os números pares de 0 até N em ordem crescente.

#include <stdio.h>

int main(void) {
    int fim, num = 0;

    printf("Digite um numero: ");
    scanf("%i", &fim);

    while (num <= fim) {
        if (num % 2 == 0) {
            printf("%i ", num);
        }
        num++;
    }

    return 0;
}