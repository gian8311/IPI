<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## 🎲 Aula 14 - Geração de dados aleatórios

### Dados aleatórios com a _stdlib.h_

Muitos problemas exigem a geração de dados aleatórios

Para fazer uso de funções nativas responsáveis pela geração de dados aleatórios, basta incluir a biblioteca **_stdlib.h_** no seu projeto

#### A função `rand()`

A função `rand()` é utilizada para gerar números aleatórios

A função `rand()` retorna um valor **inteiro** entre 0 e o máximo inteiro possível `(RAND_MAX)`

### Dados aleatórios com a _stdlib.h_ e a _time.h_

A biblioteca tem uma função chamada `srand(semente)`

Essa função é usada pra determinar que a função `rand()` irá gerar um número aleatório levando em conta uma _semente_

Podemos usar o tempo da máquina como _semente_ para geração de números aleatórios

Como o tempo muda a cada instante serão gerados números aleatórios diferentes

### Exemplos

#### Exemplo 1 - Gerando um número aleatório

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r = rand();

    printf("%i", r);

    return 0;
}
```

Output: `32552`

Um número **_aleatório_** foi gerado e atribuído à variável r

#### Exemplo 2 - Gerando um número aleatório dentro de um intervalo

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r = rand() % 101;

    printf("%i", r);

    return 0;
}
```

Output: `41`

Um número **_aleatório_** entre 0 e 100 foi gerado e atribuído à variável r

**OBS¹**: Para gerar um número num intervalo de 0 a X, coloca-se o % X+1 após o `rand()`

**OBS²**: Se você executar esse código várias vezes o gerar um número aleatório, porém o mesmo todas as vezes

#### Exemplo 3 - Gerando um número aleatório com _stdlib.h_ e _time.h_

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = rand();

    printf("%i", r);

    return 0;
}
```

Output: `335280`

O tempo está gerando a _semente_ para o `rand()` para que o valor não seja o mesmo sempre

#### Exemplo 3 - Gerando um número aleatório com _stdlib.h_ e _time.h_ com um intervalo personalizado

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = 2 + rand() % 9;

    printf("%i", r);

    return 0;
}
```

Output: `5`

**OBS**: Para gerar um número num intervalo de X a Y, coloca-se o `X + rand() % (Y + 1 - X)`

### Exercícios

#### Exercício 1: Escreva um programa que gera dois números inteiros aleatórios no intervalo de 0 a 100. Imprima o primeiro elevado ao segundo.

##### [Resposta](ex01.c)

```c
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int num1 = rand() % 11;
    int num2 = rand() % 11;

    printf("%i elevado a %i eh igual a %f", num1, num2, pow(num1, num2));

    return 0;
}
```

#### Exercício 2: Escreva um programa que gera um número inteiro aleatório no intervalo de 50 a 200. Imprima 1 se o número for par e 0 se for impar

##### [Resposta](ex02.c)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int num = 50 + rand() % 151;

    int res = num % 2 == 0;

    printf("O número gerado foi %i\n", num);
    printf("%i", res);

    return 0;
}
```
