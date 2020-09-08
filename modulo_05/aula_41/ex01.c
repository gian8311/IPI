// Exercício 1: Escreva um programa que cria um vetor de inteiros com o tamanho 100. Atribua valores aleatórios entre 0 e 10. Um vez que o vetor estiver inicializado, peça ao usuário um numero inteiro entre 0 e 10 e imprima quantas vezes aquele número consta no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 100, numeros[tam], numeroEscolhido, contador = 0;

    for (int i = 0; i < tam; i++) {
        numeros[i] = rand() % 11;
    }
    for (int i = 0; i < tam; i++) {
        printf("numeros[%i]: %i\n ", i, numeros[i]);
    }

    do {
        printf("\nDigite um valor entre 0 e 10: ");
        scanf("%i", &numeroEscolhido);
        getchar();

    } while (numeroEscolhido < 0 || numeroEscolhido > 10);

    for (int i = 0; i < tam; i++) {
        if (numeros[i] == numeroEscolhido) {
            contador++;
        }
    }

    printf("%i aparece %i vezes no vetor.\n\n", numeroEscolhido, contador);

    return 0;
}