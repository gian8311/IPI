// Exercício 1: Escreva um programa que imprime o seguinte padrão na tela.
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>

int main(void) {
    int numEstrelas, numLinhas;

    printf("Digite o numero de estrelas por linha: ");
    scanf("%i", &numEstrelas);
    getchar();

    printf("Digite o numero de linhas: ");
    scanf("%i", &numLinhas);
    getchar();

    for (int i = 1; i <= numLinhas; i++) {        // Determinar o número de linhas
        for (int j = 1; j <= numEstrelas; j++) {  // Imprimir as estrelas
            printf("*");
        }
        printf("\n");
    }

    return 0;
}