<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🔀 Aula 19 - Condicionais encadeadas

### Condicionais encadeadas

Permite entre duas ou mais sequencias de instruções qual delas será executada

#### Sintaxe

```c
if(expressao1){
    sequencia de instrucoes 1
} else if(expressao2) {
    sequencia de instrucoes 2
} else {
    sequencia de instrucoes 3
}
```

Se a `expressao1` for verdadeira a `sequencia de instrucoes 1` é executada, senão, se a `expressao2` for verdadeira, a `2` é executada, senão a `3` é executada

### Exemplos

#### Exemplo 1 - Título do exemplo

```c
#include <stdio.h>

int main(void) {
    int a;

    printf("Digite um valor: ");
    scanf("%i", &a);

    if (a < 0) {
        printf("%i eh menor que 0", a);
    } else if (a == 0) {
        printf("%i eh igual a 0", a);
    } else {
        printf("%i eh maior que 0", a);
    }

    return 0;
}
```

Input: `13`
Output: `13 eh maior que 0`

### Exercícios

#### Exercício 1: Escreva um programa que pergunte o dia, mês e ano do nascimento de uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estamos no ano de 2020

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite a sua data de nascimento (dd/mm/aaaa): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    if (ano > 2020) {
        printf("Você digitou um ano invalido!");
    } else if (mes < 1 || mes > 12) {
        printf("Você digitou um mes invalido!");
    } else if (dia < 1 || dia > 31) {
        printf("Você digitou um dia invalido!");
    } else {
        printf("Você digitou uma data de nascimento valida!");
    }

    return 0;
}
```

#### Exercício 2: Escreva um programa que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.

#### A regra é a seguinte:

- #### Nota 7 ou mais: passou direto
- #### Entre 4 e 7: Tem direito de fazer uma prova de recuperação
- #### Abaixo de 4: Reprovado direto

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7) {
        printf("Parabens!! Voce passou por media!");
    } else if (nota >= 4 && nota < 7) {
        printf("Voce nao passou, mas nao se preocupe, voce pode fazer uma prova de recuperacao!");
    } else {
        printf("Que pena :( Voce foi reprovado!");
    }

    return 0;
}
```

#### Exercício 3: Escreva um programa que recebe a idade de uma pessoa e imprima na tela em qual categoria ela se encontra

- #### 10 - 14 infantil
- #### 15 - 17 juvenil
- #### 18 - 25 adulto

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade > 25 || idade < 10) {
        printf("Voce nao se encontra em nenhum categoria!");
    } else {
        printf("Voce se encontra na categoria ");
    }

    if (idade >= 10 && idade <= 14) {
        printf("infantil!");
    } else if (idade >= 15 && idade <= 17) {
        printf("juvenil!");
    } else if (idade >= 18 && idade <= 25) {
        printf("adulto!");
    }

    return 0;
}
```

#### Exercício 4: Quero comprar um par de tênis para correr. O modelo comum custa R$300,00 e o modelo de competição custa R$600,00. Escreva um programa que pergunte quanto de dinheiro tenho (valor inteiro), e diga se posso comprar um par de tênis, e se sim, qual modelo seria.

##### [Resposta](ex04.c)

```c
#include <stdio.h>

int main(void) {
    int dinheiro;

    printf("Digite quanto de dinheiro você tem: ");
    scanf("%i", &dinheiro);

    if (dinheiro >= 300 && dinheiro < 600) {
        printf("Você pode comprar o tênis comum!");
    } else if (dinheiro >= 600) {
        printf("Você pode comprar o tênis de competição!");
    } else {
        printf("Você não pode comprar nenhum tênis! :(");
    }

    return 0;
}
```
