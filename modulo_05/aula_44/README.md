<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🖋 Aula 44 - Inicializando o valor de uma string

### Inicializando a string

#### No momento da declaração

##### Texto entre aspas duplas

```c
#include <stdio.h>

int main(void) {
    char nome[10] = "Meu nome";
    return 0;
}
```

##### Conjunto de caracteres entre aspas simples

```c
#include <stdio.h>

int main(void) {
    char nome[10] = {'M', 'e', 'u', ' ', 'n', 'o', 'm', 'e'};
    return 0;
}
```

##### Inicializando sem definir o tamanho do vetor

```c
#include <stdio.h>

int main(void) {
    char nome[] = "Meu nome";
    return 0;
}
```

O exemplo acima é equivalente a

```c
#include <stdio.h>

int main(void) {
    char nome[9] = "Meu nome";
    return 0;
}
```

pois `Meu nome` possui **8** caracteres + **1** do `\0`

#### O vetor de caractere é imutável

Mais ou menos... nós não podemos mudar o valor de uma string com o `=` após a declaração, porém conseguimos de outras formas
