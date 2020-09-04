// Exercício 2: Escreva um programa que peça ao jogador para adivinhar o número da sorte (entre 0 e 100) gerado aleatoriamente pelo programa. O jogador vai entrando com números, e o programa vai informando se o número do jogador é maior ou menor que o número da sorte. Quando o jogador acertar o programa deve imprimir `ACERTOU` e informar o número de tentativas do jogador.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tentativas = 0, numSorte, numero;

    srand(time(NULL));
    numSorte = rand() % 101;

    do {
        printf("Tente adivinhar o numero da sorte: ");
        scanf("%i", &numero);
        getchar();
        tentativas++;

        if (numero > numSorte) {
            printf("\nO seu numero eh maior do que o numero da sorte!\n\n");
        } else if (numero < numSorte) {
            printf("\nO seu numero eh menor do que o numero da sorte!\n\n");
        }

    } while (numero != numSorte);
    printf("\nPARABENS!! Voce acertou o numero da sorte com %i tentativas!", tentativas);
}
