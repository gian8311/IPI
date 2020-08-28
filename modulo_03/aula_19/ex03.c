// Exercício 3: Escreva um programa que recebe a idade de uma pessoa e imprima na tela em qual categoria ela se encontra
// - 10 - 14 infantil
// - 15 - 17 juvenil
// - 18 - 25 adulto

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade > 25 || idade < 10) {
        printf("Voce nao se encontra em nenhum categoria!");
    } else {
        printf("Voce se encontra na categoria ");
    }

    if (idade >= 10 && idade <= 14) {
        printf("infantil!");
    } else if (idade >= 15 && idade <= 17) {
        printf("juvenil!");
    } else if (idade >= 18 && idade <= 25) {
        printf("adulto!");
    }

    return 0;
}