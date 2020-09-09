// 13 - Um sistema de controle de estoque armazena o código (inteiro), a quantidade em estoque (inteiro) e o preço unitário (float) das mercadorias. Fazer um programa que exiba um menu com as seguintes opções:

// MENU
// 1 - Cadastrar mercadoria
// 2 - Consultar mercadoria
// 3 - Valor total em mercadorias
// 4 - Sair

// | Codigo | Quantidade |     Preco |
// | 0      | 100        |  R$ 10.00 |

// Inicialmente não há nenhuma mercadoria cadastrada. A primeira opção permitirá que o usuário cadastre uma nova mercadoria informando todos os dados citados anteriormente.
// A segunda opção permitirá que o usuário consulte o cadastro, informando o código da mercadoria.
// A terceira opção permitirá a consulta do valor total do estoque, levando em conta todas as mercadorias cadastradas.
// A quarta opção permitirá o término do programa.

#include <stdio.h>

int main(void) {
    int sair = 0, codigo = 0, tam = 10, quantidades[tam];
    float precos[tam];

    // Limpando os vetores
    for (int i = 0; i < tam; i++) {
        quantidades[i] = 0;
        precos[i] = 0;
    }

    do {
        int opcao;

        // Imprimir o menu
        printf("=-=-=- CONTROLE DE ESTOQUE -=-=-=\n");
        printf("\n1 - Cadastrar Mercadoria\n");
        printf("2 - Consultar Mercadoria\n");
        printf("3 - Valor total em Mercadorias\n");
        printf("4 - Sair\n");

        // Perguntar a opção
        printf("\nDigite uma opcao: ");
        scanf("%i", &opcao);
        getchar();

        switch (opcao) {
            case 1:;  // Cadastrar Mercadoria
                int quantidade;
                float preco;

                do {
                    printf("\nCodigo: %i\n\n", codigo);

                    printf("Quantidade: ");
                    scanf("%i", &quantidade);
                    getchar();
                    printf("\n");

                    printf("Preco unitario: R$ ");
                    scanf("%f", &preco);
                    getchar();
                    printf("\n");

                } while (quantidade <= 0 || preco <= 0);

                quantidades[codigo] = quantidade;
                precos[codigo] = preco;

                codigo++;
                break;

            case 2:;
                int codigoEscolhido;
                printf("Digite o codigo do produto: ");
                scanf("%i", &codigoEscolhido);
                getchar();

                if (codigoEscolhido > tam || quantidades[codigoEscolhido] == 0) {  // Verifica se o codigo é válido
                    printf("\nProduto nao encontrado!\n");
                } else {  // Imprime os dados do produto
                    printf("\nQuantidade: %i\n", quantidades[codigoEscolhido]);
                    printf("Preco: R$ %.2f\n", precos[codigoEscolhido]);
                }

                printf("\n");
                break;

            case 3:;
                if (codigo == 0) {
                    printf("\nNao ha nenhum produto cadastrado!");
                } else {
                    float dinheiroTotal = 0;

                    for (int i = 0; i < codigo; i++) {
                        dinheiroTotal += quantidades[i] * precos[i];
                    }
                    printf("\nO valor total do estoque eh R$ %.2f\n", dinheiroTotal);
                }

                printf("\n");
                break;

            case 4:  // Sair do programa
                printf("\nVoce escolheu sair do programa!");
                sair = 1;
                break;
            default:
                printf("\nOpcao invalida!\n\n");
                break;
        }
    } while (!sair);

    return 0;
}