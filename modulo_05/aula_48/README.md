<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## ✨ Aula 48 - Funcionalidades da `string.h`

### string.h

É uma biblioteca que apresenta várias funções para manipulação de strings:

- Copiar string
- Concatenar string
- Comparar string
- Retornar tamanho da string

### Copiando strings

#### strcpy

Copia uma string para a outra

##### Sintaxe

```c
strcpy(stringQueVaiReceberOValor, valorASerCopiadoParaString);
```

#### strncpy

Copia um numero de caracteres de uma string para a outra

##### Sintaxe

```c
strncpy(stringQueVaiReceberOValor, valorASerCopiadoParaString, nDeCaracteresASerCopiado);
```

### Concatenando strings

#### strcat

Concatena (adiciona) uma string a outra

##### Sintaxe

```c
strcat(stringQueVaiReceberAConcatenacao, valorASerConcatenadoAString);
```

#### strncat

Concatena (adiciona) um numero de caracteres de uma string a outra

##### Sintaxe

```c
strncat(stringQueVaiReceberAConcatenacao, valorASerConcatenadoAString,nDeCaracteresASerConcatenado);
```

### Comparando strings

#### strcmp

Copia uma string para a outra

##### Sintaxe

```c
strcmp(string1, string2);
```

#### strncmp

Compara um numero de caracteres de uma string com outra

##### Sintaxe

```c
strncmp(string1, string1, nDeCaracteresASerComparado);
```

### Tamanho da string

#### strlen

Retorna um inteiro com o numero de caracteres válidos de uma string

##### Sintaxe

```c
strlen(string)
```

### Exemplos

#### Exemplo 1 - Copiando strings com `strcpy`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[11];

    strcpy(mensagem, "ola mundo");

    printf("%s", mensagem);

    return 0;
}
```

Output: `ola mundo`

#### Exemplo 2 - Copiando strings com `strncpy`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[11];

    strncpy(mensagem, "ola mundo", 3);

    printf("%s", mensagem);

    return 0;
}
```

Output: `ola`

#### Exemplo 3 - Concatenando strings com `strcat`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[11] = "Ola";

    strcat(mensagem, " mundo");

    printf("%s", mensagem);

    return 0;
}
```

Output: `Ola mundo`

#### Exemplo 4 - Concatenando strings com `strncat`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[11] = "Ola";

    strncat(mensagem, " mundo", 3);

    printf("%s", mensagem);

    return 0;
}
```

Output: `Ola mu`

#### Exemplo 5 - Comparando strings com `strcmp`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1[11] = "abc";
    char palavra2[11] = "bca";

    int valor = strcmp(palavra1, palavra2);

    if (valor == 0) {
        printf("Sao iguais");
    } else if (valor < 0) {
        printf("A primeira palavra vem antes, alfabeticamente, do que a segunda!\n");
        printf("%s < %s", palavra1, palavra2);
    } else {
        printf("A segunda palavra vem antes, alfabeticamente, do que a segunda!\n");
        printf("%s > %s", palavra1, palavra2);
    }

    return 0;
}
```

Output:

`A primeira palavra vem antes, alfabeticamente, do que a segunda!`<br/>`abc > bca`

#### Exemplo 6 - Comparando strings com `strncmp`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1[11] = "abc";
    char palavra2[11] = "bca";

    int valor = strcmp(palavra1, palavra2);

    if (valor == 0) {
        printf("Sao iguais");
    } else if (valor < 0) {
        printf("A primeira palavra vem antes, alfabeticamente, do que a segunda!\n");
        printf("%s < %s", palavra1, palavra2);
    } else {
        printf("A segunda palavra vem antes, alfabeticamente, do que a segunda!\n");
        printf("%s > %s", palavra1, palavra2);
    }

    return 0;
}
```

Output:`Sao iguais`

Mesmo sendo strings diferentes, como só foram comparados os 3 primeiros caracteres elas são consideradas iguais

#### Exemplo 6 - Comparando strings com `strncmp`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[101];

    printf("Digite uma frase: ");
    fgets(frase, 101, stdin);

    int nCaracteres = strlen(frase);
    for (int i = 0; i < nCaracteres; i++) {
        printf("%c", frase[i]);
    }

    return 0;
}
```

Input: `Batatinha frita`

Output: `Batatinha frita`

Se usássemos o valor 101 no for, iria ser imprimido alguns lixos
