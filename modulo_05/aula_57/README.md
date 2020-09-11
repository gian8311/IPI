<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📑 Aula 57 - Exercícios de Vetores multidimensionais 3

### Exercícios

#### Exercício 1: Escreva um programa que armazena o nome e salário de 10 funcionários. Imprima na tela o nome e o salário das pessoas que possuem o maior e o menor salário.

##### [Resposta](ex01.c)

```c
#include <limits.h>
#include <stdio.h>

int main(void) {
    int funcionarios = 2, tam = 30;
    char nomes[funcionarios][tam];  // Armazena nomes por linha
    float salarios[funcionarios];   // Armazena os salarios
    float maiorSalario = INT_MIN, menorSalario = INT_MAX;
    int maiorFunc = 0, menorFunc = 0;

    printf("=-=-=- NOMES DOS FUNCIONARIOS -=-=-=\n\n");

    for (int i = 0; i < funcionarios; i++) {
        printf("Digite o nome do funcionario %i: ", i + 1);
        scanf("%[^\n]%*c", nomes[i]);
        printf("\n");
    }
    printf("=-=-=- SALARIOS DOS FUNCIONARIOS -=-=-=\n\n");

    for (int i = 0; i < funcionarios; i++) {
        printf("Digite o salario do funcionario %i: ", i + 1);
        scanf("%f", &salarios[i]);
        getchar();

        printf("\n");

        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
            maiorFunc = i;
        }
        if (salarios[i] < menorSalario) {
            menorSalario = salarios[i];
            menorFunc = i;
        }
    }

    printf("\n");
    printf("%s tem o maior salario no valor de R$ %.2f.\n", nomes[maiorFunc], maiorSalario);
    printf("%s tem o menor salario no valor de R$ %.2f.\n", nomes[menorFunc], menorSalario);

    return 0;
}
```
