<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## ✨ Aula 5 - Variáveis e Tipos

### Introdução

- Nos programas, dados são manipulados o tempo todo:

  - Dados fornecidos como entrada para o programa
  - Dados processados durante a execução do programa
  - Dados retornados como saída do programa

- A memória que armazena os dados durante a execução de um programa é a **Memória RAM**
  - É composta por um conjunto de células
  - Cada célula tem um endereço único e ordenado de forma crescente (cada endereço é identificado no formato **hexadecimal**)

### Variáveis

- O que seriam variáveis?

  - Uma variável é uma célula reservada na Memória RAM para armazenar um dado.

- Tipos de variáveis

  - Inteiros: `1`, `2`, `50`, `2000`, `123`, `-1`, `-56`, `0`
  - Real: `-1.23`, `2.56`, `1`, `345.1`
  - Caractere: `'a'`, `'!'`, `'9'`
  - Lógico: `0` ou `1`

- Declaração de variáveis

  - Exemplo 1

    - ```c
      #include <stdio.h>

      int main(void) {
        int a;

        return 0;
      }
      ```

    - Onde `int` é o tipo da variável (_inteiro_) e `a` o nome da variável (_identificador_)

  - Exemplo 2

    - ```c
      #include <stdio.h>

      int main(void) {

          int a;

          float b;

          char c;

          return 0;
      }
      ```

      - | Variável |      Tipo |
        | :------- | --------: |
        | `a`      |   inteiro |
        | `b`      |      real |
        | `c`      | caractere |

  - Exemplo 3

    - ```c
      #include <stdio.h>

      int main(void) {

          int a, d, e;

          float b, f;

          char c, g;

          return 0;
      }
      ```

      - | Variável      |      Tipo |
        | :------------ | --------: |
        | `a`, `d`, `e` |   inteiro |
        | `b`, `f`      |      real |
        | `c`, `g`      | caractere |
