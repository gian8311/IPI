<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 📐 Aula 13 - Funções matemáticas

### Introdução à math.h

Para trabalhar com funções matemáticas basta só incluir a biblioteca **math.h** no seu projeto

### Algumas funções da **_math.h_**

| Função                    | O que retorna? | O que faz?                        |
| :------------------------ | :------------: | :-------------------------------- |
| fabs(float `x`)           |     float      | Valor absoluto (_módulo_) de `x`  |
| acos(float `x`)           |     float      | Arco cujo valor do cosseno é `x`  |
| asin(float `x`)           |     float      | Arco cujo valor do seno é `x`     |
| atan(float `x`)           |     float      | Arco cujo valor da tangente é `x` |
| cos(float `x`)            |     float      | Cosseno de `x`                    |
| sin(float `x`)            |     float      | Seno de `x`                       |
| tan(float `x`)            |     float      | Tangente de `x`                   |
| log(float `x`)            |     float      | Logaritmo natural de `x`          |
| log10(float `x`)          |     float      | Logaritmo decimal de `x`          |
| sqrt(float `x`)           |     float      | Raiz quadrada de `x`              |
| pow(float `x`, float `y`) |     float      | `x` elevado a potência `y`        |

Mais funções documentadas nesse [site](http://www.cplusplus.com/reference/cmath/)

### Exemplos

#### Exemplo 1

```c
#include <math.h>
#include <stdio.h>

int main(void) {
    float a;

    a = 9;

    float raiz = sqrt(a);

    printf("A raiz quadrada de %f eh %f", a, raiz);

    return 0;
}
```

Output: `A raiz quadrada de 9.000000 eh 3.000000`

#### Exemplo 2

```c
#include <math.h>
#include <stdio.h>

int main(void) {
    float a, b;

    a = 3;
    b = 2;

    float potencia = pow(a, b);

    printf("%f elevado a %f eh %f", a, b, potencia);

    return 0;
}
```

Output: `3.000000 elevado a 2.000000 eh 9.000000`

#### Exemplo 3

```c
#include <math.h>
#include <stdio.h>

int main(void) {
    float a = 9;

    printf("A raiz quadrada de %f eh %f", a, sqrt(a));

    return 0;
}
```

Output: `A raiz quadrada de 9.000000 eh 3.000000`
O valor a ser substituído pelo segundo `%f` é o resultado da função `sqrt(a)` sem precisar armazenar o valor em uma variável

### Exercícios

#### Exercício 1: Escreva um programa que pede ao usuário 2 números. Imprima a raiz quadrada do seno do primeiro número, e imprima o segundo número elevado ao cosseno do primeiro número.

##### [Resposta](ex01.c)

```c
#include <math.h>
#include <stdio.h>

int main(void) {
    float a, b;

    printf("Escreva dois números: ");
    scanf("%f %f", a, b);

    float senoPrimeiro = sin(a);
    float raiz = sqrt(senoPrimeiro);

    printf("A raiz quadrada do seno de %f eh %f\n", a, raiz);

    float cossenoPrimeiro = cos(a);
    float potencia = pow(b, cossenoPrimeiro);

    printf("%f elevado ao cosseno de %f (%f) eh %f", b, a, cossenoPrimeiro, potencia);

    return 0;
}
```
