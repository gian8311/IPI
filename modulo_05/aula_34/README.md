<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 0️⃣ Aula 34 - Atribuições de valores a vetores unidimensionais

### Atribuindo valores

```c
#include <stdio.h>

int main(void) {
    int v[5];

    v[0] = 30;

    return 0;
}
```

Os vetores possuem índices, **começando por _0_**

O primeiro valor do vetor `v` pode ser atribuído desse jeito:

`v[0] = 30;`

Passando o índice dentro dos colchetes e atribuíndo um valor

#### Atribuindo valores com dados digitados pelo usuário

```c
#include <stdio.h>

int main(void) {
    int v[5];

    scanf("%i", &v[2])

    return 0;
}
```

#### Atribuindo valores na criação do vetor

```c
#include <stdio.h>

int main(void) {
    int v[5] = {1, 2, 3, 4, 5};

    return 0;
}
```
