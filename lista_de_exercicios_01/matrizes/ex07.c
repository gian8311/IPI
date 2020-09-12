// 7 - Faça um programa que leia duas matrizes 3 x 3 com valores reais. Ofereça ao usuário um menu de opções:
// 1 - Somar as duas matrizes
// 2 - Subtrair a primeira matriz da segunda
// 3 - Adicionar uma constante as duas matrizes
// Nas duas primeiras opções uma terceira matriz 3 x 3 deve ser criada.
// Na terceira opção o valor da constante deve ser lido e cada valor da matriz deve ser somado ao valor lido.

#include <stdio.h>

int main(void) {
    int tam = 3;
    float matriz1[tam][tam], matriz2[tam][tam];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Digite o valor da posicao [%i][%i] da matriz A: ", i, j);
            scanf("%f", &matriz1[i][j]);
            getchar();
        }
    }

    printf("\n");

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Digite o valor da posicao [%i][%i] da matriz B: ", i, j);
            scanf("%f", &matriz2[i][j]);
            getchar();
        }
    }

    int opcao = 0;

    do {
        printf("\n=-=-=- MENU -=-=-=\n\n");
        printf("1 - Somar as duas matrizes\n");
        printf("2 - Subtrair a primeira matriz da segunda\n");
        printf("3 - Adicionar uma constante as duas matrizes\n");
        printf("\nEscolha uma opcao: ");
        scanf("%i", &opcao);

        if (opcao <= 0 || opcao > 3) {
            printf("\nOpcao invalida!\n\n");
        }

    } while (opcao <= 0 || opcao > 3);

    float matriz3[tam][tam];

    switch (opcao) {
        case 1:
            for (int i = 0; i < tam; i++) {
                for (int j = 0; j < tam; j++) {
                    matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
            break;

        case 2:
            for (int i = 0; i < tam; i++) {
                for (int j = 0; j < tam; j++) {
                    matriz3[i][j] = matriz2[i][j] - matriz1[i][j];
                }
            }
            break;

        case 3:;
            float constante;

            printf("\nDigite a constante a ser adicionada: ");
            scanf("%f", &constante);
            getchar();

            for (int i = 0; i < tam; i++) {
                for (int j = 0; j < tam; j++) {
                    matriz1[i][j] += constante;
                    matriz2[i][j] += constante;
                }
            }
            break;
    }

    printf("\n\n");

    printf("MATRIZ A:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%.1f ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("MATRIZ B:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%.1f ", matriz2[i][j]);
        }
        printf("\n");
    }

    if (opcao != 3) {
        printf("\n\n");

        printf("MATRIZ C:\n");
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                printf("%.1f ", matriz3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}