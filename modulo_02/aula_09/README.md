<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## ⬆ Aula 9 - Funções nativas de entrada

### Comando de leitura

- A linguagem C tem recursos nativos para leitura
- Esses recursos encontram-se na biblioteca **stdio.h**

  - `std` = standard (_padrão_)
  - `i` = input (_entrada_)
  - `o` = output (_saída_)

### Lendo dados com o **_scanf_**

- A principal função usada para ler dados é o **_scanf_**

- Uso da função _scanf_:

  - `scanf("FDL", EDV)`
  - No qual:

    - `FDL` = Formatação de leitura (o tipo do valor que vai ser lido)
    - `EDV` = Endereço da variável que vai receber o valor lido

  - ```c
    #include <stdio.h>

    int main(void) {
        int a = 20;

        printf("%i\n", a);
        printf("%p", &a);

        return 0;
    }
    ```

  - O `%p` é utilizado para imprimir endereços e o `&a` é o endereço da variável `a` na memória

- Exemplos

- Exemplo 1

  - ```c
    #include <stdio.h>

    int main(void) {
        int peso;

        printf("Digite o seu peso: ");
        scanf("%i", &peso);

        printf("O seu peso eh %iKg", peso);

        return 0;
    }
    ```

  - O programa vai imprimir a mensagem `Digite o seu peso:` e esperar para que você digite um valor, depois de digitado (_exemplo_: 52), a frase `O seu peso eh 52Kg` é impressa

- Exemplo 2

  - ```c
    #include <stdio.h>

    int main(void) {
        float altura;

        printf("Digite a sua altura: ");
        scanf("%f", &altura);

        printf("A sua altura eh %fm", altura);

        return 0;
    }
    ```

  - O programa vai imprimir a mensagem `Digite a sua altura:` e esperar para que você digite um valor, depois de digitado (_exemplo_: 1.80), a frase `A sua altura eh 1.800000m` é impressa

- Exemplo 3 - Lendo mais de um valor ao mesmo tempo

  - ```c
    #include <stdio.h>

    int main(void) {
        float altura, peso;

        printf("Digite a sua altura e peso: ");
        scanf("%f %f", &altura, &peso);

        printf("A sua altura e peso são, respectivamente, %fm e %fKg", altura, peso);

        return 0;
    }
    ```

  - O programa vai imprimir a mensagem `Digite a sua altura e peso:` e esperar para que você digite os valores, depois de digitado (_exemplo_: 1.8, 25), a frase `A sua altura e peso são, respectivamente, 1.800000m e 25.000000Kg` é impressa

- Exemplo 4

  - ```c
    #include <stdio.h>

    int main(void) {
        int dia, mes, ano;

        printf("Digite o dia, mes e ano de nascimento: ");
        scanf("%i/%i/%i", &dia, &mes, &ano);

        printf("Você nasceu no dia %i do mes %i no ano de %i", dia, mes, ano);

        return 0;
    }
    ```

  - O programa vai imprimir a mensagem `Digite o dia, mes e ano de nascimento:` e esperar para que você digite os valores, depois de digitado (_exemplo_: 02/04/2000), a frase `Você nasceu no dia 2 do mes 4 no ano de 2000` é impressa

### Exercícios

#### Exercício 1: Escreva um programa que pede ao usuário que digite sua idade e que a imprima na tela.

##### [Resposta](ex01.c):

```c
#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Sua idade eh %i", idade);

    return 0;
}
```

#### Exercício 2: Escreva um programa que pede ao usuário que digite o dia, mês e o ano (todas as variáveis inteiras) em que nasceu e imprima na tela "Você nasceu no dia \_\_, do mês \_\_, do ano \_\_\_\_".

##### [Resposta](ex02.c):

```c
#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite a data do seu nascimento (dd/mm/aaaa): ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    printf("Você nasceu no dia %i, do mês %i, do ano %i.", dia, mes, ano);

    return 0;
}
```

#### Exercício 3: Escreva um programa que pede ao usuário que digite o seu peso e que o imprima na tela.

##### [Resposta](ex03.c):

```c
#include <stdio.h>

int main(void) {
    float peso;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("O seu peso eh %f.", peso);

    return 0;
}
```

#### Exercício 4: Escreva um programa que pede ao usuário que digite a primeira letra do seu nome e que a imprima na tela.

##### [Resposta](ex04.c):

```c
#include <stdio.h>

int main(void) {
    char primeiraLetra;

    printf("Escreva a primeira letra do seu nome: ");
    scanf("%c", &primeiraLetra);

    printf("A primeira letra do seu nome eh %c", primeiraLetra);
    return 0;
}
```
