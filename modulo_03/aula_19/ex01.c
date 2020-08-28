// Exercício 1: Escreva um programa que pergunte o dia, mês e ano do nascimento de uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estamos no ano de 2020

#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite a sua data de nascimento (dd/mm/aaaa): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    if (ano > 2020) {
        printf("Você digitou um ano invalido!");
    } else if (mes < 1 || mes > 12) {
        printf("Você digitou um mes invalido!");
    } else if (dia < 1 || dia > 31) {
        printf("Você digitou um dia invalido!");
    } else {
        printf("Você digitou uma data de nascimento valida!");
    }

    return 0;
}