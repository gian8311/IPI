<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔢 Aula 50 - Atribuição de valores a vetores multidimensionais

### Atribuindo valores

Parecido com vetores unidimensionais, nós temos que passar os índices do vetor para saber a posição que queremos atribuir o valor

**Exemplo**: Queremos armazenar o valor **3** na linha `0` e coluna `0`

```c
#include <stdio.h>

int main(void) {
    int matriz_numeros[5][7];

    matriz_numeros[0][0] = 3;

    return 0;
}
```

**OBS**: A ordem é linha coluna `matriz[linha][coluna] = x`
