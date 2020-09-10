<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🖍 Aula 46 - Imprimindo e lendo strings com puts e gets

### Imprimindo

Nós temos a função `puts` para imprimir uma string

#### Sintaxe

```c
#include <stdio.h>

int main(void) {
    char mensagem[5];

    printf("Digite uma mensagem: ");
    scanf("%s", mensagem);

    puts(mensagem);

    return 0;
}
```

A função `puts` recebe apenas a variável do tipo **string**, e imprime essa string, porém não possui formatação como a `printf`

### Lendo com gets

Nós temos a função `gets` como alternativa para o `scanf`

#### Sintaxe

```c
#include <stdio.h>

int main(void) {
    char mensagem[10];

    printf("Digite uma mensagem: ");
    gets(mensagem);

    printf("A mensagem digitada foi: %s", mensagem);

    return 0;
}
```

A função `gets` recebe apenas a variável do tipo **string**, e salva o valor digitado na mesma, podendo utilizar espaços

Ela também não considera se o que foi digitado é maior do que o tamanho do vetor

### Lendo com fgets

Nós temos a função `fgets` como alternativa para o `scanf` e o `gets`

O `gets` está depreciado nas novas versões da linguagem C

#### Sintaxe

```c
fgets(variavelString, tamanhoDoVetor, stdin);
```

#### Exemplo:

```c
#include <stdio.h>

int main(void) {
    char mensagem[10];

    printf("Digite uma mensagem: ");
    fgets(mensagem, 10, stdin);

    printf("A mensagem digitada foi: %s", mensagem);

    return 0;
}
```

O `fgets` exige que o tamanho da string seja respeitado

### Exemplos

#### Exemplo 1 - fgets limitando uma string

```c
#include <stdio.h>

int main(void) {
    char mensagem[3];

    printf("Digite uma mensagem: ");
    fgets(mensagem, 3, stdin);

    printf("A mensagem digitada foi: %s", mensagem);

    return 0;
}
```

Input: `ola`

Output: `A mensagem digitada foi: ol`

O **a** foi desconsiderado pois nós só tínhamos 2 espaços disponíveis pois o último é utilizado pelo `\0`
