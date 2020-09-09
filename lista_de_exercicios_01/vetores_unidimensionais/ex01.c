// 1 - Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.

#include <stdio.h>

int main(void) {
    int tam = 10, negativos = 0;
    float numeros[tam], somaPositivos = 0;

    // Preencher vetor
    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº numero: ", i + 1);
        scanf("%f", &numeros[i]);
        getchar();
    }

    // Passar pelo vetor e verificar positivos e negativos
    for (int i = 0; i < tam; i++) {
        if (numeros[i] < 0) {
            negativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("O numero de negativos eh %i!\n", negativos);
    printf("A soma dos positivos eh %.2f!", somaPositivos);

    return 0;
}