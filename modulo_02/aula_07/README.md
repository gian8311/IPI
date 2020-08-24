<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🔨 Aula 7 - Atribuindo valores às variáveis

### Atribuição de valores

- O comando de atribuição _`=`_ é utilizado
- Exemplos

  - Exemplo 1

    - ```c
      #include <stdio.h>

      int main(void) {

          int a;
          a = 20;

          return 0;
      }
      ```

    - No qual `a` recebe o valor `20`

  - Exemplo 2

    - ```c
      #include <stdio.h>

      int main(void) {

          int a = 20;

          return 0;
      }
      ```

    - No qual `a` recebe o valor `20`, porém dessa vez tudo feito na mesma linha

  - Exemplo 3

    - ```c
      #include <stdio.h>

      int main(void) {

          int a, b;
          a = b = 30;

          return 0;
      }
      ```

    - No qual `a` e `b` recebem o valor `30`

  - Exemplo 4

    - ```c
      #include <stdio.h>

      int main(void) {

          int a, b;

          b = 100;

          a = b;

          return 0;
      }
      ```

    - No qual `b` recebe o valor `100` e `a` recebe o valor armazenado em `b` (_`100`_)

  - Exemplo 5

    - ```c
      #include <stdio.h>

      int main(void) {

          int a;
          float b;

          b = 2.3;

          a = b;

          return 0;
      }
      ```

    - No qual `b` recebe o valor `2.3` e `a` recebe o valor armazenado em `b` (_`2.3`_) porém como `a` é um **inteiro** e `b` é um **real**, toda a parte depois da vírgula é **desconsiderada**. Sendo assim o valor de `a` passa a ser `2`
