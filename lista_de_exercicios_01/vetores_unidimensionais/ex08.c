// 8 - Faça um programa que cria um vetor de 10 elementos inteiros. Inicialize cada posição do vetor com o valor -1. Posições com o valor -1, significam que estão disponíveis.
// O programa deve pedir para que o usuário digite dois valores: o valor a ser adicionado no vetor e o índice (entre 0-9) em que o valor digitado será inserido no vetor. Se o índice digitado diz respeito à uma posição disponível do vetor (valor igual a -1), o valor é inserido. Caso contrário, deve-se imprimir uma mensagem informando que aquela posição já foi preenchida. O programa deve ser encerrado quando todas as posições estiverem preenchidas.

#include <stdio.h>

int main(void) {
    int tam = 10, numeros[tam], preenchidos = 0;

    // Preencher todo o vetor com -1
    for (int i = 0; i < tam; i++) {
        numeros[i] = -1;
    }

    do {
        int numeroEscolhido, indice;
        preenchidos = 0;

        // Perguntar o número e índice
        printf("Digite o valor a ser adicionado e o indice (0-%i): ", tam - 1);
        scanf("%i %i", &numeroEscolhido, &indice);
        getchar();

        printf("\n");

        // Verificando se o índice ja está preenchido
        if (numeros[indice] == -1) {
            numeros[indice] = numeroEscolhido;
            printf("%i adicionado ao indice %i com sucesso!\n", numeroEscolhido, indice);
            printf("\n");
        } else {
            printf("O indice %i ja esta preenchido com o numero %i!\n", indice, numeros[indice]);
            printf("\n");
        }

        for (int i = 0; i < tam; i++) {
            if (numeros[i] >= 0) {
                preenchidos++;
            }
        }

    } while (preenchidos < tam);

    printf("O vetor final foi: ");
    for (int i = 0; i < tam; i++) {
        printf("%i ", numeros[i]);
    }

    return 0;
}