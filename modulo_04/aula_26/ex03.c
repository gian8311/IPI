// Exercício 3: Escreva um programa que receba dois números. Calcule e mostre:
// - A soma dos números pares desse intervalo de números, incluindo os números digitados.
// - A multiplicação dos números ímpares desse intervalo, incluindo os digitados.

#include <stdio.h>

int main(void) {
    int comeco, fim, somaPares, multImpares;

    somaPares = 0;
    multImpares = 1;

    printf("Digite o comeco do intervalo: ");
    scanf("%i", &comeco);

    printf("Digite o fim do intervalo: ");
    scanf("%i", &fim);

    for (int i = comeco; i <= fim; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            multImpares *= i;
        }
    }
    printf("A soma dos números pares nesse intervalo eh %i\n", somaPares);
    printf("A multiplicação dos números impares nesse intervalo eh %i", multImpares);

    return 0;
}