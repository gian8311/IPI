// 3 - Faça um programa que lê 2 valores A e B (inteiros) e informa se A é divisível por B ou não.

#include <stdio.h>

int main(void) {
    int x, y;

    printf("Escreva 2 numeros (x, y): ");
    scanf("%i, %i", &x, &y);

    if (x % y == 0) {
        printf("%i eh divisivel por %i", x, y);
    }
}