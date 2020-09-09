// 5 - Faça um programa que receba do usuário valores inteiros para dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.

#include <stdio.h>

int main(void) {
    int tam = 10, vetorA[tam], vetorB[tam], vetorC[tam];

    // Preencher o vetor A
    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº valor do vetor A: ", i + 1);
        scanf("%i", &vetorA[i]);
        getchar();
    }

    printf("\n");

    // Preencher o vetor B
    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº valor do vetor B: ", i + 1);
        scanf("%i", &vetorB[i]);
        getchar();
    }

    printf("\n");

    // Preencher o vetor C
    for (int i = 0; i < tam; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    // Imprimir o vetor C
    printf("Os valores do vetor C foram:\n");
    for (int i = 0; i < tam; i++) {
        printf("%iº: %i\n", i + 1, vetorC[i]);
    }

    return 0;
}