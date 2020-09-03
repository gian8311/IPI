<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 👀 Aula 25 - Curiosidades do For

### Componentes com múltiplas instruções

```c
#include <stdio.h>

int main(void) {
    for (int x = 0, y = 20; x <= 20 && y >= 0; x++, y--) {
        printf("x: %i, y: %i", x, y);
    }
    return 0;
}
```

Pode-se passar, múltiplas instruções em todos os componentes do `for`

### Componentes vazios

```c
#include <stdio.h>

int main(void) {
    for (int x = 0; x <= 20;) {
        printf("x: %i", x);

        x++;
    }
    return 0;
}
```

Os componentes do `for` são todos opcionais, dependendo da sua situação, você pode deixar algum em branco

Porém se você fizer isso, tem uma chance de que você está usando a estrutura de repetição menos adequada para a situação

#### Exemplo

```c
#include <stdio.h>

int main(void) {
    int i = 0;

    for (; i <= 20;) {
        printf("%i\n", i);

        i++;
    }
    return 0;
}
```

Esse bloco de código é similar a

```c
#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 20; i++) {
        printf("%i\n", i);
    }
    return 0;
}
```

### Laço pode ser interrompido

Existem Situações em que deseja-se antecipar o fim do laço;

### Exercícios

#### Exercício 1 (Interrompendo laço antecipadamente com o `break`): Escreva um programa que pede ao usuário dois números inteiros X e N. O programa deve Imprimir os números de 0 até N. Porém,se o número de valores pares neste intervalo for maior que X, o programa deve ser encerrado.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    int x, n, pares;

    printf("Digite o limite do intervalo: ");
    scanf("%i", &n);

    printf("\nDigite o numero de pares permitidos: ");
    scanf("%i", &x);

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            pares++;
        }
        if (pares > x) {
            break;
        } else {
            printf("%i ", i);
        }
    }
    return 0;
}
```
