// 4 - Leia 10 números inteiros e armazene em um vetor. Em seguida imprima os elementos que são primos e suas respectivas posições no vetor.

#include <stdio.h>

int main(void) {
    int tam = 10, numeros[tam];

    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº numero: ", i + 1);
        scanf("%i", &numeros[i]);
        getchar();
    }

    printf("\n");

    for (int i = 0; i < tam; i++) {
        int divisores = 0;
        for (int j = numeros[i]; j > 0; j--) {
            if (numeros[i] % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            printf("%iº: %i eh primo!\n", i + 1, numeros[i]);
        }
    }

    return 0;
}