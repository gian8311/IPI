// 14 - Dados um número inteiro N, N > 0, e uma sequência com N números inteiros maiores do que zero, determinar o fatorial de cada número da sequência.

#include <stdio.h>

int main(void) {
    int quantidade;

    printf("Digite o tamanho da sequencia: ");
    scanf("%i", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        int numero, fatorial = 1;

        printf("Digite um numero maior que 0: ");
        scanf("%i", &numero);
        getchar();

        for (int j = numero; j >= 1; j--) {
            fatorial *= j;
        }
        printf("\nO fatorial de %i eh %i!\n\n", numero, fatorial);
    }

    return 0;
}