// Exercício 1: Escreva um programa que imprime a tecla digitada pelo usuário até o usuário digitar 'x'.

#include <stdio.h>

int main(void) {
    char tecla = ' ';

    while (tecla != 'x') {
        printf("\nDigite uma tecla: ");
        scanf("%c", &tecla);
        getchar();
    }

    printf("Voce digitou a tecla x e encerrou o programa!");

    return 0;
}