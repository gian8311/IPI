// Exercício 3: Você está desenvolvendo um sistema de compra de carro. Esse sistema deve pedir a idade do usuário.

// - Se a idade for menor que 18, deve imprimir que o usuário é de menor e não pode realizar a compra.
// - Caso contrário, o sistema deve ler o dinheiro disponível do usuário, e em seguida imprimir as opções de carros:
//   1 - BMW (R\$ 1.000)
//   2 - Mercedes (R\$ 2.000)
//   3 - Ferrari (R\$ 3.000)
//   4 - Desistir

// O usuário deve escolher a opção que deseja. Se escolher `desistir`, o sistema deve imprimir `você desistiu da compra`. Caso tenha escolhido o carro e seu dinheiro seja suficiente o sistema imprime `compra realizada com sucesso`. Se o dinheiro não for suficiente, o sistema deve imprimir `seu dinheiro é insuficiente`.

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Você é de menor, não pode comprar nenhum carro!");
    } else {
        float dinheiro;

        printf("Digite a quantia que você possui em dinheiro: R$");
        scanf("%f", &dinheiro);

        printf("\nOpções\n");
        printf("1 - BMW (R$ 1.000)\n");
        printf("2 - Mercedes (R$ 2.000)\n");
        printf("3 - Ferrari (R$ 3.000)\n");
        printf("4 - Desistir\n");

        int opcao;

        printf("\nEscolha uma opção: ");
        scanf("%i", &opcao);

        if (opcao == 4) {
            printf("Você desistiu da compra");
        } else if (opcao == 1) {
            if (dinheiro >= 1000) {
                printf("Compra realizada com sucesso!");
            } else {
                printf("Seu dinheiro é insuficiente para essa compra!");
            }
        } else if (opcao == 2) {
            if (dinheiro >= 2000) {
                printf("Compra realizada com sucesso!");
            } else {
                printf("Seu dinheiro é insuficiente para essa compra!");
            }
        } else if (opcao == 3) {
            if (dinheiro >= 3000) {
                printf("Compra realizada com sucesso!");
            } else {
                printf("Seu dinheiro é insuficiente para essa compra!");
            }

            return 0;
        }
    }
}