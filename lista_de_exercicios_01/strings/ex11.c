// 11 - Escreva um programa que leia a idade e o primeiro nome de várias pessoas. Seu programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade da pessoa mais jovem e mais velha.

#include <stdio.h>
#include <string.h>

int main(void) {
    int idade;
    char nomeMaisVelho[30];
    int maisVelho = -1;

    do {
        char nome[30];

        printf("Digite a sua idade: ");
        scanf("%i", &idade);
        getchar();

        if (idade <= 0) {
            break;
        }

        printf("Digite o seu nome: ");
        scanf("%s", nome);
        getchar();

        if (idade > maisVelho) {
            maisVelho = idade;
            strcpy(nomeMaisVelho, nome);
        }

    } while (1);

    if (idade > 0) {
        printf("\n%s eh a pessoa mais velha das cadastradas com %i anos!", nomeMaisVelho, maisVelho);
    } else {
        printf("Ninguem foi cadastrado!");
    }

    return 0;
}