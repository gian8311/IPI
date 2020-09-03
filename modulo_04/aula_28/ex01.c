//Exercício 1: O cardápio de uma lanchonete é o seguinte:
// | Especificação   | Código | Preço    |
// | Cachorro quente | 100    | R\$ 1,20 |
// | Bauru Simples   | 101    | R\$ 1,30 |
// | Bauru com ovo   | 102    | R\$ 1,50 |
// | Refrigerante    | 103    | R\$ 1,00 |
// Implemente um programa que leia o código do item pedido e a quantidade. Ao escolher, o sistema deve perguntar se o usuário deseja outro produto. Se a resposta for 's', o menu é apresentado novamente para que o usuário realize outra escolha. Caso responda 'n', é impresso o valor total a ser pago.

#include <stdio.h>

int main(void) {
    char continuar = 's';
    float precoFinal = 0;

    printf("=-=-=- BEM VINDO A LANCHONETE -=-=-=\n");

    while (continuar == 's') {
        int codigo, quantidade;
        float preco = 0;

        printf("\nCardapio:\n");
        printf("\n| Especificacao   | Codigo | Preco   |\n");
        printf("| Cachorro quente | 100    | R$ 1,20 |\n");
        printf("| Bauru Simples   | 101    | R$ 1,30 |\n");
        printf("| Bauru com ovo   | 102    | R$ 1,50 |\n");
        printf("| Refrigerante    | 103    | R$ 1,00 |\n");

        printf("\nDigite o codigo do produto que quer comprar: ");
        scanf("%i", &codigo);
        getchar();

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
                preco = 1;
                break;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }
        if (preco != 0) {
            printf("\nDigite a quantidade que voce quer comprar: ");
            scanf("%i", &quantidade);
            getchar();

            if (quantidade <= 0) {
                printf("\nQuantidade invalida!\n");
            } else {
                printf("\nVoce comprou %i produtos de codigo %i.\n", quantidade, codigo);
                precoFinal = precoFinal + (preco * quantidade);
            }
        }
        printf("\nVoce quer comprar outro produto (s ou n)? ");
        scanf("%c", &continuar);
        getchar();
    }
    printf("\nO valor total a ser pago eh de R$ %.2f.", precoFinal);

    return 0;
}