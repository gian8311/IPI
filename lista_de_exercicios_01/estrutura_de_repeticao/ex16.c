// 16 - Crie um algoritmo que simule o funcionamento de um caixa de supermercado. O caixa fica aberto até o fim do expediente e pode processar a compra de vários clientes. Cada cliente pode comprar vários itens de acordo com a tabela:

// | Código | Item   |     Preço |
// | 1      | Feijão |   R$ 2,00 |
// | 2      | Arroz  |   R$ 1,50 |
// | 3      | Carne  |  R$ 10,00 |
// | 4      | Tomate |   R$ 3,00 |
// | 5      | Cebola |   R$ 2,50 |

// Ao ler cada item deve ser exibida uma mensagem para o operador do caixa perguntando se há mais itens a serem processados. Ao final, exiba quanto a compra custou ao cliente. E então solicite do operador do caixa a informação se deseja fechar o caixa. Quando o caixa for fechado, imprima quanto de dinheiro aquele caixa apurou no dia.

#include <stdio.h>

int main(void) {
    char fechar = 'n', adicionar = 's';
    float totalDia = 0;

    while (fechar != 's') {
        float totalCompra = 0;

        while (adicionar != 'n') {
            int produto;

            printf("\nProdutos: \n");
            printf("\n| Código | Item   |     Preço |\n");
            printf("| 1      | Feijão |   R$ 2,00 |\n");
            printf("| 2      | Arroz  |   R$ 1,50 |\n");
            printf("| 3      | Carne  |  R$ 10,00 |\n");
            printf("| 4      | Tomate |   R$ 3,00 |\n");
            printf("| 5      | Cebola |   R$ 2,50 |\n");

            printf("\nDigite o produto que deseja adicionar a compra: ");
            scanf("%i", &produto);
            getchar();

            switch (produto) {
                case 1:
                    totalCompra += 2;
                    break;

                case 2:
                    totalCompra += 1.5;
                    break;

                case 3:
                    totalCompra += 10;
                    break;

                case 4:
                    totalCompra += 3;
                    break;

                case 5:
                    totalCompra += 2.5;
                    break;

                default:
                    printf("Opcao incorreta!");
                    break;
            }

            printf("Deseja adicionar mais algum produto a compra (s ou n)? ");
            scanf("%c", &adicionar);
            getchar();
        }
        adicionar = 's';
        totalDia += totalCompra;

        printf("O valor total a ser pago eh de R$ %.2f.\n", totalCompra);

        printf("\nDeseja fechar o caixa (s ou n)? ");
        scanf("%c", &fechar);
        getchar();
    }
    printf("O total arrecadado no dia foi de R$ %.2f.", totalDia);

    return 0;
}