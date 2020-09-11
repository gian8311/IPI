<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔍 Aula 52 - Atribuindo valores usando funções de leitura

### Armazenando números pelo scanf

Similar a vetores unidimensionais nós só precisamos passar os índices da matriz no `scanf`

```c
#include <stdio.h>

int main(void) {
    int numeros[3][3];

    printf("Digite um numero: ");
    scanf("%i", &numeros[0][0]);

    printf("\nO numero digitado foi %i", numeros[0][0]);

    return 0;
}
```

### Trabalhando com matrizes de caracteres

```c
#include <stdio.h>

int main(void) {
    char matriz[3][10];

    printf("Digite o seu nome: ");
    scanf("%s", matriz[0]);

    printf("O nome digitado eh: %s", matriz[0]);

    return 0;
}
```
