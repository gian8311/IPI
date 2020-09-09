// 9 - Criar um algoritmo que leia dois vetores de números inteiros, tendo cada um 10 e 20 elementos respectivamente, e apresentar os elementos que não são comuns aos dois vetores.

#include <stdio.h>

int main(void) {
    int tam1 = 10, tam2 = 20, numeros1[tam1], numeros2[tam2];

    for (int i = 0; i < tam1; i++) {
        printf("Digite o %iº valor do vetor A: ", i + 1);
        scanf("%i", &numeros1[i]);
        getchar();
    }

    for (int i = 0; i < tam2; i++) {
        printf("Digite o %iº valor do vetor B: ", i + 1);
        scanf("%i", &numeros2[i]);
        getchar();
    }

    int comuns[tam2], nComuns = 0;

    for (int i = 0; i < tam2; i++) {
        for (int j = 0; j < tam1; j++) {
            if (numeros2[i] == numeros1[j]) {
                comuns[nComuns] = numeros2[i];
                nComuns++;
                break;
            }
        }
    }

    printf("Os numeros nao comuns aos 2 vetores sao: ");

    for (int i = 0; i < tam1; i++) {
        int numeroAtual = numeros1[i];
        int estaNoComum = 1;

        for (int j = 0; j < nComuns; j++) {
            if (numeros1[i] == comuns[j]) {
                estaNoComum = 1;
                break;
            } else {
                estaNoComum = 0;
            }
        }

        if (estaNoComum == 0) {
            printf("%i ", numeroAtual);
        }
    }

    for (int i = 0; i < tam2; i++) {
        int numeroAtual = numeros2[i];
        int estaNoComum = 1;

        for (int j = 0; j < nComuns; j++) {
            if (numeroAtual == comuns[j]) {
                estaNoComum = 1;
                break;
            } else {
                estaNoComum = 0;
            }
        }

        if (estaNoComum == 0) {
            printf("%i ", numeroAtual);
        }
    }
    return 0;
}