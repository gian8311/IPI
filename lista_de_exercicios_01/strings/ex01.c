// 1 - Receber um nome e imprimir as 4 primeiras letras do nome.

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[20];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    getchar();

    for (int i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }

    return 0;
}