<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## ✏ Aula 45 - Imprimindo e lendo strings com printf e scanf

### Imprimindo

A linguagem C possui um tipo `%s` para imprimir, sem precisar de um loop, como nós fazíamos com os vetores

#### Sintaxe

```c
#include <stdio.h>

int main(void) {
    char mensagem[10] = "Ola mundo";

    printf("%s", mensagem);
    return 0;
}
```

### Lendo

Geralmente os usuários fornecem informações

A função `scanf` permite fazer leitura de strings usando `%s`

#### Sintaxe

```c
#include <stdio.h>

int main(void) {
    char mensagem[20];

    printf("Digite uma mensagem: ");
    scanf("%s", mensagem);

    printf("A mensagem digitada foi: %s", mensagem);

    return 0;
}
```

Não é necessário utilizar o `&` antes da variável de string

O `scanf` tem uma limitação, ele não lê uma string completa com espaços, e também, ele não se preocupa com o tamanho do vetor

#### Ler com `scanf` com espaços

```c
#include <stdio.h>

int main(void) {
    char mensagem[20];

    printf("Digite uma mensagem: ");
    scanf ("%[^\n]%*c", mensagem);

    printf("A mensagem digitada foi: %s", mensagem);

    return 0;
}
```
