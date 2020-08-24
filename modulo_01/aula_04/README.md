<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 📖 Aula 4 - Apresentando a linguagem **C**

### História

- Linguagem criada por Brian Kernighan e Dennis M. Ritchie em 1972
- Criada a partir da linguagem **B**
- Linguagem de **alto nível**, porém possui instruções de **baixo**
- Foi criada com o objetivo de desenvolver o **UNIX**
- Uma das mais usadas

### Características

- Linguagem compilada (compila o código como um todo, se algum código, mesmo que não esteja sendo
  utilizado,
  apresentar algum erro vai ocorrer um erro de compilação)
- Poucas palavras reservadas
- Linguagem estruturada/sequencial/procedural: sequencia, decisão e repetição, além de funções e sub-rotinas

### Programas em C

- **Todo programa em C** consiste em uma ou mais funções
- **Todo programa em C** tem a função `main()`, que é a primeira função chamada pelo programa

### Exemplo

```c
#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}
```

No exemplo apresentado acima, o computador vai imprimir o texto "Hello World" por que esse comando está dentro da função `main`
