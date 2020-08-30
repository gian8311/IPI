// 11 - Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (+, -, /, *). O usuário escolhe uma das opções e o seu programa então pede dois valores reais, realiza a operação e imprime o resultado na tela.

#include <stdio.h>

int main(void) {
    char operacao;
    float x, y;

    printf("=-=-=- CALCULADORA -=-=-=\n");
    printf("[+] SOMA\n");
    printf("[-] SUBTRACAO\n");
    printf("[/] DIVISAO\n");
    printf("[*] MULTIPLICACAO\n");

    printf("\nEscolha uma operacao: ");
    scanf("%c", &operacao);

    printf("Digite dois numeros (x, y): ");
    scanf("%f, %f", &x, &y);

    switch (operacao) {
        case '+':
            printf("%.2f + %.2f = %.2f", x, y, x + y);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", x, y, x - y);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f", x, y, x / y);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", x, y, x * y);
            break;
        default:
            printf("Opcao invalida");
            break;
    }

    return 0;
}