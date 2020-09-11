// 8 - Crie um programa que pede ao usuário o tamanho do texto que deseja digitar. Em seguida, o programa pede ao usuário que digite um texto.
// O programa deve transformar alguns dos caracteres em maiúsculos, outros em minúsculos e outros permanecem como estão. Para isso, você deve navegar por cada caractere do texto, e gerar um número aleatório 0 ou 1.
// Se o número gerado for 0, o caractere atual é convertido para minúsculo, se o número for 1, o caractere é convertido para maiúsculo. Imprima o texto resultante.

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int tam;

    printf("Digite o tamanho do texto que voce deseja digitar: ");
    scanf("%i", &tam);
    getchar();

    tam += 1;
    char texto[tam];

    printf("Digite o texto: ");
    scanf("%[^\n]%*c", texto);

    int tamanhoReal = strlen(texto);

    for (int i = 0; i < tamanhoReal; i++) {
        int aleatorio = rand() % 2;
        if (aleatorio == 0) {
            texto[i] = tolower(texto[i]);
        } else {
            texto[i] = toupper(texto[i]);
        }
    }

    printf("O texto apos modificado eh: %s", texto);

    return 0;
}