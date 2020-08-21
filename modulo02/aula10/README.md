<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## ➕ Aula 10 - Operadores aritméticos

### Operadores aritméticos disponíveis

| Operador |          Função           |
| :------: | :-----------------------: |
|   `+`    |           Soma            |
|   `-`    |         Subtração         |
|   `/`    |          Divisão          |
|   `*`    |       Multiplicação       |
|   `%`    | Módulo (Resto da divisão) |

### Ordem de precedência

A ordem de precedência da matemática é respeitada pela linguagem **C**

#### Exemplo

Se você quer dividir a soma de dois números por um número, você precisar usar os parênteses na soma

(5 + 30) / 5 ≠ 5 + 30 / 5

Como pode ser visto aqui

```c
#include <stdio.h>

int main(void) {
    float resultado = (5 + 30) / 5;
    printf("O resultado eh %f", resultado);

    return 0;
}
```

Output: `O resultado eh 7.000000`

---

```c
#include <stdio.h>

int main(void) {
    float resultado = 5 + 30 / 5;
    printf("O resultado eh %f", resultado);

    return 0;
}
```

Output: `O resultado eh 11.000000`

### Exemplos

#### Exemplo 1 - Soma

```c
#include <stdio.h>

int main(void) {
    int a, b;
    a = 20;
    b = 30;

    int c = a + b;

    printf("A soma de %i com %i eh %i", a, b, c);
    return 0;
}
```

A variável `c` recebe o **resultado** da expressão do lado direito do atribuidor `=`

Output: `A soma de 20 com 30 eh 50`

#### Exemplo 2 - Divisão de inteiros

```c
#include <stdio.h>

int main(void) {
    int a, b;
    a = 20;
    b = 30;

    int c = a / b;

    printf("%i dividido por %i eh igual a %i", a, b, c);
    return 0;
}
```

Como `a` e `b` possuem valores **inteiros**, o resultado de uma divisão entre eles vai resultar em um **inteiro**, ignorando completamente a parte após a vírgula

Output: `20 dividido por 30 eh igual a 0`

#### Exemplo 3 - Divisão de reais

```c
#include <stdio.h>

int main(void) {
    float a, b;
    a = 20;
    b = 30;

    float c = a / b;

    printf("%f dividido por %f eh igual a %f", a, b, c);
    return 0;
}
```

Como `a` e `b` possuem valores **reais**, o resultado da divisão foi um número **real**

Output: `20.000000 dividido por 30.000000 eh igual a 0.666667`

#### Exemplo 4 - Resto da divisão

```c
#include <stdio.h>

int main(void) {
    int a, b;
    a = 8;
    b = 2;

    int c = a % b;

    printf("O resto da divisão de %i por %i eh %i", a, b, c);
    return 0;
}
```

A variável `c` está recebendo o resultado da operação `a % b` que é o resto da divisão de `a` por `b`

Output: `O resto da divisão de 8 por 2 eh 0`

#### Exemplo 5 - Multiplicação com input do usuário

```c
#include <stdio.h>

int main(void) {
    int a, b;
    a = 30;

    printf("Digite o valor para b: ");
    scanf("%i", &b);

    int c = a * b;

    printf("%i vezes %i eh igual a %i", a, b, c);
    return 0;
}
```

Input: `5`
Output: `30 vezes 5 eh igual a 150`

### Exercícios

#### Exercício 1: Escreva um programa que requisita a idade da pessoa em anos, e converta o valor para dias e imprima o resultado.

##### [Resposta](ex01.c):

```c
#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    int idadeEmDias = idade * 365;

    printf("Sua idade em dias eh %i", idadeEmDias);

    return 0;
}
```

#### Exercício 2: Escreva um programa que converta uma temperatura (em real) fornecida pelo usuário de graus Fahrenheit para a correspondente temperatura em graus Celsius. C = (F - 32) \* 5 / 9.

##### [Resposta](ex02.c):

```c
#include <stdio.h>

int main(void) {
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5 / 9;

    printf("%f°F eh equivalente a %f°C", fahrenheit, celsius);

    return 0;
}
```
