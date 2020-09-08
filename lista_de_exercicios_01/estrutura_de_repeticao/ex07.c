// 7 - Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
// Ex: Se o número lido foi 4, imprimir:
// 4x1 = 4
// 4x2 = 8
// 4x3 = 12
// …
// 4x10 = 10

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%i", &numero);
    printf("=-=-=- TABUADA DE %i -=-=-=\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}