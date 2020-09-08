//15 - Crie um programa que desenhe a diagonal principal e a diagonal secundária do quadrado (o tamanho do quadrado deve ser fornecido pelo usuário), como a seguir:
// Exemplo do quadrado com tamanho 5 (5 linhas e 5 colunas).
// X   X
//  X X
//   X
//  X X
// X   X

#include <stdio.h>

int main(void) {
    int linhasEColunas;

    printf("Digite o numero do lado: ");
    scanf("%i", &linhasEColunas);

    for (int i = 1; i <= linhasEColunas; i++) {      // Linhas
        for (int j = 1; j <= linhasEColunas; j++) {  // Colunas
            if (i == j || i + j == linhasEColunas + 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}