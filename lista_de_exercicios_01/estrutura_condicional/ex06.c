// 6 - Uma empresa deseja dar 20% de aumento para aqueles funcionários que possuem salário menor ou igual a R$1000,00 e um aumento de 10% para aqueles que possuem salários maiores que R$1000,00. Escreva um programa que pede para o usuário digitar o seu salário. Imprima seu novo salário na tela.

#include <stdio.h>

int main(void) {
    float salario;

    printf("Digite o seu salario: R$");
    scanf("%f", &salario);

    if (salario <= 1000) {
        printf("Seu novo salario eh R$ %.2f", salario * 1.2);
    } else {
        printf("Seu novo salario eh R$ %.2f", salario * 1.1);
    }

    return 0;
}