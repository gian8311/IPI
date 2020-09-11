// 16 - O jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta, tendo como dica o número de letras e o tema ligado à palavra. A cada letra errada, o usuário perde uma tentativa (o número é determinado pelo programador). O jogo termina ou com o acerto da palavra ou com o término do número de tentativas.
// Para começar o jogo se imprime um underline correspondente ao lugar de cada letra.<br/>Por exemplo, para a palavra "AMOR", se escreve:
// A M O R → _ _ _ _
// O jogador que tenta adivinhar a palavra deve ir dizendo as letras que podem existir na palavra. Cada letra que ele acerta é escrita no espaço correspondente.
// A M O R → A _ O R
// Caso a letra não exista nessa palavra, imprime-se que a letra está incorreta, e reduz-se o número de tentativas.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[] = "amor";
    int tentativas = 6;

    int tamanhoDaPalavra = strlen(palavra);

    char palavraTentando[tamanhoDaPalavra];

    for (int i = 0; i < tamanhoDaPalavra; i++) {
        palavraTentando[i] = '_';
    }

    printf("=-=-=- Bem vindo ao jogo da forca -=-=-=\n");
    printf("\nVoce tem %i tentativas para acertar a palavra!\n\n", tentativas);

    do {
        printf("Status: ");

        // Imprimir o vetor de letras acertadas
        for (int i = 0; i < tamanhoDaPalavra; i++) {
            printf("%c ", palavraTentando[i]);
        }

        printf("\n");

        // Ler chute
        char chute;
        printf("\nLetra: ");
        scanf("%c", &chute);
        getchar();

        // Transformar o chute em minúsculo
        chute = tolower(chute);

        printf("\n");

        int acertou = 0;

        // Procurar a letra digitada na palavra
        for (int i = 0; i < tamanhoDaPalavra; i++) {
            if (chute == palavra[i]) {
                palavraTentando[i] = chute;
                acertou = 1;
            }
        }

        if (!acertou) {
            tentativas--;
            printf("Voce errou e possui %i tentativas restantes!\n\n", tentativas);
        }

    } while (strcmp(palavra, palavraTentando) != 0 && tentativas > 0);

    if (strcmp(palavra, palavraTentando) == 0) {
        printf("Parabens!! Voce acertou a palavra %s!", palavra);
    } else {
        printf("Que pena, voce nao conseguiu! A palavra era %s!", palavra);
    }
}