<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📍 Aula 47 - Manipulando strings, caractere a caractere

### Acessando valores de strings

Cada caractere da string pode ser acessado individualmente

### Atribuição de valores a uma string

A string pode ter seu valor definido:

- Inicialização manual
- scanf
- gets ou fgets

A linguagem C permite que o valor da string seja modificado caractere a caractere

### Exemplos

#### Exemplo 1 - Imprimindo o primeiro caractere de uma string

```c
#include <stdio.h>

int main(void) {
    char mensagem[11] = "Ola mundo";

    printf("O primeiro elemento da mensagem eh: %c", mensagem[0]);

    return 0;
}
```

Output: `O primeiro elemento da mensagem eh: O`

#### Exemplo 2 - Imprimindo caractere a caractere de uma string

```c
#include <stdio.h>

int main(void) {
    char mensagem[11] = "Gian";

    for (int i = 0; i < 10; i++) {
        printf("%c ", mensagem[i]);
    }

    return 0;
}
```

Output: `G i a n `

#### Exemplo 3 - Modificando caracteres de uma string não inicializada

```c
#include <stdio.h>

int main(void) {
    char mensagem[11];

    mensagem[0] = 'O';
    mensagem[1] = 'l';
    mensagem[2] = 'a';

    printf("A mensagem eh: %s", mensagem);

    return 0;
}
```

Output: `A mensagem eh: Ola`

#### Exemplo 3 - Modificando caracteres de uma string já inicializada

```c
#include <stdio.h>

int main(void) {
    char mensagem[11] = "ola mundo!";

    mensagem[0] = 'O';
    mensagem[1] = 'l';
    mensagem[2] = 'a';

    printf("A mensagem eh: %s", mensagem);

    return 0;
}
```

Output: `A mensagem eh: Ola mundo!`
