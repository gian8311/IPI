// 8 - Em um tabuleiro 5x5, você precisa posicionar 5 inimigos, 2 heróis, 4 armas e 2 porções aleatoriamente. Ao final do programa, imprima a matriz com todas as peças posicionadas.
// OBS: Os demais espaços devem estar livres.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 5, x, y, inimigos = 5, herois = 2, armas = 4, porcoes = 2;
    char tabuleiro[tam][tam];

    // Preencher tabuleiro com " "
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            tabuleiro[i][j] = '_';
        }
    }

    // Inserir inimigos
    for (int i = 0; i < inimigos; i++) {
        int ehVazio = 0;
        do {
            x = rand() % 5;
            y = rand() % 5;

            if (tabuleiro[x][y] == '_') {
                ehVazio = 1;
            }

        } while (!ehVazio);
        if (ehVazio) {
            tabuleiro[x][y] = 'I';
        }
    }

    // Inserir heróis
    for (int i = 0; i < herois; i++) {
        int ehVazio = 0;
        do {
            x = rand() % 5;
            y = rand() % 5;

            if (tabuleiro[x][y] == '_') {
                ehVazio = 1;
            }

        } while (!ehVazio);
        if (ehVazio) {
            tabuleiro[x][y] = 'H';
        }
    }

    // Inserir armas
    for (int i = 0; i < armas; i++) {
        int ehVazio = 0;
        do {
            x = rand() % 5;
            y = rand() % 5;

            if (tabuleiro[x][y] == '_') {
                ehVazio = 1;
            }

        } while (!ehVazio);
        if (ehVazio) {
            tabuleiro[x][y] = 'A';
        }
    }

    // Inserir porções
    for (int i = 0; i < porcoes; i++) {
        int ehVazio = 0;
        do {
            x = rand() % 5;
            y = rand() % 5;

            if (tabuleiro[x][y] == '_') {
                ehVazio = 1;
            }

        } while (!ehVazio);
        if (ehVazio) {
            tabuleiro[x][y] = 'P';
        }
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("|%c|", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
