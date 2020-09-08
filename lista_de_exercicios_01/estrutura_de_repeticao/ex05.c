// 5 - Dado um número inteiro positivo, verificar se o número é primo ou não.
// OBS: Número primo é aquele que possui apenas dois divisores, o número 1 e o próprio número.

#include <stdio.h>

int main(void) {
    int numero, divisores = 0;
    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++) {
        if (divisores > 2) {
            break;
        }

        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%i eh primo!", numero);
    } else {
        printf("%i nao eh primo!", numero);
    }

    return 0;
}