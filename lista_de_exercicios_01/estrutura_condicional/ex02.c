// 2 - Escreva um programa em que uma variável recebe um valor lido entre 20 e 100. Imprima na tela o valor gerado, caso seja divisível por 3 e por 5.

#include <stdio.h>

int main(void) {
    int valor;

    printf("Digite um valor entre 20 e 100: ");
    scanf("%i", &valor);

    if (valor > 100 || valor < 20) {
        printf("Valor invalido!");
    } else {
        if (valor % 3 == 0 && valor % 5 == 0) {
            printf("Voce digitou %i", valor);
        }
    }

    return 0;
}