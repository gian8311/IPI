<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## ⏫ Aula 12 - Operadores de incremento

### Como aumentamos e diminuímos valores de variáveis (_até agora_)

```c
#include <stdio.h>

int main(void) {
    int a, b, c, d;

    a = 0;
    b = 1;
    c = 5;
    d = -4;

    a = a + 1;  // Ou de forma alternativa => a += 1
    b = b - 2;  // Ou de forma alternativa => b -= 2
    c = c * 6;  // Ou de forma alternativa => c *= 6
    d = d / 7;  // Ou de forma alternativa => b /= 7

    return 0;
}
```

`a += 1` signifíca o valor da variável `a` vai ser somado com **1**, resultando em **1**

`b -= 2` signifíca o valor da variável `b` vai ser subtraído com **2**, resultando em **-1**

`c *= 6` signifíca o valor da variável `c` vai ser multiplicado por **6**, resultando em **30**

`d /= 7` signifíca o valor da variável `d` vai ser dividido por **7**, resultando em **0**

### Incremento

Uma notação que é usada para alterar o valor de uma variável **unitariamente**

| Notação |     Resultado     |
| :-----: | :---------------: |
| valor++ | valor = valor + 1 |
| ++valor | valor = valor + 1 |
| valor-- | valor = valor - 1 |
| --valor | valor = valor - 1 |

#### Diferença entre os incrementos antes e depois

Antes - O incremento/decremento acontece, e o valor retornado é **o que foi incrementado/decrementado**

Depois - O incremento/decremento acontece, porém o valor utilizado é **o antigo**

### Exemplos

#### Exemplo 1

```c
#include <stdio.h>

int main(void) {
    int valor = 0;

    int a, b;

    a = (valor++) * (++valor);
    ++valor;

    b = a - (valor--);

    int k = (++valor) + (valor--);

    printf("valor: %i\n", valor);
    printf("a: %i\n", a);
    printf("b: %i\n", b);
    printf("k: %i", k);

    return 0;
}
```

Output:

`valor: 2`

`a: 0`

`b: -3`

`k: 5`

##### OBS: o incremento pós-fixado tem precedência(é avaliado primeiro)
