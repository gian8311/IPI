<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🔃 Aula 21 - Switch

### Switch

Adequado para situações de múltiplas escolhas

ex: Num jogo se você apertar a tecla `w` o seu boneco vai pra frente, `a` para esquerda, `b` usa um especial, etc...

#### Sintaxe

```c
switch(expressao) {
    case opcao1: sequencia de comandos 1; break;
    case opcao2: sequencia de comandos 2; break;
    ...
    default: sequencia de comandos n;
}
```

**OBS**: A expressão passada para o **`switch`** deve resultar em um valor do tipo **_INT_** ou **_CHAR_**

Se nenhum dos casos for encontrado, o **`default`** é executado

Dentro de cada caso é possível `declarar variáveis`, usar `scanf`, `if`-`else`...

### Exercícios

#### Exercício 1: Escreva um programa que gerencia um caixa eletrônico de banco. O sistema deve imprimir um menu de operações para o usuário:

- ##### 1. Saldo em conta corrente
- ##### 2. Extrato bancário
- ##### 3. Sacar dinheiro
- ##### 4. Transferência
- ##### 5. Opção inválida

#### O usuário, então, entra com um inteiro que representa uma opção possível. Uma vez escolhida a opção, o sistema deve imprimir na tela a operação que foi escolhida.

##### [Resposta](ex01.c)

```c
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
```

#### Exercício 2: Em um jogo, você controla um personagem que se movimenta da seguinte forma:

- ##### Tecla `A`: esquerda
- ##### Tecla `D`: direita
- ##### Tecla `W`: pula
- ##### Tecla `S`: abaixa

### Além das teclas de movimentação, existem as teclas de atalho para:

- ##### Tecla `Q`: acesso ao menu
- ##### Tecla `R`: especial
- ##### Tecla `1`: uso de mana

#### Crie um programa que simula o jogo, lê a opção teclada pelo usuário e imprime na tela

##### [Resposta](ex02.c)

```c
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
```
