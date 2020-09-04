<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔗 Aula 30 - Laços Aninhados

### Laços de repetição aninhados

```c
for (atribuicao1; expressao1; incremento1) {
    while (expressao2) {
        sequencia de comandos;
    }
}
```

Nós podemos colocar estruturas de repetição dentro de estruturas de repetição

### Exemplos

#### Exemplo 1

```c
#include <stdio.h>

int main(void) {
    for (int num1 = 1; num1 <= 10; num1++) {
        for (int num2 = 1; num2 <= 10; num2++) {
            printf("num1: %i, num2: %i\n", num1, num2);
        }
        printf("\n");
    }

    return 0;
}
```

Output:

```
num1: 1, num2: 1
num1: 1, num2: 2
num1: 1, num2: 3

num1: 2, num2: 1
num1: 2, num2: 2
num1: 2, num2: 3

num1: 3, num2: 1
num1: 3, num2: 2
num1: 3, num2: 3
```

O **primeiro `for`** é executado pela primeira vez, o **segundo `for`** é executado as 3 vezes, e ai o **primeiro `for`** vai para **_segunda_** execução, e por ai vai...

### Exercícios

#### Exercício 1: Escreva um programa que imprime o seguinte padrão na tela.

![Padrão](https://user-images.githubusercontent.com/22121448/92279408-9bee1800-eecd-11ea-96e2-749626097e2c.png)

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    int numEstrelas, numLinhas;

    printf("Digite o numero de estrelas por linha: ");
    scanf("%i", &numEstrelas);
    getchar();

    printf("Digite o numero de linhas: ");
    scanf("%i", &numLinhas);
    getchar();

    for (int i = 1; i <= numLinhas; i++) {        // Determinar o número de linhas
        for (int j = 1; j <= numEstrelas; j++) {  // Imprimir as estrelas
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que lê um número inteiro N. Imprima na tela a matriz identidade de tamanho NxN. A matriz identidade é aquela que os elementos na diagonal principal são iguais a 1.

![Matriz](https://user-images.githubusercontent.com/22121448/92280285-75c97780-eecf-11ea-9849-5365026cd360.png)

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    int linhasEColunas;

    printf("Digite o valor de N: ");
    scanf("%i", &linhasEColunas);

    for (int i = 1; i <= linhasEColunas; i++) {      // Linhas
        for (int j = 1; j <= linhasEColunas; j++) {  // Colunas
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
```
