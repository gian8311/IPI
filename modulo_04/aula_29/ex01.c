// Exercício 1: Escreva um programa que imprime a tecla digitada pelo usuário até ele digitar 'x'.

#include <stdio.h>

int main(void) {
    char tecla;

    do {
        printf("Digite uma tecla: ");
        scanf("%c", &tecla);

        getchar();

        printf("Voce digitou a tecla %c\n", tecla);
    } while (tecla != 'x');

    printf("\nVoce saiu do programa!");
}