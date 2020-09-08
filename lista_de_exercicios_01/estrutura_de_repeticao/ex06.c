// 6 - Faça um programa que leia de forma indefinida vários números, calcule e mostre:
// a) A soma dos números digitados
// b) A quantidade de números digitados
// c) A média dos números digitados
// d) O maior número digitado
// e) O menor número digitado
// f) A média dos números pares
// Finalize a entrada de dados caso o usuário informe o valor 0.

#include <stdio.h>

int main(void) {
    int numero = 1, total = 0, maior = -9999, menor = 9999, pares = 0;
    float soma = 0, somaPares = 0;

    while (numero != 0) {
        printf("Digite um numero (0 para sair): ");
        scanf("%i", &numero);
        getchar();

        if (numero == 0) {
            break;
        }

        soma += numero;

        total++;

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        if (numero % 2 == 0) {
            pares++;
            somaPares += numero;
        }
    }
    printf("A soma dos numeros digitados eh %.0f.\n", soma);
    printf("Voce digitou %i numeros.\n", total);
    printf("A media dos numeros digitados eh %.2f.\n", soma / total);
    printf("O maior numero foi %i.\n", maior);
    printf("O menor numero foi %i.\n", menor);
    printf("A media dos numeros pares digitados foi %.2f.\n", somaPares / pares);
}