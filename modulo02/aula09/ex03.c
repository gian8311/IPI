// Exercício 3: Escreva um programa que pede ao usuário que digite o seu peso e que o imprima na tela.

#include <stdio.h>

int main(void) {
    float peso;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("O seu peso eh %f.", peso);

    return 0;
}
