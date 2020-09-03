<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔄 Aula 27 - While

### Estrutura de repetição while

`while` é usado quando nós não sabemos previamente quando o loop vai acabar

#### Sintaxe

```c
while (expressao) {
    sequencia de comandos
}
```

Se a expressao for verdadeira, o `while` vai ser executado

### Exercícios

#### Exercício 1: Escreva um programa que imprime a tecla digitada pelo usuário até o usuário digitar 'x'.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    char tecla = ' ';

    while (tecla != 'x') {
        printf("\nDigite uma tecla: ");
        scanf("%c", &tecla);
        getchar();
    }

    printf("Voce digitou a tecla x e encerrou o programa!");

    return 0;
}
```

#### Exercício 2: Escreva um programa que gerencia um caixa eletrônico de banco. O sistema deve imprimir um menu com opções para o usuário.

- ##### 1. Saldo em conta corrente
- ##### 2. Extrato bancário
- ##### 3. Sacar dinheiro
- ##### 4. Transferência

#### O usuário, então, entra com um inteiro que representa uma opção possível. Uma vez escolhida a opção, o sistema deve imprimir na tela a operação que foi escolhida. O sistema deve perguntar ao usuário se ele deseja fazer outra operação. Caso ele responda 's', o programar deve mostrar o menu novamente, caso responda 'n', encerra o programa.

##### [Resposta](ex02.c)

```c
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
```

#### Exercício 3: Escreva um programa que leia um número inteiro positivo N e imprima todos os números pares de 0 até N em ordem crescente.

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int fim, num = 0;

    printf("Digite um numero: ");
    scanf("%i", &fim);

    while (num <= fim) {
        if (num % 2 == 0) {
            printf("%i ", num);
        }
        num++;
    }

    return 0;
}
```
