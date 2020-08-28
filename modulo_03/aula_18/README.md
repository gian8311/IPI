<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🔍 Aula 18 - Condicional composta

### SE-ENTÃO-SENÃO

Decide entre duas sequências de instruções qual das duas será executada

Apenas uma das duas será executada

**ex**: `Se tiver bolo, comerei bolo senão comerei brigadeiro`

#### Sintaxe

```c
if (expressao) {
    sequencia de instrucoes 1
} else {
    sequencia de instrucoes 2
}
```

Se a `expressao` for verdadeira a `sequencia de instruções 1` é executada, senão a `2` é executada

### Exemplos

#### Exemplo 1 - Definindo se um número é par ou impar

```c
#include <stdio.h>

int main(void) {
    int a;

    printf("Digite um numero: ");
    scanf("%i", &a);

    if (a % 2 == 0) {
        printf("%i eh par!", a);
    } else {
        printf("%i eh impar!", a);
    }

    return 0;
}

```

Input: `16`

Output: `16 eh par!`

### Exercícios

#### Exercício 1: Escreva um programa que gere um número aleatório inteiro entre 0 e 100. Imprima na tela `(numero) eh maior que 50`, se o número gerado for maior que 50, e imprima `(numero) eh menor ou igual a 50` caso contrário.

##### [Resposta](ex01.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int numero = rand() % 101;

    if (numero > 50) {
        printf("%i eh maior que 50", numero);
    } else {
        printf("%i eh menor ou igual a 50", numero);
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que peça ao usuário dois números reais: `a` e `b`. Imprima o resultado de `a / b`, apenas se `b` for diferente de 0. Imprima o resultado na tela, caso contrario imprima que b é 0.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    float a, b;
    printf("Digite dois valores (a/b): ");
    scanf("%f/%f", &a, &b);

    if (b != 0) {
        printf("%f dividido por %f eh igual a: %f", a, b, a / b);
    } else {
        printf("A divisão não pode ser realizada pois b possui um valor inválido (0)");
    }

    return 0;
}
```

#### Exercício 3: Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que leia a idade do usuário. Se o usuário puder doar sangue imprima: "Você pode doar"; caso contrário imprima: "Você não pode doar".

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18 && idade <= 67) {
        printf("Você pode doar!");
    } else {
        printf("Você não pode doar!");
    }

    return 0;
}
```
