// 6 - Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores do primeiro e nas posições ímpares os valores do segundo.

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
        if (i % 2 == 0) {
            vetorC[i] = vetorA[i];
        } else {
            vetorC[i] = vetorB[i];
        }
    }

    printf("\n");

    // Imprimindo o vetor C
    printf("Os valores do vetor C são:\n");

    for (int i = 0; i < tam; i++) {
        printf("%iº: %i\n", i + 1, vetorC[i]);
    }

    return 0;
}