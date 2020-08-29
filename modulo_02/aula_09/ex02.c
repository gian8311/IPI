// Exercício 2: Escreva um programa que pede ao usuário que digite o dia, mês e o ano (todas as variáveis inteiras) em que nasceu e imprima na tela "Você nasceu no dia __, do mês __, do ano ____".

#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite a data do seu nascimento (dd/mm/aaaa): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    printf("Voce nasceu no dia %i, do mes %i, do ano %i.", dia, mes, ano);

    return 0;
}