// 1 - Elaborar um programa em linguagem C para somar dois números inteiros e mostrar o valor da soma na tela. Você só deve imprimir a mensagem se a soma dos números for maior que 10.

#include <stdio.h>

int main(void) {
    int x, y;

    printf("Digite dois numeros para somar (x+y): ");
    scanf("%i+%i", &x, &y);

    int soma = x + y;

    if (soma > 10) {
        printf("%i + %i = %i", x, y, soma);
    }

    return 0;
}