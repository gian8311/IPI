// Exercício 1 (Interrompendo laço antecipadamente com o break): Escreva um programa que pede ao usuário dois números inteiros X e N. O programa deve Imprimir os números de 0 até N. Porém,se o número de valores pares neste intervalo for maior que X, o programa deve ser encerrado.

#include <stdio.h>

int main(void) {
    int x, n, pares;

    printf("Digite o limite do intervalo: ");
    scanf("%i", &n);

    printf("\nDigite o numero de pares permitidos: ");
    scanf("%i", &x);

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            pares++;
        }
        if (pares > x) {
            break;
        } else {
            printf("%i ", i);
        }
    }
    return 0;
}