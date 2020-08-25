<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## ↪ Aula 16 - Condicional simples

### SE-ENTÃO

Execução de instruções caso uma condição seja satisfeita

_ex_: `Se x for maior que 3, imprima "x eh maior que 3"`

A condição deve ser uma expressão

A condição sempre resultar em um valor **VERDADEIRO (_1_)** ou **FALSO (_0_)**

### Sintaxe SE-ENTÃO

```c
if(expressao){
    sequencia de intrucoes
}
```

### Exemplos

#### Exemplo 1 - Simples exemplo de SE-ENTÃO

```c
#include <stdio.h>

int main(void) {
    int x, y;

    x = 10;
    y = 5;

    if (x > y) {
        printf("%i > %i", x, y);
    }

    return 0;
}
```

Output: `10 > 5`

O valor 10 é maior que 5 então a expressão `x > y` retorna verdadeiro (_1_) então a sequencia de instruções é executada

#### Exemplo 2 - Expressão resultando um valor diferente de 0 e 1

```c
#include <stdio.h>

int main(void) {
    int a = 10;

    if (a + 5) {
        printf("Hello World");
    }
    return 0;
}
```

Output: `Hello World`

Como o resultado da condição `a + 5` é `15` e esse é **diferente de 0**, o programa vai executar as instruções dentro do `if`

#### Exemplo 2 - Passando `0` como expressão no if

```c
#include <stdio.h>

int main(void) {
    int a = 10;

    if (0) {
        printf("Hello World");
    }
    return 0;
}
```

Como `0` representa **falso**, as instruções dentro do `if` não serão executadas.

### Exercícios

#### Exercício 1: Escreva um programa que gere um número aleatório inteiro entre 0 e 100. Imprima na tela `eh maior que 50`, se o número gerado for maior que 50.

##### [Resposta](ex01.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int x = rand() % 101;

    if (x > 50) {
        printf("%i eh maior que 50", x);
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que peça ao usuário dois números reais: a e b. Imprima o resultado de a/b, apenas se b for diferente de 0.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    float a, b;

    printf("Digite 2 numeros (a/b): ");
    scanf("%f/%f", &a, &b);

    if (b != 0) {
        printf("A divisão entre a e b eh: %f", a / b);
    }

    return 0;
}
```

#### Exercício 3: Escreva um programa que peça ao usuário dois números reais: a e b. Imprima o maior dos dois valores na tela.

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    float a, b;

    printf("Digite 2 numeros (a, b): ");
    scanf("%f, %f", &a, &b);

    if (a > b) {
        printf("O maior valor entre os dois eh: %f", a);
    }

    if (b > a) {
        printf("O maior valor entre os dois eh: %f", b);
    }
    return 0;
}
```
