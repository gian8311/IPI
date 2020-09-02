<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔂 Aula 23 - For

### Imprimindo números de 1 a 20

```c
#include <stdio.h>

int main(void) {
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    printf("11\n");
    printf("12\n");
    printf("13\n");
    printf("14\n");
    printf("15\n");
    printf("16\n");
    printf("17\n");
    printf("18\n");
    printf("19\n");
    printf("20\n");

    return 0;
}
```

Até agora nós só temos a opção acima

#### Sintaxe

```c
for (inicializacoes; condicoes; incrementos) {
    bloco de instrucoes
}
```

Componente de atribuição: `inicializacoes`

Componente de verificação: `condicoes`

Componente de incremento: `incrementos`

**Enquanto o componente de verificação for verdade, o for vai ser executado**

#### Quando usar o for

Quando temos um inicio e fim pre-determinados

### Exemplos

#### Exemplo 1 - Imprimindo números num intervalo

```c
#include <stdio.h>

int main(void) {
    for (int num = 1; num <= 20; num++) {
        printf("%i ", num);
    }

    return 0;
}
```

Output:`1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 `

### Exercícios

#### Exercício 1: Escreva um programa que lê um número inteiro, e imprime na tela todos os números ímpares menores ou iguais ao número lido. Considere 0 como o mínimo valor possível.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int num = 0; num <= numero; num++) {
        if (num % 2 != 0) {
            printf("%i\n", num);
        }
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que lê uma letra do alfabeto e imprime na tela todas as letras até 'z'.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite uma letra: ");
    scanf("%c", &caractere);

    for (char i = caractere; i <= 'z'; i++) {
        printf("%c ", i);
    }

    return 0;
}
```

#### Exercício 3: Escreva um programa que imprime em ordem decrescente todos os números inteiros maiores que zero a partir de um número fornecido pelo usuário.

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = numero; i > 0; i--) {
        printf("%i\n", i);
    }

    return 0;
}
```

#### Exercício 4: Escreva um programa que lê um número inteiro relativo ao número de alunos de uma turma. Deve ser digitada uma nota para cada aluno, e ao final do programa, informar a média das notas digitadas.

##### [Resposta](ex04.c)

```c
#include <stdio.h>

int main(void) {
    int numAlunos;
    float nota, soma, media;

    printf("Digite o numero de alunos: ");
    scanf("%i", &numAlunos);

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("A media das notas digitadas eh %.2f", soma / numAlunos);

    return 0;
}
```
