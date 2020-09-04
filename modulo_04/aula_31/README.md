<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📑 Aula 31 - Exercícios de Laços aninhados

### Exercícios

#### Exercício 1: Escreva um programa que exiba na tela a tabuada de multiplicação dos números de 1 a 9.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++) {
        printf("Tabuada de %i:\n\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%i * %i = %i\n", i, j, i * j);
        }
        printf("\n");
    }
}
```

#### Exercício 2: Um professor possui 5 turmas, e cada turma 5 alunos. Construa um algorítmo que leia uma nota de cada aluno de cada uma das turmas e exiba a média das notas por turma.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    for (int turma = 1; turma <= 5; turma++) {  // Turma
        float soma = 0;
        for (int aluno = 1; aluno <= 5; aluno++) {  // Aluno
            float nota;

            printf("Digite a nota do aluno %i da turma %i: ", aluno, turma);
            scanf("%f", &nota);
            getchar();

            soma += nota;
        }
        printf("\nA media da turma %i eh %.2f\n\n", turma, soma / 5);
    }
}
```

#### Exercício 3: Escreva um programa que peça ao jogador para adivinhar o número da sorte (entre 0 e 100) gerado aleatoriamente pelo programa. O jogador vai entrando com números, e o programa vai informando se o número do jogador é maior ou menor que o número da sorte. Quando o jogador acertar o programa deve imprimir `ACERTOU` e informar o número de tentativas do jogador. Ao final do jogo, deve ser perguntado se o usuário deseja jogar novamente, caso digite 's', o jogo é recomeçado, caso digite 'n', o jogo é encerrado.

##### [Resposta](ex03.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int numeroSorte, numero, tentativas = 0;
    char continuar = ' ';

    while (continuar != 'n') {
        tentativas = 0;
        numeroSorte = rand() % 101;

        do {
            printf("\nTente adivinhar o numero da sorte: ");
            scanf("%i", &numero);
            getchar();
            tentativas++;

            if (numero > numeroSorte) {
                printf("\nO numero que voce digitou eh maior do que o numero da sorte!\n");
            } else if (numero < numeroSorte) {
                printf("\nO numero que voce digitou eh menor do que o numero da sorte!\n");
            }

        } while (numeroSorte != numero);

        printf("\nPARABENS!! Voce acertou o numero da sorte em %i tentativas!\n", tentativas);

        printf("\nJogar novamente (s ou n)? ");
        scanf("%c", &continuar);
        getchar();
    }
}
```
