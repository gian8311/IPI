<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📑 Aula 39 - Exercícios de Vetores uni-dimensionais 1

### Exercícios

#### Exercício 1: Escreva um programa que leia um vetor de 10 posições e atribua o valor 0 para todos os valores negativos.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &numeros[i]);
        getchar();

        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que crie um vetor de reais com 8 posições e leia seus valores. Em seguida, leia também 2 valores inteiros X e Y qualquer (entre 0 e 7) correspondentes às 2 posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    int x, y, tam = 8;
    float numeros[tam];

    for (int i = 0; i < tam; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%f", &numeros[i]);
        getchar();
    }
    printf("\n");

    for (int i = 0; i < tam; i++) {
        printf("[%i] = %.2f\n", i, numeros[i]);
    }

    printf("\n");

    printf("Digite dois indices entre 0-7 (x, y):  ");
    scanf("%i", &x, &y);
    getchar();

    printf("%.2f + %.2f = %.2f ", numeros[x], numeros[y], numeros[x] + numeros[y]);

    return 0;
}
```

#### Exercício 3: Escreva um programa que lê 6 valores inteiros pares. Caso seja digitado um valor ímpar, peça para que o usuário redigite um número. Uma vez preenchido com 6 valores pares, imprima na tela os valores lidos na ordem inversa.

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int tam = 6, pares[tam];

    for (int i = 0; i < tam; i++) {
        int numero_digitado;

        do {
            printf("Digite o %iº numero par: ", i + 1);
            scanf("%i", &numero_digitado);
            getchar();

            printf("\n");

        } while (numero_digitado % 2 != 0);

        pares[i] = numero_digitado;
    }

    for (int i = 0; i < tam; i++) {
        printf("%i ", pares[i]);
    }

    printf("\n");

    for (int i = tam - 1; i >= 0; i--) {
        printf("%i ", pares[i]);
    }

    return 0;
}
```
