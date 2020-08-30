// 4 - O cardápio de uma lanchonete é o seguinte:
// | Especificação   | Código | Preço    |
// | Cachorro quente |  100   | R$ 1,20 |
// | Bauru simples   |  101   | R$ 1,30 |
// | Bauru com ovo   |  102   | R$ 1,50 |
// | Hambúrguer      |  103   | R$ 1,20 |
// | Cheeseburguer   |  104   | R$ 1,30 |
// | Refrigerante    |  105   | R$ 1,00 |
// Implemente um programa que leia o código do item pedido, a quantidade que deseja comprar e, calcule e imprima o valor a ser pago por aquele lanche.

#include <stdio.h>

int main(void) {
    int codigo, quantidade;
    float preco;

    printf("-=-=-=-=-=-= Menu =-=-=-=-=-=-\n");
    printf("| Especificacao   | Codigo | Preco    |\n");
    printf("| Cachorro quente |  100   | R$ 1,20  |\n");
    printf("| Bauru simples   |  101   | R$ 1,30  |\n");
    printf("| Bauru com ovo   |  102   | R$ 1,50  |\n");
    printf("| Hamburguer      |  103   | R$ 1,20  |\n");
    printf("| Cheeseburguer   |  104   | R$ 1,30  |\n");
    printf("| Refrigerante    |  105   | R$ 1,00  |\n");

    printf("Digite o codigo do lanche que você quer comprar: ");
    scanf("%i", &codigo);

    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);

    switch (codigo) {
        case 100:
            preco = 1.2;
            break;
        case 101:
            preco = 1.3;
            break;
        case 102:
            preco = 1.5;
            break;
        case 103:
            preco = 1.2;
            break;
        case 104:
            preco = 1.3;
            break;
        case 105:
            preco = 1;
            break;
        default:
            preco = 0;
            break;
    }

    float precoTotal = preco * quantidade;

    if (preco == 0) {
        printf("Voce digitou uma opcao incorreta!");
    } else {
        printf("O valor total a ser pago pelo lanche eh R$ %.2f", precoTotal);
    }

    return 0;
}