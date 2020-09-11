// 2 - Ler nome, e idade, se idade maior ou igual a 18 anos, imprime o nome da pessoa e a frase “deve votar”, caso contrário imprimir “Não é obrigado a votar”.

#include <stdio.h>

int main(void) {
    char nome[20];
    int idade;

    printf("Digite seu nome e sua idade: ");
    scanf("%s %i", &nome, &idade);

    if (idade >= 18) {
        printf("%s, voce deve votar!", nome);
    } else {
        printf("%s, voce nao eh obrigado a votar!", nome);
    }

    return 0;
}