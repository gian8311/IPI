// Exercício 2: Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (+, -, /, *). O usuário escolhe uma das opções e seu programa então pede 2 valores reais, realiza a operação e imprime o resultado na tela. O sistema deve perguntar se o usuário deseja realizar outra operação. Caso o usuário responda 's', o menu é reimpresso e o usuário entra com os dados. Caso contrário o programa é encerrado.

#include <stdio.h>

int main(void) {
    char continuar = 's';

    while (continuar == 's') {
        char operacao;
        float x, y, resultado;

        printf("\nDigite uma expressao ex(1 * 2): ");
        scanf("%f %c %f", &x, &operacao, &y);
        getchar();

        switch (operacao) {
            case '+':
                resultado = x + y;
                break;
            case '-':
                resultado = x - y;
                break;
            case '/':
                if (y != 0) {
                    resultado = x / y;
                } else {
                    printf("\nIndeterminacao matematica!\n");
                    operacao = 'a';
                }
                break;
            case '*':
                resultado = x * y;
                break;
            default:
                printf("\nOperacao invalida!\n");
                break;
        }
        if (operacao == '+' || operacao == '-' || operacao == '/' || operacao == '*') {
            printf("\n%.2f %c %.2f = %.2f\n", x, operacao, y, resultado);
        }
        printf("\nDeseja fazer outra operacao (s ou n)? ");
        scanf("%c", &continuar);
        getchar();
    }

    return 0;
}