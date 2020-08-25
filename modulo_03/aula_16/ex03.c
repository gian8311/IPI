// Escreva um programa que peça ao usuário dois números reais: a e b. Imprima o maior dos dois valores na tela.

#include <stdio.h>

int main(void) {
    float a, b;

    printf("Digite 2 numeros (a, b): ");
    scanf("%f, %f", &a, &b);

    if (a > b) {
        printf("O maior valor entre os dois eh: %f", a);
    }

    if (b > a) {
        printf("O maior valor entre os dois eh: %f", b);
    }
    return 0;
}