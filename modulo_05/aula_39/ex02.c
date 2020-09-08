// Exercício 2: Escreva um programa que crie um vetor de reais com 8 posições e leia seus valores. Em seguida, leia também 2 valores inteiros X e Y qualquer (entre 0 e 7) correspondentes às 2 posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>

int main(void) {
    int x, y, tam = 8;
    float numeros[tam];

    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%f", &numeros[i]);
        getchar();
    }
    printf("\n");

    for (int i = 0; i < tam; i++) {
        printf("[%i] = %.2f\n", i, numeros[i]);
    }

    printf("\n");

    printf("Digite dois indices entre 0-7 (x, y):  ");
    scanf("%i", &x, &y);
    getchar();

    printf("%.2f + %.2f = %.2f ", numeros[x], numeros[y], numeros[x] + numeros[y]);

    return 0;
}