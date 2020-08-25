<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## ⬇ Aula 8 - Funções nativas de saída

### Comando de impressão

- A linguagem C tem vários recursos nativo para impressão
- Esses recursos encontram-se na biblioteca **stdio.h**

  - `std` = standard (_padrão_)
  - `i` = input (_entrada_)
  - `o` = output (_saída_)

- Exemplo

  - ```c
    #include <stdio.h>

    int main(void) {
      return 0;
    }
    ```

  - Nesse exemplo nós estamos incluindo a biblioteca **`stdio.h`** no nosso projeto com o `#include`

### Imprimindo com o **_printf_**

- A principal função usada para imprimir é o **_printf_**
- Exemplos

  - Exemplo 1

    - ```c
      #include <stdio.h>

      int main(void) {

          printf("Hello World!");

          return 0;
      }
      ```

    - Output: `Hello World!`

  - Exemplo 2

    - ```c
      #include <stdio.h>

      int main(void) {
          int idade = 20;

          printf("Minha idade eh: %i", idade);

          return 0;
      }
      ```

    - No exemplo acima é usado o `%i` para indicar que um valor **inteiro** vai ser colocado nesse lugar e a variável `idade` logo após, para substituir o `%i`

    - Output: `Minha idade eh: 20`

  - Exemplo 3

    - ```c
      #include <stdio.h>

      int main(void) {
          int idade = 20;

          float peso = 69.6;

          printf("O meu peso eh: %f\n", peso);
          printf("Minha idade eh: %i", idade);

          return 0;
      }
      ```

    - No exemplo acima, bem parecido com o exemplo 2, é usado o `%f` para indicar que um valor **real** vai ser colocado no lugar e a variável `peso` para substituir o `%f`

    - Output: `O meu peso eh: 69.599998`
      `Minha idade eh: 20`

  - Exemplo 4

    - ```c
      #include <stdio.h>

      int main(void) {
          int idade = 20;

          float peso = 69.6;

          char primeiraLetra = 'G';

          printf("A primeira letra do meu nome eh: %c\n", primeiraLetra);
          printf("O meu peso eh: %f\n", peso);
          printf("Minha idade eh: %i", idade);

          return 0;
      }
      ```

    - Similarmente ao exemplo 3, é inserido o `%c` para indicar que um valor de **caractere** vai ser colocado no lugar e a variável `primeiraLetra` para substituir o `%c`
    - Output:`A primeira letra do meu nome eh: G`
      `O meu peso eh: 69.599998`
      `Minha idade eh: 20`

### Exercícios

#### Exercício 1: Usando o printf, imprima a mensagem: "Eu adoro programar em C".

##### [Resposta](ex01.c)

```c
#include <stdio.h>

int main(void) {
    printf("Eu adoro programar em C");

    return 0;
}
```

#### Exercício 2: Crie três variáveis, uma inteira, uma real e outra caractere, e atribua valores a elas. Após a atribuição, imprima seus valores usando o printf.

##### [Resposta](ex02.c)

```c
#include <stdio.h>

int main(void) {
    int a = 25;
    float b = 2.3;
    char c = 'O';

    printf("Os valores de a, b e c são, respectivamente: %i, %f, %c", a, b, c);

    return 0;
}
```
