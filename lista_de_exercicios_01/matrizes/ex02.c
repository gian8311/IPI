// 2 - Preencha uma matriz 5 x 5 com valores aleatórios entre 0 e 100. Em seguida, leia um valor X. O programa deverá fazer uma busca por este valor na matriz e, ao final, escrever a localização (linha e coluna), caso a primeira instância desse valor seja encontrado. Caso não seja encontrado, imprimir a mensagem “nao encontrado”.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 5, matriz[tam][tam];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    int numero;

    printf("Digite um numero para procurar na matriz: ");
    scanf("%i", &numero);
    getchar();

    int achou = 0;

    for (int i = 0; i < tam; i++) {
        if (achou) {
            break;
        }

        for (int j = 0; j < tam; j++) {
            if (numero == matriz[i][j]) {
                achou = 1;
                printf("O numero %i foi encontrado na posicao [%i][%i]!", numero, i, j);
                break;
            }
        }
    }

    if (achou == 0) {
        printf("O numero nao foi encontrado!");
    }

    return 0;
}