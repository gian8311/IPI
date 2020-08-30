// 9 - Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um vendedor de plano de saúde apresentou a tabela a seguir.
// - Até 10 anos – R$30,00
// - Acima de 10 até 29 anos – R$60,00
// - Acima de 29 até 45 anos – R$120,00
// - Acima de 45 até 59 anos – R$150,00
// - Acima de 59 até 65 anos – R$250,00
// - Maior que 65 anos – R$400,00
// Criar um algoritmo que entre com a idade de uma pessoa e imprimir o valor que ela deverá pagar.

#include <stdio.h>

int main(void) {
    int idade;
    float valor;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 1) {
        printf("Voce digitou um valor invalido!");
    } else {
        if (idade <= 10) {
            valor = 30;
        } else if (idade > 10 && idade <= 29) {
            valor = 60;
        } else if (idade > 29 && idade <= 45) {
            valor = 120;
        } else if (idade > 45 && idade <= 59) {
            valor = 150;
        } else if (idade > 59 && idade <= 65) {
            valor = 250;
        } else {
            valor = 400;
        }
        printf("O valor do seu plano de saude eh R$ %.2f", valor);
    }

    return 0;
}