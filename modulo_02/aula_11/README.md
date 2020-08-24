<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🤔 Aula 11 - Operadores relacionais e lógicos

### Operadores relacionais disponíveis

| Operador |   Comparação   |
| :------: | :------------: |
|   `<`    |     Menor      |
|   `<=`   | Menor ou igual |
|   `>`    |     Maior      |
|   `>=`   | Maior ou igual |
|   `==`   |     Igual      |
|   `!=`   |   Diferente    |

Todos esses operadores retornam 1 ou 0 (_verdadeiro ou falso_)

### Operadores lógicos disponíveis

| Operador | Função  |
| :------: | :-----: |
|   `&&`   |    E    |
|   `||`   |   Ou    |
|   `!`    | Negação |

Todos esses operadores retornam 1 ou 0 (_verdadeiro ou falso_)

#### Tabelas verdade

##### Tabela verdade do E

| Valor 1 | Operador | Valor 2 | Resultado |
| :-----: | :------: | :-----: | :-------: |
|    F    |   `&&`   |    F    |     F     |
|    F    |   `&&`   |    V    |     F     |
|    V    |   `&&`   |    F    |     F     |
|    V    |   `&&`   |    V    |     V     |

##### Tabela verdade do Ou

| Valor 1 | Operador | Valor 2 | Resultado |
| :-----: | :------: | :-----: | :-------: |
|    F    |   `||`   |    F    |     F     |
|    F    |   `||`   |    V    |     V     |
|    V    |   `||`   |    F    |     V     |
|    V    |   `||`   |    V    |     V     |

##### Tabela verdade da Negação

| Valor 1 | Resultado |
| :-----: | :-------: |
|   !F    |     V     |
|   !V    |     F     |

### Exemplos

#### Exemplo 1 - `a` é maior que `b`?

```c
#include <stdio.h>

int main(void) {
    int a, b;
    a = 5;
    b = 10;

    printf("%i", a >= b);

    return 0;
}
```

Output: `0`

O valor `0` é impresso porque `a` não é maior nem igual a `b`

#### Exemplo 2 -

```c
#include <stdio.h>

int main(void) {
    int a, b, c, d;
    a = 5;
    b = 10;
    c = 20;
    d = -5;

    int resultado = a >= b && c != d || a <= d;

    printf("%i", resultado);

    return 0;
}
```

Output: `0`

O valor `0` é impresso pois a comparação `a >= b` resulta em **falso**, a `c != d` resulta em **verdadeiro**, **_porém_** como a primeira é **falso** e `&&` pede que as **_2 sejam verdadeiras_** para resultar verdadeiro então o resultado disso é **falso**, então, é comparado `a <= d` que resulta em falso, depois `falso ou falso = falso`
