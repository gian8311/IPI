// 5 - Digite um nome, calcule e retorne quantas letras tem esse nome

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[30];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    getchar();

    int numeroDeLetras = strlen(nome);

    printf("O seu nome tem %i letras", numeroDeLetras);

    return 0;
}