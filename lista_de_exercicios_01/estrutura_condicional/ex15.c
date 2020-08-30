// 15 - Desenvolva um sistema de compra de bebidas. Este sistema, inicialmente, deve pedir para que o usuário informe a sua idade. Se a idade for menor que 18 anos, deve-se imprimir a seguinte mensagem: "você eh de menor e nao pode comprar bebidas". Caso o usuário tenha idade suficiente, o sistema de apresentar o seguinte menu:
// - Whisky
// - Vodka
// - Cerveja
// - Cachaça
// Se o usuário escolher outra opção, o sistema deve imprimir “opção inválida”.
// Se o usuário escolher a opção 1 (whisky), o seguinte menu deve ser impresso:
// | Código |   Nome   |      Preço |
// | 100    | Whisky 1 | R\$ 200,00 |
// | 101    | Whisky 2 | R\$ 150,00 |
// | 102    | Whisky 3 | R\$ 140,00 |
// Se o usuário escolher a opção 2 (Vodka), o seguinte menu deve ser impresso:
// | Código |  Nome   |     Preço |
// | 200    | Vodka 1 | R\$ 60,00 |
// | 201    | Vodka 2 | R\$ 40,00 |
// | 202    | Vodka 3 | R\$ 30,00 |
// Se o usuário escolher a opção 3 (Cerveja), o seguinte menu deve ser impresso:
// | Código |   Nome    |    Preço |
// | 300    | Cerveja 1 | R\$ 1,50 |
// | 301    | Cerveja 2 | R\$ 2,00 |
// | 302    | Cerveja 3 | R\$ 3,00 |
// Se o usuário escolher a opção 4 (Cachaça), o seguinte menu deve ser impresso:
// | Código |   Nome    |     Preço |
// | 400    | Cachaça 1 |  R\$ 8,50 |
// | 401    | Cachaça 2 | R\$ 20,00 |
// | 402    | Cachaça 3 | R\$ 22,00 |
// Uma vez direcionado ao menu escolhido, o usuário pode escolher a bebida que deseja e a quantidade. Se a quantidade for menor que 1, o sistema deve imprimir “quantidade inválida”. Se a quantidade for válida, ou seja, maior ou igual a 1, caso o usuário compre mais de 5 bebidas, receber desconto de 10%. Se comprar mais de 50 bebidas, o desconto é de 30%. Acima de 100 bebidas o desconto é de 35%.
// O sistema deve imprimir na tela a bebida comprada, a quantidade e o valor final a ser pago.

#include <stdio.h>

int main(void) {
    int idade, opcao, codigo, quantidade;
    float preco, precoFinal;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Voce eh de menor e nao pode comprar bebidas!");
    } else {
        printf("-=-=-=-= COMPRA DE BEBIDAS =-=-=-=-\n");
        printf("[1] Whisky\n");
        printf("[2] Vodka\n");
        printf("[3] Cerveja\n");
        printf("[4] Cachaça\n");

        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1:

                printf("| Codigo |   Nome   |      Preço |\n");
                printf("| 100    | Whisky 1 |  R$ 200,00 |\n");
                printf("| 101    | Whisky 2 |  R$ 150,00 |\n");
                printf("| 102    | Whisky 3 |  R$ 140,00 |\n");

                printf("\nDigite o codigo do produto que voce quer: ");
                scanf("%i", &codigo);

                printf("\nDigite a quantidade de bebida que voce quer: ");
                scanf("%i", &quantidade);

                break;
            case 2:

                printf("| Código |  Nome   |     Preço |\n");
                printf("| 200    | Vodka 1 |  R$ 60,00 |\n");
                printf("| 201    | Vodka 2 |  R$ 40,00 |\n");
                printf("| 202    | Vodka 3 |  R$ 30,00 |\n");

                printf("\nDigite o codigo do produto que voce quer: ");
                scanf("%i", &codigo);

                printf("\nDigite a quantidade de bebida que voce quer: ");
                scanf("%i", &quantidade);

                break;
            case 3:

                printf("| Código |   Nome    |    Preço |\n");
                printf("| 300    | Cerveja 1 |  R$ 1,50 |\n");
                printf("| 301    | Cerveja 2 |  R$ 2,00 |\n");
                printf("| 302    | Cerveja 3 |  R$ 3,00 |\n");

                printf("\nDigite o codigo do produto que voce quer: ");
                scanf("%i", &codigo);

                printf("\nDigite a quantidade de bebida que voce quer: ");
                scanf("%i", &quantidade);

                break;
            case 4:

                printf("| Código |   Nome    |     Preço |\n");
                printf("| 400    | Cachaça 1 |   R$ 8,50 |\n");
                printf("| 401    | Cachaça 2 |  R$ 20,00 |\n");
                printf("| 402    | Cachaça 3 |  R$ 22,00 |\n");

                printf("\nDigite o codigo do produto que voce quer: ");
                scanf("%i", &codigo);

                printf("\nDigite a quantidade de bebida que voce quer: ");
                scanf("%i", &quantidade);

                break;

            default:
                printf("Opcao invalida!");
                break;
        }

        if (quantidade < 1) {
            printf("Quantidade invalida!");
        } else {
            switch (codigo) {
                case 100:
                    preco = 200;
                    break;
                case 101:
                    preco = 150;
                    break;
                case 102:
                    preco = 140;
                    break;

                case 200:
                    preco = 60;
                    break;
                case 201:
                    preco = 40;
                    break;
                case 202:
                    preco = 30;
                    break;

                case 300:
                    preco = 1.5;
                    break;
                case 301:
                    preco = 2;
                    break;
                case 302:
                    preco = 3;
                    break;

                case 400:
                    preco = 8.5;
                    break;
                case 401:
                    preco = 20;
                    break;
                case 402:
                    preco = 22;
                    break;
            }
            if (quantidade > 5 && quantidade <= 50) {
                precoFinal = preco * quantidade * 0.9;
            } else if (quantidade > 50 && quantidade <= 100) {
                precoFinal = preco * quantidade * 0.7;
            } else if (quantidade > 100) {
                precoFinal = preco * quantidade * 0.65;
            } else {
                precoFinal = preco * quantidade;
            }
            printf("Para comprar %i da bebida de codigo %i voce vai pagar R$ %.2f", quantidade, codigo, precoFinal);
        }
    }

    return 0;
}