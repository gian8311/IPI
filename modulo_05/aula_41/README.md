<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📑 Aula 41 - Exercícios de Vetores uni-dimensionais 2

### Exercícios

#### Exercício 1: Escreva um programa que cria um vetor de inteiros com o tamanho 100. Atribua valores aleatórios entre 0 e 10. Um vez que o vetor estiver inicializado, peça ao usuário um numero inteiro entre 0 e 10 e imprima quantas vezes aquele número consta no vetor.

##### [Resposta](ex01.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 100, numeros[tam], numeroEscolhido, contador = 0;

    for (int i = 0; i < tam; i++) {
        numeros[i] = rand() % 11;
    }
    for (int i = 0; i < tam; i++) {
        printf("numeros[%i]: %i\n ", i, numeros[i]);
    }

    do {
        printf("\nDigite um valor entre 0 e 10: ");
        scanf("%i", &numeroEscolhido);
        getchar();

    } while (numeroEscolhido < 0 || numeroEscolhido > 10);

    for (int i = 0; i < tam; i++) {
        if (numeros[i] == numeroEscolhido) {
            contador++;
        }
    }

    printf("%i aparece %i vezes no vetor.\n\n", numeroEscolhido, contador);

    return 0;
}
```

#### Exercício 2: Escreva um programa que cria um vetor de 10 posições e o inicialize com números inteiros aleatórios no intervalo [0,50]. Preencha um segundo vetor apenas como os números ímpares do primeiro vetor. Imprima os 2 vetores, 2 elementos por linha.

##### [Resposta](ex02.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam = 10, numeros[tam];

    for (int i = 0; i < tam; i++) {
        numeros[i] = rand() % 51;
    }

    for (int i = 0; i < tam; i++) {
        printf("numeros[%i]: %i\n", i, numeros[i]);
    }

    int impares[tam], posicao = 0;

    for (int i = 0; i < tam; i++) {
        if (numeros[i] % 2 != 0) {
            impares[posicao] = numeros[i];
            posicao++;
        }
    }

    printf("\n\n");

    for (int i = 0; i < posicao; i++) {
        printf("impares[%i]: %i\n", i, impares[i]);
    }

    return 0;
}
```
