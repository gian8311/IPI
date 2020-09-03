// Exercício 2: Escreva um programa que gerencia um caixa eletrônico de banco. O sistema deve imprimir um menu com opções para o usuário.
// - 1. Saldo em conta corrente
// - 2. Extrato bancário
// - 3. Sacar dinheiro
// - 4. Transferência
// O usuário, então, entra com um inteiro que representa uma opção possível. Uma vez escolhida a opção, o sistema deve imprimir na tela a operação que foi escolhida. O sistema deve perguntar ao usuário se ele deseja fazer outra operação. Caso ele responda 's', o programar deve mostrar o menu novamente, caso responda 'n', encerra o programa.

#include <stdio.h>

int main(void) {
    char continuar = 's';

    printf("=-=-=- BEM VINDO AO BANCO -=-=-=\n");

    while (continuar == 's') {
        int opcao;

        printf("\nOpcoes:\n\n");
        printf("1. Saldo em conta corrente\n");
        printf("2. Extrato bancario\n");
        printf("3. Sacar dinheiro\n");
        printf("4. Transferência\n");

        printf("\nDigite uma opcao: ");
        scanf("%i", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("\nVoce escolheu a opcao SALDO!\n");
                break;
            case 2:
                printf("\nVoce escolheu a opcao EXTRATO!\n");
                break;
            case 3:
                printf("\nVoce escolheu a opcao SACAR!\n");
                break;
            case 4:
                printf("\nVoce escolheu a opcao TRANSFERENCIA!\n");
                break;

            default:
                printf("\nOPCAO INVALIDA!\n");
                break;
        }
        printf("\nVoce quer fazer outra operacao (s ou n)? ");
        scanf("%c", &continuar);
        getchar();
    }
    printf("Voce saiu do sistema!");

    return 0;
}