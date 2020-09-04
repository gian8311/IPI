<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🧲 Aula 29 - Do While

### DO WHILE

#### Sintaxe

```c
do {
    sequencia de comandos
} while (expressao);
```

A sequencia de comandos é executada **pelo menos uma vez** e depois é verificado se a expressão no `while` é verdadeira, se for executa novamente, senão para de executar o código no do e continua

### Exercícios

#### Exercício 1: Escreva um programa que imprime a tecla digitada pelo usuário até ele digitar 'x'.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    char tecla;

    do {
        printf("Digite uma tecla: ");
        scanf("%c", &tecla);

        getchar();

        printf("Voce digitou a tecla %c\n", tecla);
    } while (tecla != 'x');

    printf("\nVoce saiu do programa!");
}
```

#### Exercício 2: Escreva um programa que peça ao jogador para adivinhar o número da sorte (entre 0 e 100) gerado aleatoriamente pelo programa. O jogador vai entrando com números, e o programa vai informando se o número do jogador é maior ou menor que o número da sorte. Quando o jogador acertar o programa deve imprimir `ACERTOU` e informar o número de tentativas do jogador.

##### [Resposta](ex02.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tentativas = 0, numSorte, numero;

    srand(time(NULL));
    numSorte = rand() % 101;

    do {
        printf("Tente adivinhar o numero da sorte: ");
        scanf("%i", &numero);
        getchar();
        tentativas++;

        if (numero > numSorte) {
            printf("\nO seu numero eh maior do que o numero da sorte!\n\n");
        } else if (numero < numSorte) {
            printf("\nO seu numero eh menor do que o numero da sorte!\n\n");
        }

    } while (numero != numSorte);
    printf("\nPARABENS!! Voce acertou o numero da sorte com %i tentativas!", tentativas);
}

```
