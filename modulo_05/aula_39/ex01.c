// Exercício 1: Escreva um programa que leia um vetor de 10 posições e atribua o valor 0 para todos os valores negativos.

#include <stdio.h>

int main(void) {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &numeros[i]);
        getchar();

        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }

    return 0;
}