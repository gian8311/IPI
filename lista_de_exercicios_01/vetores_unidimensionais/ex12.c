// 12 - Leia um vetor com 10 números reais, ordene os elementos deste vetor de forma crescente (menor para o maior), e no final imprima os elementos do vetor ordenado.

#include <stdio.h>

int main(void) {
    int tam = 10;
    float numeros[tam];

    // Preenchendo o vetor
    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº numero: ", i + 1);
        scanf("%f", &numeros[i]);
        getchar();
    }

    for (int i = 0; i < tam; i++) {
        int chave = i;
        for (int j = i + 1; j < tam; j++) {
            if (numeros[j] < numeros[chave]) {
                chave = j;
            }
        }

        int swap = numeros[chave];
        numeros[chave] = numeros[i];
        numeros[i] = swap;
    }

    printf("\nO vetor em ordem crescente eh: ");
    for (int i = 0; i < tam; i++) {
        printf("%.2f ", numeros[i]);
    }

    return 0;
}