<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## 🔁 Aula 37 - Preenchendo o vetor com laços

### Nossa limitação

Atribuição e acesso de valores manualmente é inviável

```c
#include <stdio.h>

int main(void) {
    int vetor[100];

    vetor[0] = 4;
    vetor[1] = 5;
    vetor[2] = 47;
    vetor[3] = -56;

    ...???

    return 0;
}
```

Se fossemos preencher todos os valores manualmente seria muito demorado

### Manipulando vetores com laços

Observando o exemplo de cima, podemos perceber que o que muda é o **índice** do vetor, de _1 em 1_

```c
#include <stdio.h>

int main(void) {
    int vetor[10];

    for (int indice = 0; indice < 10; indice++) {
        printf("Digite o valor da posicao %i do vetor: ", indice);
        scanf("%i", &vetor[indice]);
        getchar();
    }

    return 0;
}
```

Os valores digitados vão ser armazenados em todas as posições do vetor

### Exemplos

#### Exemplo 1 - Atribuindo valores aleatórios a um vetor

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    float reais[100];

    for (int indice = 0; indice < 100; indice++) {
        reais[indice] = rand() % 100;
    }

    return 0;
}
```
