// Exercício 1: Escreva um programa que crie um vetor de inteiro denominado A com tamanho 6.</br> O programa deve executar os seguintes passos:
// - Atribua os seguintes valores para esse vetor: 1, 0, 5, -2, -5, 7.
// - Armazene em uma variável inteira (simples) a soma entre os valores da posição A[0], A[1] e A[5] do vetor e imprima na tela essa soma.
// - Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
// - Imprima na tela a soma entre o quadrado do valor armazenado na posição 3 e 5 do vetor.
// - Mostre na tela cada valor do vetor A, um em cada linha.

#include <math.h>
#include <stdio.h>

int main(void) {
    int A[6] = {1, 0, 5, -2, -5, 7}, soma, soma2;

    soma = A[0] + A[1] + A[5];
    printf("%i + %i + %i = %i\n", A[0], A[1], A[5], soma);

    A[3] = 100;

    soma2 = pow(A[2], 2) + pow(A[4], 2);
    printf("%i² + %i² = %i\n", A[2], A[4], soma2);

    printf("%i\n", A[0]);
    printf("%i\n", A[1]);
    printf("%i\n", A[2]);
    printf("%i\n", A[3]);
    printf("%i\n", A[4]);
    printf("%i\n", A[5]);

    return 0;
}