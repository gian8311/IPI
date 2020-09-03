<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📑 Aula 28 - Exercícios de While

### Exercícios

#### Exercício 1: O cardápio de uma lanchonete é o seguinte:

| Especificação   | Código | Preço    |
| :-------------- | :----- | :------- |
| Cachorro quente | 100    | R\$ 1,20 |
| Bauru Simples   | 101    | R\$ 1,30 |
| Bauru com ovo   | 102    | R\$ 1,50 |
| Refrigerante    | 103    | R\$ 1,00 |

#### Implemente um programa que leia o código do item pedido e a quantidade. Ao escolher, o sistema deve perguntar se o usuário deseja outro produto. Se a resposta for 's', o menu é apresentado novamente para que o usuário realize outra escolha. Caso responda 'n', é impresso o valor total a ser pago.

##### [Resposta](ex01.c)

```c
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
```

#### Exercício 2: Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (+, -, /, \*). O usuário escolhe uma das opções e seu programa então pede 2 valores reais, realiza a operação e imprime o resultado na tela. O sistema deve perguntar se o usuário deseja realizar outra operação. Caso o usuário responda 's', o menu é reimpresso e o usuário entra com os dados. Caso contrário o programa é encerrado.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    char continuar = 's';

    while (continuar == 's') {
        char operacao;
        float x, y, resultado;

        printf("\nDigite uma expressao ex(1 * 2): ");
        scanf("%f %c %f", &x, &operacao, &y);
        getchar();

        switch (operacao) {
            case '+':
                resultado = x + y;
                break;
            case '-':
                resultado = x - y;
                break;
            case '/':
                if (y != 0) {
                    resultado = x / y;
                } else {
                    printf("\nIndeterminacao matematica!\n");
                    operacao = 'a';
                }
                break;
            case '*':
                resultado = x * y;
                break;
            default:
                printf("\nOperacao invalida!\n");
                break;
        }
        if (operacao == '+' || operacao == '-' || operacao == '/' || operacao == '*') {
            printf("\n%.2f %c %.2f = %.2f\n", x, operacao, y, resultado);
        }
        printf("\nDeseja fazer outra operacao (s ou n)? ");
        scanf("%c", &continuar);
        getchar();
    }

    return 0;
}
```
