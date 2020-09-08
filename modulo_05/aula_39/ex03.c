// Exercício 3: Escreva um programa que lê 6 valores inteiros pares. Caso seja digitado um valor ímpar, peça para que o usuário redigite um número. Uma vez preenchido com 6 valores pares, imprima na tela os valores lidos na ordem inversa.

#include <stdio.h>

int main(void) {
    int tam = 6, pares[tam];

    for (int i = 0; i < tam; i++) {
        int numero_digitado;

        do {
            printf("Digite o %iº numero par: ", i + 1);
            scanf("%i", &numero_digitado);
            getchar();

            printf("\n");

        } while (numero_digitado % 2 != 0);

        pares[i] = numero_digitado;
    }

    for (int i = 0; i < tam; i++) {
        printf("%i ", pares[i]);
    }

    printf("\n");

    for (int i = tam - 1; i >= 0; i--) {
        printf("%i ", pares[i]);
    }

    return 0;
}