// 9 - Você está jogando xadrez com um amigo, cada um com 8 pedras. Porém, você possui apenas um único cavalo. Dada a localização do seu cavalo e a forma como o cavalo se movimenta (em L), verifique se você consegue derrubar uma pedra do seu adversário em uma jogada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int tam = 8, inimigos = 8, aliados = 7;
    char tabuleiro[tam][tam];

    // Limpar o tabuleiro
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            tabuleiro[i][j] = '_';
        }
    }

    // Posicionar o cavalo
    int xCavalo = rand() % 8, yCavalo = rand() % 8;

    tabuleiro[xCavalo][yCavalo] = 'C';

    // Posicionar os aliados
    for (int i = 0; i < aliados; i++) {
        int jaPreenchido = 1;
        int x, y;
        do {
            x = rand() % 8;
            y = rand() % 8;

            if (tabuleiro[x][y] == '_') {
                jaPreenchido = 0;
            }

        } while (jaPreenchido);

        if (!jaPreenchido) {
            tabuleiro[x][y] = 'A';
        }
    }

    // Posicionar os inimigos
    for (int i = 0; i < inimigos; i++) {
        int jaPreenchido = 1;
        int x, y;
        do {
            x = rand() % 8;
            y = rand() % 8;

            if (tabuleiro[x][y] == '_') {
                jaPreenchido = 0;
            }

        } while (jaPreenchido);

        if (!jaPreenchido) {
            tabuleiro[x][y] = 'I';
        }
    }

    // Imprimir o tabuleiro
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("|%c|", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Verificar se o cavalo pode ou nao derrubar uma peça do inimigo
    int podeDerrubar;

    if (tabuleiro[xCavalo - 2][yCavalo - 1] == 'I' || tabuleiro[xCavalo - 2][yCavalo + 1] == 'I' || tabuleiro[xCavalo + 2][yCavalo - 1] == 'I' || tabuleiro[xCavalo + 2][yCavalo + 1] == 'I' || tabuleiro[xCavalo - 1][yCavalo - 2] == 'I' || tabuleiro[xCavalo + 1][yCavalo - 2] == 'I' || tabuleiro[xCavalo - 1][yCavalo + 2] == 'I' || tabuleiro[xCavalo + 1][yCavalo + 2] == 'I') {
        podeDerrubar = 1;
    } else {
        podeDerrubar = 0;
    }

    // Imprimir se o cavalo pode ou nao derrubar uma peça do inimigo
    if (podeDerrubar) {
        printf("O cavalo pode derrubar pelo menos uma peca do inimigo!");
    } else {
        printf("O cavalo nao pode derrubar nenhuma peca do inimigo!");
    }

    return 0;
}