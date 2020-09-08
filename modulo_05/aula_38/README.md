<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔁 Aula 38 - Acessando posições do vetor com laços

### Exemplos

#### Exemplo 1 - Imprimindo valores de um vetor

```c
#include <stdio.h>

int main(void) {
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int indice = 0; indice < 10; indice++) {
        printf("%i ", v[indice]);
    }

    return 0;
}
```

Output: `1 2 3 4 5 6 7 8 9 10 `

#### Exemplo 2 - Atribuindo valores aleatórios e imprimindo valores de um vetor

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int valores[100];

    for (int indice = 0; indice < 100; indice++) {  // Atribuindo valores ao vetor
        valores[indice] = rand() % 100;
    }

    for (int indice = 0; indice < 100; indice++) {  // Imprimindo valores do vetor
        printf("%i ", valores[indice]);
    }

    return 0;
}
```

Output: `55 55 68 31 79 31 96 74 89 69 5 67 57 65 77 70 0 56 20 35 34 27 35 35 6 33 43 68 42 66 50 82 81 34 47 69 11 25 89 48 72 52 22 17 7 41 92 62 32 70 51 30 60 76 12 16 0 61 17 10 61 50 34 91 30 38 60 62 83 94 8 90 52 56 83 86 65 2 87 88 64 47 28 71 31 47 16 57 25 9 79 66 63 58 31 64 95 17 95 1 `
