<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 💻 Aula 51 - Acesso a valores de vetores multidimensionais

### Atribuindo valores

Parecido com vetores unidimensionais, nós temos que passar os índices do vetor para saber a posição que queremos acessar o valor

**Exemplo**: Queremos atribuir o valor da linha `0` e coluna `0` à variável `x`

```c
#include <stdio.h>

int main(void) {
    int matriz_numeros[5][7];

    matriz_numeros[0][0] = 3;

    int x = matriz_numeros[0][0];

    return 0;
}
```
