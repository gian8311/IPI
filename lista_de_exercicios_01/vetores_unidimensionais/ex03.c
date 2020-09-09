// 3 - Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.

#include <stdio.h>

int main(void) {
    int tam = 10, numeros[tam], maior = -9999, posicaoMaior = 0;

    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº numero: ", i + 1);
        scanf("%i", &numeros[i]);
        getchar();

        if (numeros[i] > maior) {
            maior = numeros[i];
            posicaoMaior = i + 1;
        }
    }
    printf("\n");

    printf("Os numeros digitados foram:\n");
    for (int i = 0; i < tam; i++) {
        printf("%iº: %i\n", i + 1, numeros[i]);
    }

    printf("\n");

    printf("O maior numero digitado foi %i que esta na %iª posicao!", maior, posicaoMaior);
    return 0;
}