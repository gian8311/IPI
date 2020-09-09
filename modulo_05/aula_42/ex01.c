// Exercício 1: Escreva um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.

#include <stdio.h>

int main(void) {
    int tam = 10, vetorOriginal[tam];

    // Preenchimento do vetor original
    for (int i = 0; i < tam; i++) {
        printf("Digite o %i° numero: ", i + 1);
        scanf("%i", &vetorOriginal[i]);
        getchar();
    }
    int repetidos[tam], nRepetidos = 0;

    // Navegar por cada posição do vetor original
    for (int i = 0; i < tam; i++) {
        int valorAtual = vetorOriginal[i];
        int existe = 0;  // Controla se o valor existe
        // Verificar se o valor existe no vetor auxiliar (repetidos)
        for (int indice = 0; indice < nRepetidos; indice++) {
            if (valorAtual == repetidos[indice]) {
                existe = 1;
                break;  // Finalizar a busca no vetor de repetidos
            }
        }
        if (existe == 0) {  // Precisamos verificar se o valor se repete no vetor original
            for (int j = i + 1; j < tam; j++) {
                if (valorAtual == vetorOriginal[j]) {
                    existe = 1;
                    break;
                }
            }
            if (existe == 1) {
                repetidos[nRepetidos] = valorAtual;
                nRepetidos++;
            }
        }
    }

    printf("\n");
    printf("Os valores repetidos sao: ");

    for (int i = 0; i < nRepetidos; i++) {
        printf("%i ", repetidos[i]);
    }

    return 0;
}