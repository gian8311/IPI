<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 💻 Aula 35 - Acesso a valores de vetores unidimensionais

### Acessando valores

Assim como na atribuição os índices também são utilizados para acessar o valor da respectiva posição

### Exemplos

#### Exemplo 1 - Imprimindo um valor de um vetor

```c
#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 2, 5, 90, 25};

    printf("%i eh o valor da segunda posicao do vetor.", numeros[1]);

    return 0;
}
```

Output: `2 eh o valor da segunda posicao do vetor`

#### Exemplo 2 - Imprimindo valores padrões de um vetor

```c
#include <stdio.h>

int main(void) {
    int numeros[5];

    printf("%i ", numeros[0]);
    printf("%i ", numeros[1]);
    printf("%i ", numeros[2]);
    printf("%i ", numeros[3]);
    printf("%i ", numeros[4]);

    return 0;
}
```

Output: `8 0 49 0 7476784`
