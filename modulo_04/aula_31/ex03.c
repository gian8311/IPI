// Exercício 3: Escreva um programa que peça ao jogador para adivinhar o número da sorte (entre 0 e 100) gerado aleatoriamente pelo programa. O jogador vai entrando com números, e o programa vai informando se o número do jogador é maior ou menor que o número da sorte. Quando o jogador acertar o programa deve imprimir `ACERTOU` e informar o número de tentativas do jogador. Ao final do jogo, deve ser perguntado se o usuário deseja jogar novamente, caso digite 's', o jogo é recomeçado, caso digite 'n', o jogo é encerrado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int numeroSorte, numero, tentativas = 0;
    char continuar = ' ';

    while (continuar != 'n') {
        tentativas = 0;
        numeroSorte = rand() % 101;

        do {
            printf("\nTente adivinhar o numero da sorte: ");
            scanf("%i", &numero);
            getchar();
            tentativas++;

            if (numero > numeroSorte) {
                printf("\nO numero que voce digitou eh maior do que o numero da sorte!\n");
            } else if (numero < numeroSorte) {
                printf("\nO numero que voce digitou eh menor do que o numero da sorte!\n");
            }

        } while (numeroSorte != numero);

        printf("\nPARABENS!! Voce acertou o numero da sorte em %i tentativas!\n", tentativas);

        printf("\nJogar novamente (s ou n)? ");
        scanf("%c", &continuar);
        getchar();
    }
}