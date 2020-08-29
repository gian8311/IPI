// Exercício 1: Escreva um programa que gerencia um caixa eletrônico de banco. O sistema deve imprimir um menu de operações para o usuário:

// 1. Saldo em conta corrente
// 2. Extrato bancário
// 3. Sacar dinheiro
// 4. Transferência
// 5. Opção inválida

// O usuário, então, entra com um inteiro que representa uma opção possível. Uma vez escolhida a opção, o sistema deve imprimir na tela a operação que foi escolhida.

#include <stdio.h>

int main(void) {
    printf("--/-- Bem vindo ao banco! --/-- \n");

    printf("\nOpcoes disponiveis:\n");

    printf("1. Saldo em conta corrente\n");
    printf("2. Extrato bancario\n");
    printf("3. Sacar dinheiro\n");
    printf("4. Transferencia\n");

    int opcao;

    printf("Escolha uma das opcoes: ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce selecionou a opcao: SALDO");
            break;
        case 2:
            printf("Voce selecionou a opcao: EXTRATO");
            break;
        case 3:
            printf("Voce selecionou a opcao: SAQUE");
            break;
        case 4:
            printf("Voce selecionou a opcao: TRANSFERENCIA");
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return 0;
}