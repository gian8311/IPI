<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📑 Aula 26 - Exercícios de For

### Exercícios

#### Exercício 1: Escreva um programa que leia um número inteiro X. Imprima os 5 primeiros múltiplos de 3 e 7. Considerando números maiores que 0 e menores que X.

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    int x, divisores;
    printf("Digite o valor limite: ");
    scanf("%i", &x);

    for (int i = 0; i <= x; i++) {
        if (i % 3 == 0 & i % 7 == 0) {
            divisores++;
            if (divisores <= 5) {
                printf("%i ", i);
            } else {
                break;
            }
        }
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que leia 10 números reais e imprima o menor valor lido e o maior valor lido.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    float maior = -9999, menor = 9999;

    for (int i = 1; i <= 3; i++) {
        float numero;

        printf("Digite o %iº numero: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    printf("O maior numero digitado foi %.2f\n", maior);
    printf("O menor numero digitado foi %.2f", menor);

    return 0;
}
```

#### Exercício 3: Escreva um programa que receba dois números. Calcule e mostre:

- ##### A soma dos números pares desse intervalo de números, incluindo os números digitados.
- ##### A multiplicação dos números ímpares desse intervalo, incluindo os digitados.

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int comeco, fim, somaPares, multImpares;

    somaPares = 0;
    multImpares = 1;

    printf("Digite o comeco do intervalo: ");
    scanf("%i", &comeco);

    printf("Digite o fim do intervalo: ");
    scanf("%i", &fim);

    for (int i = comeco; i <= fim; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            multImpares *= i;
        }
    }
    printf("A soma dos números pares nesse intervalo eh %i\n", somaPares);
    printf("A multiplicação dos números impares nesse intervalo eh %i", multImpares);

    return 0;
}
```

#### Exercício 4: Escreva um programa que simula o lançamento de dois dados, d1 e d2 (d1 e d2 assumem valores aleatórios entre 1 e 6) N vezes (fornecido pelo usuário), e tem como saída o número de cada dado e a relação entre eles(<, >, =) de cada lançamento.

##### [Resposta](ex03.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numLancamentos;
    srand(time(NULL));

    printf("Digite quantas vezes os dados devem ser jogados: ");
    scanf("%i", &numLancamentos);

    for (int i = 1; i <= numLancamentos; i++) {
        int d1, d2;
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        if (d1 > d2) {
            printf("Lancamento %i: %i > %i\n", i, d1, d2);
        } else if (d1 < d2) {
            printf("Lancamento %i: %i < %i\n", i, d1, d2);
        } else {
            printf("Lancamento %i: %i = %i\n", i, d1, d2);
        }
    }

    return 0;
}
```
