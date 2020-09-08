// 1 - Faça um programa que leia 10 números inteiros (positivos ou negativos). Imprima a média dos valores, ignorando os não positivos.

#include <stdio.h>

int main(void) {
    float soma = 0, positivos = 0;

    for (int i = 1; i <= 10; i++) {
        int numero;

        printf("Digite o %iº numero: ", i);
        scanf("%i", &numero);
        getchar();

        if (numero >= 0) {
            soma += numero;
            positivos++;
        }
    }
    if (positivos > 0) {
        printf("A media dos valores positivos eh %.2f.", soma / positivos);
    } else {
        printf("Voce nao digitou nenhum valor positivo!");
    }

    return 0;
}