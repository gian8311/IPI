<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h>

## ⚡ Aula 48.1 - Desafio de Strings (Jogo da forca)

### Construa o jogo da forca

#### [Solução](solucao.c)

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[] = "amor";  // Palavra a ser adivinhada
    int tentativas = 5;       // Numero de vezes que o usuário pode errar

    int nCaracteres = strlen(palavra);  // Numero de caracteres validos

    char palavraTentativas[nCaracteres];

    // Preencher vetor de letras acertadas com _
    for (int i = 0; i < nCaracteres; i++) {
        palavraTentativas[i] = '_';
    }

    printf("=-=-=- Bem vindo ao jogo da forca -=-=-=\n\n");

    do {
        printf("Status: ");

        // Imprmir o vetor de letras acertadas

        for (int i = 0; i < nCaracteres; i++) {
            printf("%c ", palavraTentativas[i]);
        }

        // Ler tentativa
        char letra;
        printf("\n\nLetra: ");
        scanf("%c", &letra);
        getchar();

        int acertou = 0;

        // Buscar letra digitada no vetor palavra
        for (int i = 0; i < nCaracteres; i++) {
            if (letra == palavra[i]) {
                palavraTentativas[i] = letra;
                acertou = 1;
            }
        }
        if (acertou == 0) {
            tentativas--;
            printf("\nVoce errou e possui %i tentativas restantes.\n", tentativas);
        }
        printf("\n");

    } while (strcmp(palavra, palavraTentativas) != 0 && tentativas > 0);

    if (strcmp(palavra, palavraTentativas) == 0) {
        printf("Parabens!! Voce acertou a palavra %s!", palavra);
    } else {
        printf("Que pena, voce nao conseguiu! A palavra era %s!", palavra);
    }
}
```
