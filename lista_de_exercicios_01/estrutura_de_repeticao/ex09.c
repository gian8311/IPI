// 9 - Criar um programa que apresenta o seguinte menu:
// BOAS VINDAS:
// 1 – Imprimir “Olá!”;
// 2 – Imprimir “Bem vindo!”;
// 3 – Sair do algoritmo;
// Se o usuário digitar a opção 1 ou 2, a respectiva mensagem é impressa. Em seguida, o menu é impresso novamente para que o usuário faça uma nova escolha. O programa só é encerrado quando o usuário digitar 3 para sair.

#include <stdio.h>

int main(void) {
    int opcao;
    while (opcao != 3) {
        printf("BOAS VINDAS:\n");
        printf("1 - Imprimir 'Ola!'\n");
        printf("2 - Imprimir 'Bem vindo!'\n");
        printf("3 - Sair do algoritmo\n");

        printf("\nDigite uma opcao: ");
        scanf("%i", &opcao);
        switch (opcao) {
            case 1:
                printf("\nOla!\n");
                printf("\n");
                break;

            case 2:
                printf("\nBem vindo!\n");
                printf("\n");
                break;
            case 3:
                break;
            default:
                printf("\nOpcao invalida!\n");
                printf("\n");
        }
    }

    return 0;
}