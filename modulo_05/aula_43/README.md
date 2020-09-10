<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 📝 Aula 43 - Strings

### Strings em C

A linguagem C não possui um tipo string pré-definido

A representação da string em C é como um vetor unidimensional de caracteres terminado pelo caractere '\0'

#### Importância de se trabalhar com strings

Uma string pode formar palavras ou frases:

- Nome
- CPF
- Endereço
- ...

Strings possuem uma gama de funcionalidades e peculiaridades específicas

#### Criando strings

```c
#include <stdio.h>

int main(void) {
    char palavra[30];
    char endereco[100];
    char cpf[14];

    return 0;
}
```

Na `palavra` nós temos **29** posições uteis, pois a ultima é utilizada para o **`\0`**
