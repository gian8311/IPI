// 2 - Faça um programa que pede que o usuário digite um número inteiro positivo maior que zero e armazene na variável TAM. Enquanto o usuário digitar um número inválido, peça para que ele redigite. Um vez definido o valor de TAM, crie um vetor com TAM elementos. Inicialize o vetor com valores aleatórios entre 0-100. Uma vez preenchido, armazene em um segundo vetor cada valor do primeiro vetor só que elevado ao quadrado. Imprima o segundo vetor.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam;

    do {
        printf("Digite um valor maior do que 0: ");
        scanf("%i", &tam);
        getchar();
        printf("\n");

    } while (tam <= 0);

    int vetor[tam];

    for (int i = 0; i < tam; i++) {
        vetor[i] = rand() % 101;
    }

    int vetorAoQuadrado[tam];

    for (int i = 0; i < tam; i++) {
        vetorAoQuadrado[i] = pow(vetor[i], 2);
    }

    printf("Os numeros ao quadrado sao: ");

    for (int i = 0; i < tam; i++) {
        printf("%i ", vetorAoQuadrado[i]);
    }

    return 0;
}