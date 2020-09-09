// 11 - Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a união entre os 2 vetores anteriores, ou seja, que contém os números dos dois vetores sem repetição.

#include <stdio.h>

int main(void) {
    int tam = 10, numeros1[tam], numeros2[tam];

    // Preenchendo o vetor 1
    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº valor do vetor A: ", i + 1);
        scanf("%i", &numeros1[i]);
        getchar();
    }

    // Preenchendo o vetor 2
    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº valor do vetor B: ", i + 1);
        scanf("%i", &numeros2[i]);
        getchar();
    }

    int uniao[tam * 2], nUniao = 0;

    // Limpar o vetor uniao
    for (int i = 0; i < tam * 2; i++) {
        uniao[i] = 0;
    }

    // Adicionando numeros do vetor 1 a uniao
    for (int i = 0; i < tam; i++) {
        int numeroAtual = numeros1[i];
        int estaNaUniao = 1;

        for (int j = 0; j < tam * 2; j++) {
            if (numeroAtual == uniao[j]) {
                break;
            } else {
                estaNaUniao = 0;
            }
        }

        if (!estaNaUniao) {
            uniao[nUniao] = numeroAtual;
            nUniao++;
        }
    }

    // Adicionando numeros do vetor 2 a uniao
    for (int i = 0; i < tam; i++) {
        int numeroAtual = numeros2[i];
        int estaNaUniao = 1;

        for (int j = 0; j < tam * 2; j++) {
            if (numeroAtual == uniao[j]) {
                break;
            } else {
                estaNaUniao = 0;
            }
        }

        if (!estaNaUniao) {
            uniao[nUniao] = numeroAtual;
            nUniao++;
        }
    }

    printf("\n");
    printf("O conjunto uniao dos dois vetores eh: ");

    for (int i = 0; i < nUniao; i++) {
        printf("%i ", uniao[i]);
    }

    return 0;
}