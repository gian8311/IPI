<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🚫 Aula 17 - Limitação da condicional simples

### Não temos uma outra alternativa na condicional simples

### Exemplos

#### Exemplo 1 - Uma condicional simples

```c
#include <stdio.h>

int main(void) {
    int x, y;

    x = 3;
    y = 5;

    if (x > y) {
        printf("%i > %i", x, y);
    }

    return 0;
}
```

Nesse exemplo, onde `x` **não** é maior que `y` não acontece nada

#### Exemplo 2 - Mais condicionais

```c
#include <stdio.h>

int main(void) {
    int x;

    printf("Digite um valor: ");
    scanf("%i", &x);

    if (x % 2 == 0) {
        printf("%i eh par!", x);
    }
    if (x % 2 != 0) {
        printf("%i eh impar", x);
    }

    return 0;
}
```

Input:`1`

Output: `1 eh impar`

Precisamos de 2 condicionais simples para escrever esse código

Uma alternativa para contornar essa limitação utilizamos a [**_estrutura condicional composta_**](../aula_18) (SE-ENTÃO/SENÃO)
