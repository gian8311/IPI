<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔁 Aula 53 - Manipulando um vetor multidimensional com laços

### Nossa limitação

Atribuição de valores manualmente é inviável!

Assim como em vetores unidimensionais, podemos utilizar **laços** para manipular vetores multidimensionais

### Preenchimento de uma matriz com laços

Agora precisamos navegar por 2 índices (_linhas e colunas_)

#### Exemplo: Preenchendo linhas e colunas de uma matriz de inteiros com valores aleatórios

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int linhas = 10, colunas = 10, matriz[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            matriz[linha][coluna] = rand() % 11;
        }
    }

    return 0;
}
```

### Lendo valores de uma matriz com laços

O procedimento é o mesmo, a única diferença é o que fazemos com os índices `linha` e `coluna`

#### Exemplo: Imprimindo uma matriz com laços

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int linhas = 10, colunas = 10, matriz[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            matriz[linha][coluna] = rand() % 11;
        }
    }

    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
```
