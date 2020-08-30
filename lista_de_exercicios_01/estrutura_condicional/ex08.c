// 8 - Um hotel cobra R$50,00 reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
// - R$ 15,30 por dia, se número de diárias < 15
// - R$ 10,00 por dia, se número de diárias = 15
// - R$ 8,50 por dia, se número de diárias >15
// Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime o valor total a pagar.

#include <stdio.h>

int main(void) {
    int dias;
    float servico;

    printf("Quantos dias voce ficou no hotel? ");
    scanf("%i", &dias);

    float diaria = 50 * dias;

    if (dias < 15) {
        servico = 15.3 * dias;
    } else if (dias > 15) {
        servico = 8.5 * dias;
    } else {
        servico = 10 * dias;
    }

    float total = diaria + servico;

    printf("O valor total a ser pago eh de R$ %.2f", total);

    return 0;
}