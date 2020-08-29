<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 👀 Aula 20 - Possibilidades com condicionais

### Estrutura de condicionais

```c
if(expressao1) {
    if(expressao2) {
        sequencia de instrucoes 1
    } else {
        sequencia de instrucoes 2
    }
} else if(expressao3) {
    sequencia de instrucoes 3
} else {
    sequencia de instrucoes 4
}
```

Nós podemos colocar `if`s e `else`s dentro de `if`s

### Exercícios

#### Exercício 1: Escreva um programa que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.

#### A regra é a seguinte

- #### Nota 7 ou mais: passou direto
- #### Entre 4 e 7: Tem direito a fazer uma prova de recuperação
- #### Abaixo de 4: Reprovado direto

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota < 4) {
        printf("Que pena :( Voce foi reprovado!");
    } else {
        if (nota >= 7) {
            printf("Parabens!! Voce passou por media!");
        } else {
            printf("Voce nao passou, mas nao se preocupe, voce pode fazer uma prova de recuperacao!");
        }
    }

    return 0;
}
```

#### Exercício 2: Quero comprar um par de tênis para correr. O modelo comum custa R$300,00 e o modelo de competição custa R$600,00. Escreva um programa que pergunte quanto de dinheiro tenho (valor inteiro), e diga se posso comprar um par de tênis, e se sim, qual modelo seria.

##### [Resposta](ex02.c)

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

#### Exercício 3: Você está desenvolvendo um sistema de compra de carro. Esse sistema deve pedir a idade do usuário.

- #### Se a idade for menor que 18, deve imprimir que o usuário é de menor e não pode realizar a compra.
- #### Caso contrário, o sistema deve ler o dinheiro disponível do usuário, e em seguida imprimir as opções de carros:
  ##### 1 - BMW (R\$ 1.000)
  ##### 2 - Mercedes (R\$ 2.000)
  ##### 3 - Ferrari (R\$ 3.000)
  ##### 4 - Desistir

#### O usuário deve escolher a opção que deseja. Se escolher `desistir`, o sistema deve imprimir `você desistiu da compra`. Caso tenha escolhido o carro e seu dinheiro seja suficiente o sistema imprime `compra realizada com sucesso`. Se o dinheiro não for suficiente, o sistema deve imprimir `seu dinheiro é insuficiente`.

##### [Resposta](ex03.c)

```c
#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Você é de menor, não pode comprar nenhum carro!");
    } else {
        float dinheiro;

        printf("Digite a quantia que você possui em dinheiro: R$");
        scanf("%f", &dinheiro);

        printf("\nOpções\n");
        printf("1 - BMW (R$ 1.000)\n");
        printf("2 - Mercedes (R$ 2.000)\n");
        printf("3 - Ferrari (R$ 3.000)\n");
        printf("4 - Desistir\n");

        int opcao;

        printf("\nEscolha uma opção: ");
        scanf("%i", &opcao);

        if (opcao == 4) {
            printf("Você desistiu da compra");
        } else if (opcao == 1) {
            if (dinheiro >= 1000) {
                printf("Compra realizada com sucesso!");
            } else {
                printf("Seu dinheiro é insuficiente para essa compra!");
            }
        } else if (opcao == 2) {
            if (dinheiro >= 2000) {
                printf("Compra realizada com sucesso!");
            } else {
                printf("Seu dinheiro é insuficiente para essa compra!");
            }
        } else if (opcao == 3) {
            if (dinheiro >= 3000) {
                printf("Compra realizada com sucesso!");
            } else {
                printf("Seu dinheiro é insuficiente para essa compra!");
            }

            return 0;
        }
    }
}
```
