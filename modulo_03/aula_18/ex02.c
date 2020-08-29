// Exercício 2: Escreva um programa que peça ao usuário dois números reais: `a` e `b`. Imprima o resultado de `a / b`, apenas se `b` for diferente de 0. Imprima o resultado na tela, caso contrario imprima que b é 0.

#include <stdio.h>

int main(void) {
    float a, b;
    printf("Digite dois valores (a/b): ");
    scanf("%f/%f", &a, &b);

    if (b != 0) {
        printf("%f dividido por %f eh igual a: %f", a, b, a / b);
    } else {
        printf("A divisao nao pode ser realizada pois b possui um valor invalido (0)");
    }

    return 0;
}
