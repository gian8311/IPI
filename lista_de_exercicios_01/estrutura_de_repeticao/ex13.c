// 13 - Usando apenas os comandos printf("0"), printf("X") e printf("\n") e usando laços aninhados, faça o seguinte aparecer na tela.
// XXXXX
// 0XXXX
// 00XXX
// 000XX
// 0000X
// 00000

#include <stdio.h>

int main(void) {
    int colunas = 5, linhas = 6;

    for (int linha = 1; linha <= linhas; linha++) {
        for (int coluna = 1; coluna <= colunas; coluna++) {
            if (coluna < linha) {
                printf("0");
            } else {
                printf("X");
            }
        }
        printf("\n");
    }
    return 0;
}