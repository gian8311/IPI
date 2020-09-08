<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## ♦ Aula 33 - Vetores unidimensionais

### Tópico

Tipo de dado usado para armazenar um determinado número de elementos do mesmo tipo

Agora podemos criar variáveis do tipo vetor, e gerir vários valores

#### Criando um vetor

```c
tipo identificador[tamanho];
```

Exemplo real

```c
#include <stdio.h>

int main(void) {
    int numeros[10];

    char palavra[30];

    float notas[20];

    return 0;
}
```

Quando um vetor é criado, **10** espaços na memoria são reservados para a variável `numeros`, **30** para `palavra` e **20** para `notas`
