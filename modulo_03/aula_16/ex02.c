// Escreva um programa que peça ao usuário dois números reais: a e b. Imprima o resultado de a/b, apenas se b for diferente de 0.

#include <stdio.h>

int main(void) {
    float a, b;

    printf("Digite 2 numeros (a/b): ");
    scanf("%f/%f", &a, &b);

    if (b != 0) {
        printf("A divisão entre a e b eh: %f", a / b);
    }

    return 0;
}